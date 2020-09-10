// SPDX-License-Identifier: GPL-2.0
/*
 * THC63LVD1024 LVDS to parallel data DRM bridge driver.
 *
 * Copyright (C) 2018 Jacopo Mondi <jacopo+renesas@jmondi.org>
 */

#include <drm/drmP.h>
#include <drm/drm_bridge.h>
#include <drm/drm_panel.h>

#include <linux/gpio/consumer.h>
#include <linux/of_graph.h>
#include <linux/regulator/consumer.h>

enum thc63_ports {
	THC63_LVDS_IN0,
	THC63_LVDS_IN1,
	THC63_RGB_OUT0,
	THC63_RGB_OUT1,
};

struct thc63_dev {
	struct device *dev;

	struct regulator *vcc;

	struct gpio_desc *pdwn;
	struct gpio_desc *oe;

	struct drm_bridge bridge;
	struct drm_bridge *next;
};

static inline struct thc63_dev *to_thc63(struct drm_bridge *bridge)
{
	return container_of(bridge, struct thc63_dev, bridge);
}

static int thc63_attach(struct drm_bridge *bridge)
{
	struct thc63_dev *thc63 = to_thc63(bridge);

	return drm_bridge_attach(bridge->encoder, thc63->next, bridge);
}

static enum drm_mode_status thc63_mode_valid(struct drm_bridge *bridge,
					const struct drm_display_mode *mode)
{
	/*
	 * The THC63LVD0124 clock frequency range is 8 to 135 MHz in single-in,
	 * single-out mode. Note that the limits depends on the mode and will
	 * need to be adjusted accordingly.
	 */
	if (mode->clock < 8000)
		return MODE_CLOCK_LOW;

	if (mode->clock > 135000)
		return MODE_CLOCK_HIGH;

	/* Refresh rate 30 or less of full HD is basically not used,
	 * so remove it.
	 */
	if (mode->hdisplay == 1920 && mode->vdisplay == 1080 &&
	    mode->vrefresh <= 30)
		return MODE_V_ILLEGAL;

	return MODE_OK;
}

static void thc63_enable(struct drm_bridge *bridge)
{
	struct thc63_dev *thc63 = to_thc63(bridge);
	int ret;

	ret = regulator_enable(thc63->vcc);
	if (ret) {
		dev_err(thc63->dev,
			"Failed to enable regulator \"vcc\": %d\n", ret);
		return;
	}

	if (thc63->pdwn)
		gpiod_set_value(thc63->pdwn, 0);

	if (thc63->oe)
		gpiod_set_value(thc63->oe, 1);
}

static void thc63_disable(struct drm_bridge *bridge)
{
	struct thc63_dev *thc63 = to_thc63(bridge);
	int ret;

	if (thc63->oe)
		gpiod_set_value(thc63->oe, 0);

	if (thc63->pdwn)
		gpiod_set_value(thc63->pdwn, 1);

	ret = regulator_disable(thc63->vcc);
	if (ret)
		dev_err(thc63->dev,
			"Failed to disable regulator \"vcc\": %d\n", ret);
}

static const struct drm_bridge_funcs thc63_bridge_func = {
	.attach	= thc63_attach,
	.mode_valid = thc63_mode_valid,
	.enable = thc63_enable,
	.disable = thc63_disable,
};

static int thc63_parse_dt(struct thc63_dev *thc63)
{
	struct device_node *thc63_out;
	struct device_node *remote;

	thc63_out = of_graph_get_endpoint_by_regs(thc63->dev->of_node,
						  THC63_RGB_OUT0, -1);
	if (!thc63_out) {
		dev_err(thc63->dev, "Missing endpoint in port@%u\n",
			THC63_RGB_OUT0);
		return -ENODEV;
	}

	remote = of_graph_get_remote_port_parent(thc63_out);
	of_node_put(thc63_out);
	if (!remote) {
		dev_err(thc63->dev, "Endpoint in port@%u unconnected\n",
			THC63_RGB_OUT0);
		return -ENODEV;
	}

	if (!of_device_is_available(remote)) {
		dev_err(thc63->dev, "port@%u remote endpoint is disabled\n",
			THC63_RGB_OUT0);
		of_node_put(remote);
		return -ENODEV;
	}

	thc63->next = of_drm_find_bridge(remote);
	if (!thc63->next) {
		of_node_put(remote);
		return -EPROBE_DEFER;
	}

	return 0;
}

static int thc63_gpio_init(struct thc63_dev *thc63)
{
	thc63->oe = devm_gpiod_get_optional(thc63->dev, "enable", GPIOD_OUT_LOW);
	if (IS_ERR(thc63->oe)) {
		dev_err(thc63->dev, "Unable to get \"enable-gpios\": %ld\n",
			PTR_ERR(thc63->oe));
		return PTR_ERR(thc63->oe);
	}

	thc63->pdwn = devm_gpiod_get_optional(thc63->dev, "powerdown",
					      GPIOD_OUT_HIGH);
	if (IS_ERR(thc63->pdwn)) {
		dev_err(thc63->dev, "Unable to get \"powerdown-gpios\": %ld\n",
			PTR_ERR(thc63->pdwn));
		return PTR_ERR(thc63->pdwn);
	}

	return 0;
}

static int thc63_probe(struct platform_device *pdev)
{
	struct thc63_dev *thc63;
	int ret;

	thc63 = devm_kzalloc(&pdev->dev, sizeof(*thc63), GFP_KERNEL);
	if (!thc63)
		return -ENOMEM;

	thc63->dev = &pdev->dev;
	platform_set_drvdata(pdev, thc63);

	thc63->vcc = devm_regulator_get(thc63->dev, "vcc");
	if (IS_ERR(thc63->vcc)) {
		if (PTR_ERR(thc63->vcc) == -EPROBE_DEFER)
			return -EPROBE_DEFER;

		dev_err(thc63->dev, "Unable to get \"vcc\" supply: %ld\n",
			PTR_ERR(thc63->vcc));
		return PTR_ERR(thc63->vcc);
	}

	ret = thc63_gpio_init(thc63);
	if (ret)
		return ret;

	ret = thc63_parse_dt(thc63);
	if (ret)
		return ret;

	thc63->bridge.driver_private = thc63;
	thc63->bridge.of_node = pdev->dev.of_node;
	thc63->bridge.funcs = &thc63_bridge_func;

	drm_bridge_add(&thc63->bridge);

	return 0;
}

static int thc63_remove(struct platform_device *pdev)
{
	struct thc63_dev *thc63 = platform_get_drvdata(pdev);

	drm_bridge_remove(&thc63->bridge);

	return 0;
}

static const struct of_device_id thc63_match[] = {
	{ .compatible = "thine,thc63lvd1024", },
	{ },
};
MODULE_DEVICE_TABLE(of, thc63_match);

static struct platform_driver thc63_driver = {
	.probe	= thc63_probe,
	.remove	= thc63_remove,
	.driver	= {
		.name		= "thc63lvd1024",
		.of_match_table	= thc63_match,
	},
};
module_platform_driver(thc63_driver);

MODULE_AUTHOR("Jacopo Mondi <jacopo@jmondi.org>");
MODULE_DESCRIPTION("Thine THC63LVD1024 LVDS decoder DRM bridge driver");
MODULE_LICENSE("GPL v2");
