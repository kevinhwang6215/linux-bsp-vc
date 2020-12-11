/* Renesas RSWITCH2 device driver
 *
 * Copyright (C) 2020 Renesas Electronics Corporation
 *
 *
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License version 2,
 * as published by the Free Software Foundation.
 */

#ifndef __RSWITCH2_REG_H__
#define __RSWITCH2_REG_H__


#define FWRO             0x0
#define PTPRO            0x0
#define CARO             0x9000
#define GWRO             0x0000 // Handled as platform resources
#define TARO             0x00000   // Care Taken in Platform resources
#define RMRO             0x1000 //TBD
enum rswitch2_reg {
    FWGC	=	FWRO + 0x0000,
    FWTTC0	=	FWRO + 0x0010,
    FWTTC1	=	FWRO + 0x0014,
    FWLBMC	=	FWRO + 0x0018,
    FWCEPTC	=	FWRO + 0x020,
    FWCEPRC0	=	FWRO + 0x024,
    FWCEPRC1	=	FWRO + 0x028,
    FWCEPRC2	=	FWRO + 0x02C,
    FWCLPTC	=	FWRO + 0x030,
    FWCLPRC	=	FWRO + 0x034,
    FWCMPTC	=	FWRO + 0x040,
    FWEMPTC	=	FWRO + 0x044,
    FWSDMPTC	=	FWRO + 0x050,
    FWSDMPVC	=	FWRO + 0x054,
    FWLBWMC0	=	FWRO + 0x080,
    FWPC00      =       FWRO + 0x100,
    FWPC10      =       FWRO + 0x104,
    FWPC20      =       FWRO + 0x108,
    FWCTGC00    =       FWRO + 0x400,
    FWCTGC10    =       FWRO + 0x404,
    FWCTTC00    =       FWRO + 0x408,
    FWCTTC10    =       FWRO + 0x40C,
    FWCTTC200   =       FWRO + 0x410,
    FWCTSC00    =       FWRO + 0x420,
    FWCTSC10    =       FWRO + 0x424,
    FWCTSC20    =       FWRO + 0x428,
    FWCTSC30    =       FWRO + 0x42C,
    FWCTSC40    =       FWRO + 0x430,
    FWTWBFC0	=	FWRO + 0x1000,
    FWTWBFVC0	=	FWRO + 0x1004, 
    FWTHBFC0	=	FWRO + 0x1400, 
    FWTHBFV0C0	=	FWRO + 0x1404, 
    FWTHBFV1C0	=	FWRO + 0x1408, 
    FWFOBFC0	=	FWRO + 0x1800, 
    FWFOBFV0C0	=	FWRO + 0x1804, 
    FWFOBFV1C0	=	FWRO + 0x1808, 
    FWRFC0	=	FWRO + 0x1C00, 
    FWRFVC0	=	FWRO + 0x1C04,
    FWCFC0	=	FWRO + 0x2000, 
    FWCFMC00	=	FWRO + 0x2004,
    FWIP4SC     =       FWRO + 0x4008, 
    FWIP6SC	=	FWRO + 0x4018,
    FWIP6OC	=	FWRO + 0x401C,
    FWL2SC	=	FWRO + 0x4020,
    FWSFHEC	=	FWRO + 0x4030,
    FWSHCR0	=	FWRO + 0x4040,
    FWSHCR1	=	FWRO + 0x4044,
    FWSHCR2	=	FWRO + 0x4048,
    FWSHCR3	=	FWRO + 0x404C,
    FWSHCR4	=	FWRO + 0x4050,
    FWSHCR5	=	FWRO + 0x4054,
    FWSHCR6	=	FWRO + 0x4058,
    FWSHCR7	=	FWRO + 0x405C,
    FWSHCR8	=	FWRO + 0x4060,
    FWSHCR9	=	FWRO + 0x4064,
    FWSHCR10	=	FWRO + 0x4068,
    FWSHCR11	=	FWRO + 0x406C,
    FWSHCR12	=	FWRO + 0x4070,
    FWSHCR13	=	FWRO + 0x4074,
    FWSHCRR	=	FWRO + 0x4078,
    FWLTHHEC	=	FWRO + 0x4090,
    FWLTHHC	=	FWRO + 0x4094,
    FWLTHTL0	=	FWRO + 0x40A0,
    FWLTHTL1	=	FWRO + 0x40A4,
    FWLTHTL2	=	FWRO + 0x40A8,
    FWLTHTL3	=	FWRO + 0x40AC,
    FWLTHTL4	=	FWRO + 0x40B0,
    FWLTHTL5	=	FWRO + 0x40B4,
    FWLTHTL6	=	FWRO + 0x40B8,
    FWLTHTL7	=	FWRO + 0x40BC,
    FWLTHTL80	=	FWRO + 0x40C0,
    FWLTHTL9	=	FWRO + 0x40D0,
    FWLTHTLR	=	FWRO + 0x40D4,
    FWLTHTIM	=	FWRO + 0x40E0,
    FWLTHTEM	=	FWRO + 0x40E4,
    FWLTHTS0	=	FWRO + 0x4100,
    FWLTHTS1	=	FWRO + 0x4104,
    FWLTHTS2	=	FWRO + 0x4108,
    FWLTHTS3	=	FWRO + 0x410C,
    FWLTHTS4	=	FWRO + 0x4110,
    FWLTHTSR0	=	FWRO + 0x4120,
    FWLTHTSR1	=	FWRO + 0x4124,
    FWLTHTSR2	=	FWRO + 0x4128,
    FWLTHTSR3	=	FWRO + 0x412C,
    FWLTHTSR40	=	FWRO + 0x4130,
    FWLTHTSR5	=	FWRO + 0x4140,
    FWLTHTR	=	FWRO + 0x4150,
    FWLTHTRR0	=	FWRO + 0x4154,
    FWLTHTRR1	=	FWRO + 0x4158,
    FWLTHTRR2	=	FWRO + 0x415C,
    FWLTHTRR3	=	FWRO + 0x4160,
    FWLTHTRR4	=	FWRO + 0x4164,
    FWLTHTRR5	=	FWRO + 0x4168,
    FWLTHTRR6	=	FWRO + 0x416C,
    FWLTHTRR7	=	FWRO + 0x4170,
    FWLTHTRR8	=	FWRO + 0x4174,
    FWLTHTRR9	=	FWRO + 0x4180,
    FWLTHTRR10	=	FWRO + 0x4190,
    FWIPHEC	=	FWRO + 0x4214,
    FWIPHC	=	FWRO + 0x4218,
    FWIPTL0	=	FWRO + 0x4220,
    FWIPTL1	=	FWRO + 0x4224,
    FWIPTL2	=	FWRO + 0x4228,
    FWIPTL3	=	FWRO + 0x422C,
    FWIPTL4	=	FWRO + 0x4230,
    FWIPTL5	=	FWRO + 0x4234,
    FWIPTL6	=	FWRO + 0x4238,
    FWIPTL7	=	FWRO + 0x4240,
    FWIPTL8	=	FWRO + 0x4250,
    FWIPTLR	=	FWRO + 0x4254,
    FWIPTIM	=	FWRO + 0x4260,
    FWIPTEM	=	FWRO + 0x4264,
    FWIPTS0	=	FWRO + 0x4270,
    FWIPTS1	=	FWRO + 0x4274,
    FWIPTS2	=	FWRO + 0x4278,
    FWIPTS3	=	FWRO + 0x427C,
    FWIPTS4	=	FWRO + 0x4280,
    FWIPTSR0	=	FWRO + 0x4284,
    FWIPTSR1	=	FWRO + 0x4288,
    FWIPTSR2	=	FWRO + 0x428C,
    FWIPTSR3	=	FWRO + 0x4290,
    FWIPTSR4	=	FWRO + 0x42A0,
    FWIPTR	=	FWRO + 0x42B0,
    FWIPTRR0	=	FWRO + 0x42B4,
    FWIPTRR1	=	FWRO + 0x42B8,
    FWIPTRR2	=	FWRO + 0x42BC,
    FWIPTRR3	=	FWRO + 0x42C0,
    FWIPTRR4	=	FWRO + 0x42C4,
    FWIPTRR5	=	FWRO + 0x42C8,
    FWIPTRR6	=	FWRO + 0x42CC,
    FWIPTRR7	=	FWRO + 0x42D0,
    FWIPTRR8	=	FWRO + 0x42E0,
    FWIPTRR9	=	FWRO + 0x42F0,
    FWIPHLEC	=	FWRO + 0x4300,
    FWIPAGUSPC	=	FWRO + 0x4500,
    FWIPAGC	=	FWRO + 0x4504,
    FWIPAGM0	=	FWRO + 0x4510,
    FWIPAGM1	=	FWRO + 0x4514,
    FWIPAGM2	=	FWRO + 0x4518,
    FWIPAGM3	=	FWRO + 0x451C,
    FWIPAGM4	=	FWRO + 0x4520,
    FWMACHEC	=	FWRO + 0x4620,
    FWMACHC	=	FWRO + 0x4624,
    FWMACTL0	=	FWRO + 0x4630,
    FWMACTL1	=	FWRO + 0x4634,
    FWMACTL2	=	FWRO + 0x4638,
    FWMACTL3	=	FWRO + 0x463C,
    FWMACTL4	=	FWRO + 0x4640,
    FWMACTL5	=	FWRO + 0x4650,
    FWMACTLR	=	FWRO + 0x4654,
    FWMACTIM	=	FWRO + 0x4660,
    FWMACTEM	=	FWRO + 0x4664,
    FWMACTS0	=	FWRO + 0x4670,
    FWMACTS1	=	FWRO + 0x4674,
    FWMACTSR0	=	FWRO + 0x4678,
    FWMACTSR1	=	FWRO + 0x467C,
    FWMACTSR2	=	FWRO + 0x4680,
    FWMACTSR3	=	FWRO + 0x4690,
    FWMACTR	=	FWRO + 0x46A0,
    FWMACTRR0	=	FWRO + 0x46A4,
    FWMACTRR1	=	FWRO + 0x46A8,
    FWMACTRR2	=	FWRO + 0x46AC,
    FWMACTRR3	=	FWRO + 0x46B0,
    FWMACTRR4	=	FWRO + 0x46B4,
    FWMACTRR5	=	FWRO + 0x46C0,
    FWMACTRR6	=	FWRO + 0x46D0,
    FWMACHLEC	=	FWRO + 0x4700,
    FWMACAGUSPC	=	FWRO + 0x4880,
    FWMACAGC	=	FWRO + 0x4884,
    FWMACAGM0	=	FWRO + 0x4888,
    FWMACAGM1	=	FWRO + 0x488C,
    FWVLANTEC	=	FWRO + 0x4900,
    FWVLANTL0	=	FWRO + 0x4910,
    FWVLANTL1	=	FWRO + 0x4914,
    FWVLANTL2	=	FWRO + 0x4918,
    FWVLANTL3	=	FWRO + 0x4920,
    FWVLANTL4	=	FWRO + 0x4930,
    FWVLANTLR	=	FWRO + 0x4934,
    FWVLANTIM	=	FWRO + 0x4940,
    FWVLANTEM	=	FWRO + 0x4944,
    FWVLANTS	=	FWRO + 0x4950,
    FWVLANTSR0	=	FWRO + 0x4954,
    FWVLANTSR1	=	FWRO + 0x4958,
    FWVLANTSR2	=	FWRO + 0x4960,
    FWVLANTSR3	=	FWRO + 0x4970,
    FWPBFC0	=	FWRO + 0x4A00,
    FWPBFCSDC00	=	FWRO + 0x4A04,
    FWL23URL0	=	FWRO + 0x4E00,
    FWL23URL1	=	FWRO + 0x4E04,
    FWL23URL2	=	FWRO + 0x4E08,
    FWL23URL3	=	FWRO + 0x4E0C,
    FWL23URLR	=	FWRO + 0x4E10,
    FWL23UTIM	=	FWRO + 0x4E20,
    FWL23URR	=	FWRO + 0x4E30,
    FWL23URRR0	=	FWRO + 0x4E34,
    FWL23URRR1	=	FWRO + 0x4E38,
    FWL23URRR2	=	FWRO + 0x4E3C,
    FWL23URRR3	=	FWRO + 0x4E40,
    FWL23URMC0	=	FWRO + 0x4F00,   				
    FWPMFGC0	=       FWRO + 0x5000,
    FWPGFC0	=       FWRO + 0x5100,
    FWPGFIGSC0	=       FWRO + 0x5104,
    FWPGFENC0	=       FWRO + 0x5108,
    FWPGFENM0	=       FWRO + 0x510c,
    FWPGFCSTC00	=       FWRO + 0x5110,
    FWPGFCSTC10	=       FWRO + 0x5114,
    FWPGFCSTM00	=       FWRO + 0x5118,
    FWPGFCSTM10	=       FWRO + 0x511C,
    FWPGFCTC0	=       FWRO + 0x5120,
    FWPGFCTM0	=       FWRO + 0x5124,
    FWPGFHCC0	=       FWRO + 0x5128,
    FWPGFSM0	=       FWRO + 0x512C,
    FWPGFGC0	=       FWRO + 0x5130,
    FWPGFGL0	=       FWRO + 0x5500,
    FWPGFGL1	=       FWRO + 0x5504,
    FWPGFGLR	=       FWRO + 0x5518,
    FWPGFGR	=       FWRO + 0x5510,
    FWPGFGRR0	=       FWRO + 0x5514,
    FWPGFGRR1	=       FWRO + 0x5518,
    FWPGFRIM	=       FWRO + 0x5520,
    FWPMTRFC0	=       FWRO + 0x5600,
    FWPMTRCBSC0	=       FWRO + 0x5604,
    FWPMTRC0RC0	=       FWRO + 0x5608,
    FWPMTREBSC0	=       FWRO + 0x560C,
    FWPMTREIRC0	=       FWRO + 0x5610,
    FWPMTRFM0	=       FWRO + 0x5614,
    FWFTL0	=       FWRO + 0x6000,
    FWFTL1	=       FWRO + 0x6004,
    FWFTLR	=       FWRO + 0x6008,
    FWFTOC	=       FWRO + 0x6010,
    FWFTOPC     =       FWRO + 0x6014,
    FWFTIM	=       FWRO + 0x6020,
    FWFTR	=       FWRO + 0x6030,
    FWFTRR0	=       FWRO + 0x6034,
    FWFTRR1	=       FWRO + 0x6038,
    FWFTRR2	=       FWRO + 0x603C,
    FWSEQNGC0	=       FWRO + 0x6100,
    FWSEQNGM0	=       FWRO + 0x6104,
    FWSEQNRC	=       FWRO + 0x6200,
    FWCTFDCN0	=       FWRO + 0x6300,
    FWLTHFDCN0	=       FWRO + 0x6304,
    FWIPFDCN0	=       FWRO + 0x6308,
    FWLTWFDCN0	=       FWRO + 0x630C,
    FWPBFDCN0	=       FWRO + 0x6310,
    FWMHLCN0	=       FWRO + 0x6314,
    FWIHLCN0	=       FWRO + 0x6318,
    FWICRDCN0	=       FWRO + 0x6500,
    FWWMRDCN0	=       FWRO + 0x6504,
    FWCTRDCN0	=       FWRO + 0x6508,
    FWLTHRDCN0	=       FWRO + 0x650C,
    FWIPRDCN0	=       FWRO + 0x6510,
    FWLTWRDCN0	=       FWRO + 0x6514,
    FWPBRDCN0	=       FWRO + 0x6518,
    FWPMFDCN0	=       FWRO + 0x6700,
    FWPGFDCN0	=       FWRO + 0x6780,
    FWPMGDCN0	=       FWRO + 0x6800,
    FWPMYDCN0	=       FWRO + 0x6804,
    FWPMRDCN0	=       FWRO + 0x6808,
    FWFRPPCN0	=       FWRO + 0x6A00,
    FWFRDPCN0	=       FWRO + 0x6A04,
    FWEIS00	=       FWRO + 0x7900,
    FWEIE00	=       FWRO + 0x7904,
    FWEID00	=       FWRO + 0x7908,
    FWEIS1	=       FWRO + 0x7A00,
    FWEIE1	=       FWRO + 0x7A04,
    FWEID1	=       FWRO + 0x7A08,
    FWEIS2	=       FWRO + 0x7A10,
    FWEIE2	=       FWRO + 0x7A14,
    FWEID2	=       FWRO + 0x7A18,
    FWEIS3	=       FWRO + 0x7A20,
    FWEIE3	=       FWRO + 0x7A24,
    FWEID3	=       FWRO + 0x7A28,
    FWEIS4	=       FWRO + 0x7A30,
    FWEIE4	=       FWRO + 0x7A34,
    FWEID4	=       FWRO + 0x7A38,
    FWEIS5	=       FWRO + 0x7A40,
    FWEIE5	=       FWRO + 0x7A44,
    FWEID5	=       FWRO + 0x7A48,
    FWEIS60	=       FWRO + 0x7A50,
    FWEIE60	=       FWRO + 0x7A54,
    FWEID60	=       FWRO + 0x7A58,
    FWEIS61	=       FWRO + 0x7A60,
    FWEIE61	=       FWRO + 0x7A64,
    FWEID61	=       FWRO + 0x7A68,
    FWEIS62	=       FWRO + 0x7A70,
    FWEIE62	=       FWRO + 0x7A74,
    FWEID62	=       FWRO + 0x7A78,
    FWEIS63	=       FWRO + 0x7A80,
    FWEIE63	=       FWRO + 0x7A84,
    FWEID63	=       FWRO + 0x7A88,
    FWEIS70	=       FWRO + 0x7A90,
    FWEIE70	=       FWRO + 0x7A94,
    FWEID70	=       FWRO + 0x7A98,
    FWEIS71	=       FWRO + 0x7AA0,
    FWEIE71	=       FWRO + 0x7AA4,
    FWEID71	=       FWRO + 0x7AA8,
    FWEIS72	=       FWRO + 0x7AB0,
    FWEIE72	=       FWRO + 0x7AB4,
    FWEID72	=       FWRO + 0x7AB8,
    FWEIS73	=       FWRO + 0x7AC0,
    FWEIE73	=       FWRO + 0x7AC4,
    FWEID73	=       FWRO + 0x7AC8,
    FWEIS80	=       FWRO + 0x7AD0,
    FWEIE80	=       FWRO + 0x7AD4,
    FWEID80	=       FWRO + 0x7AD8,
    FWEIS81	=       FWRO + 0x7AE0,
    FWEIE81	=       FWRO + 0x7AE4,
    FWEID81	=       FWRO + 0x7AE8,
    FWEIS82	=       FWRO + 0x7AF0,
    FWEIE82	=       FWRO + 0x7AF4,
    FWEID82	=       FWRO + 0x7AF8,
    FWEIS83	=       FWRO + 0x7B00,
    FWEIE83	=       FWRO + 0x7B04,
    FWEID83	=       FWRO + 0x7B08,
    FWMIS0	=       FWRO + 0x7C00,
    FWMIE0	=       FWRO + 0x7C04,
    FWMID0	=       FWRO + 0x7C08,
    FWSCR0	=       FWRO + 0x7D00,
    FWSCR1	=       FWRO + 0x7D04,
    FWSCR2	=       FWRO + 0x7D08,
    FWSCR3	=       FWRO + 0x7D0C,
    FWSCR4	=       FWRO + 0x7D10,
    FWSCR5	=       FWRO + 0x7D14,
    FWSCR6	=       FWRO + 0x7D18,
    FWSCR7	=       FWRO + 0x7D1C,
    FWSCR8	=       FWRO + 0x7D20,
    FWSCR9	=       FWRO + 0x7D24,
    FWSCR10	=       FWRO + 0x7D28,
    FWSCR11	=       FWRO + 0x7D2C,
    FWSCR12	=       FWRO + 0x7D30,
    FWSCR13	=       FWRO + 0x7D34,
    FWSCR14	=       FWRO + 0x7D38,
    FWSCR15	=       FWRO + 0x7D3C,
    FWSCR16	=       FWRO + 0x7D40,
    FWSCR17	=       FWRO + 0x7D44,
    FWSCR18	=       FWRO + 0x7D48,
    FWSCR19	=       FWRO + 0x7D4C,
    FWSCR20	=       FWRO + 0x7D50,
    FWSCR21	=       FWRO + 0x7D54,
    FWSCR22	=       FWRO + 0x7D58,
    FWSCR23	=       FWRO + 0x7D5C,
    FWSCR24	=       FWRO + 0x7D60,
    FWSCR25	=       FWRO + 0x7D64,
    FWSCR26	=       FWRO + 0x7D68,
    FWSCR27	=       FWRO + 0x7D6C,
    FWSCR28	=       FWRO + 0x7D70,
    FWSCR29	=       FWRO + 0x7D74,
    FWSCR30	=       FWRO + 0x7D78,
    FWSCR31	=       FWRO + 0x7D7C,
    FWSCR32	=       FWRO + 0x7D80,
    FWSCR33	=       FWRO + 0x7D84,
    FWSCR34	=       FWRO + 0x7D88,
    FWSCR35	=       FWRO + 0x7D8C,
    FWSCR36	=       FWRO + 0x7D90,
    FWSCR37	=       FWRO + 0x7D94,
    FWSCR38	=       FWRO + 0x7D98,
    FWSCR39	=       FWRO + 0x7D9C,
    FWSCR40	=       FWRO + 0x7DA0,
    FWSCR41	=       FWRO + 0x7DA4,
    FWSCR42	=       FWRO + 0x7DA8,
    FWSCR43	=       FWRO + 0x7DAC,
    FWSCR44	=       FWRO + 0x7DB0,
    FWSCR45	=       FWRO + 0x7DB4,
    FWSCR46	=       FWRO + 0x7DB8,
    RIPV	=	CARO + 0x0000,
    RRC	        =	CARO + 0x0004,
    RCEC        =	CARO + 0x0008,
    RCDC        =	CARO + 0x000C,
    RSSIS	=	CARO + 0x0010,
    RSSIE	=	CARO + 0x0014,
    RSSID	=	CARO + 0x0018,
    CABPIBWMC	=	CARO + 0x0020,
    CABPWMLC	=	CARO + 0x0040,
    CABPPFLC0	=	CARO + 0x0050,
    CABPPWMLC0	=	CARO + 0x0060,
    CABPPPFLC00	=	CARO + 0x00A0,
    CABPULC 	=	CARO + 0x0100,
    CABPIRM	=	CARO + 0x0140,
    CABPPCM	=	CARO + 0x0144,
    CABPLCM	=	CARO + 0x0148,
    CABPCPM	=	CARO + 0x0180,
    CABPMCPM	=	CARO + 0x0200,
    CARDNM	=	CARO + 0x0280,
    CARDMNM	=	CARO + 0x0284,
    CARDCN	=	CARO + 0x0290,
    CAEIS0	=	CARO + 0x0300,
    CAEIE0	=	CARO + 0x0304,
    CAEID0	=	CARO + 0x0308,
    CAEIS1	=	CARO + 0x0310,
    CAEIE1	=	CARO + 0x0314,
    CAEID1	=	CARO + 0x0318,
    CAMIS0	=	CARO + 0x0340,
    CAMIE0	=	CARO + 0x0344,
    CAMID0	=	CARO + 0x0348,
    CAMIS1	=	CARO + 0x0350,
    CAMIE1	=	CARO + 0x0354,
    CAMID1	=	CARO + 0x0358,
    CASCR	=	CARO + 0x0380,
    /*Ethernet Agent Address space Empty in spec*/
    EAMC	=	TARO + 0x0000,
    EAMS	=	TARO + 0x0004,
    EAIRC	=	TARO + 0x0010,
    EATDQSC	=	TARO + 0x0014,
    EATDQC	=	TARO + 0x0018,
    EATDQAC	=	TARO + 0x001C,
    EATPEC	=	TARO + 0x0020,
    EATMFSC0	=	TARO + 0x0040,
    EATDQDC0	=	TARO + 0x0060,
    EATDQM0	=	TARO + 0x0080,
    EATDQMLM0	=	TARO + 0x00A0,
    EACTQC	=	TARO + 0x0100,
    EACTDQDC	=	TARO + 0x0104,
    EACTDQM	=	TARO + 0x0108,
    EACTDQMLM	=	TARO + 0x010C,
    EAVCC	=	TARO + 0x0130,
    EAVTC	=	TARO + 0x0134,
    EATTFC	=	TARO + 0x0138,
    EACAEC	=	TARO + 0x0200,
    EACC	=	TARO + 0x0204,
    EACAIVC0	=	TARO + 0x0220,
    EACAULC0	=	TARO + 0x0240,
    EACOEM	=	TARO + 0x0260,
    EACOIVM0	=	TARO + 0x0280,
    EACOULM0	=	TARO + 0x02A0,
    EACGSM	=	TARO + 0x02C0,
    EATASC	=	TARO + 0x0300,
    EATASENC0	=	TARO + 0x0320,
    EATASCTENC	=	TARO + 0x0340,
    EATASENM0	=	TARO + 0x0360,
    EATASCTENM	=	TARO + 0x0380,
    EATASCSTC0	=	TARO + 0x03A0,
    EATASCSTC1	=	TARO + 0x03A4,
    EATASCSTM0	=	TARO + 0x03A8,
    EATASCSTM1	=	TARO + 0x03AC,
    EATASCTC	=	TARO + 0x03B0,
    EATASCTM	=	TARO + 0x03B4,
    EATASGL0	=	TARO + 0x03C0,
    EATASGL1	=	TARO + 0x03C4,
    EATASGLR	=	TARO + 0x03C8,
    EATASGR	=	TARO + 0x03D0,
    EATASGRR	=	TARO + 0x03D4,
    EATASHCC	=	TARO + 0x03E0,
    EATASRIRM	=	TARO + 0x03E4,
    EATASSM	=	TARO + 0x03E8,
    EAUSMFSECN  =       TARO + 0x0400,
    EATFECN     =       TARO + 0x0404,
    EAFSECN     =       TARO + 0x0408,
    EADQOECN    =       TARO + 0x040C,
    EADQSECN    =       TARO + 0x0410,
    EACKSECN    =       TARO + 0x0414,

    EAEIS0	=	TARO + 0x0500,
    EAEIE0	=	TARO + 0x0504,
    EAEID0	=	TARO + 0x0508,
    EAEIS1	=	TARO + 0x0510,
    EAEIE1	=	TARO + 0x0514,
    EAEID1	=	TARO + 0x0518,
    EAEIS2	=	TARO + 0x0520,
    EAEIE2	=	TARO + 0x0524,
    EAEID2	=	TARO + 0x0528,
    EASCR	=	TARO + 0x0580,

    MPSM	=	RMRO + 0x0000,
    MPIC	=	RMRO + 0x0004,
    MPIM	=	RMRO + 0x0008,
    MXMS	=	RMRO + 0x000C,
    MIOC	=	RMRO + 0x0010,
    MIOM	=	RMRO + 0x0014,
    MTFFC	=	RMRO + 0x0020,
    MTPFC	=	RMRO + 0x0024,
    MTPFC2	=	RMRO + 0x0028,
    MTPFC30	=	RMRO + 0x0030,
    MTATC0	=	RMRO + 0x0050,
    MTIM	=	RMRO + 0x0060,
    MRGC	=	RMRO + 0x0080,
    MRMAC0	=	RMRO + 0x0084,
    MRMAC1	=	RMRO + 0x0088,
    MRAFC	=	RMRO + 0x008C,
    MRSCE	=	RMRO + 0x0090,
    MRSCP	=	RMRO + 0x0094,
    MRSCC	=	RMRO + 0x0098,
    MRFSCE	=	RMRO + 0x009C,
    MRFSCP	=	RMRO + 0x00a0,
    MTRC	=	RMRO + 0x00a4,
    MRIM	=	RMRO + 0x00a8,
    MRPFM	=	RMRO + 0x00aC,
    MPFC0	=	RMRO + 0x0100, 
    MLVC	=	RMRO + 0x0180,
    MEEEC	=	RMRO + 0x0184,
    MLBC	=	RMRO + 0x0188,
    MXGMIIC	=	RMRO + 0x0190,
    MPCH	=	RMRO + 0x0194,
    MANC	=	RMRO + 0x0198,
    MANM	=	RMRO + 0x019C,
    MPLCA1	=	RMRO + 0x01a0,
    MPLCA2	=	RMRO + 0x01a4,
    MPLCA3	=	RMRO + 0x01a8,
    MPLCA4	=	RMRO + 0x01ac,
    MPLCAM	=	RMRO + 0x01b0,
    MHDC1	=	RMRO + 0x01c0,
    MHDC2	=	RMRO + 0x01c4,
    MEIS	=	RMRO + 0x0200,
    MEIE	=	RMRO + 0x0204,
    MEID	=	RMRO + 0x0208,
    MMIS0	=	RMRO + 0x0210,
    MMIE0	=	RMRO + 0x0214,
    MMID0	=	RMRO + 0x0218,
    MMIS1	=	RMRO + 0x0220,
    MMIE1	=	RMRO + 0x0224,
    MMID1	=	RMRO + 0x0228,
    MMIS2	=	RMRO + 0x0230,
    MMIE2	=	RMRO + 0x0234,
    MMID2	=	RMRO + 0x0238,
    MMPFTCT	=	RMRO + 0x0300,
    MAPFTCT	=	RMRO + 0x0304,
    MPFRCT	=	RMRO + 0x0308,
    MFCICT	=	RMRO + 0x030c,
    MEEECT	=	RMRO + 0x0310,
    MMPCFTCT0	=	RMRO + 0x0320, 
    MAPCFTCT0	=	RMRO + 0x0330, 
    MPCFRCT0	=	RMRO + 0x0340,
    MROVFC	=	RMRO + 0x0360,
    MRHCRCEC	=	RMRO + 0x0364,
    MRGFCE	=	RMRO + 0x0408,
    MRGFCP	=	RMRO + 0x040C,
    MRBFC	=	RMRO + 0x0410,
    MRMFC	=	RMRO + 0x0414,
    MRUFC	=	RMRO + 0x0418,
    MRPEFC	=	RMRO + 0x041C,
    MRNEFC	=	RMRO + 0x0420,
    MRFMEFC	=	RMRO + 0x0424,
    MRFFMEFC	=	RMRO + 0x0428,
    MRCFCEFC	=	RMRO + 0x042C,
    MRFCEFC	=	RMRO + 0x0430,
    MRRCFEFC	=	RMRO + 0x0434,
    MRFC	=	RMRO + 0x0438,
    MRGUEFC	=	RMRO + 0x043C,
    MRBUEFC	=	RMRO + 0x0440,
    MRGOEFC	=	RMRO + 0x0444,
    MRBOEFC	=	RMRO + 0x0448,
    MRXBCEU	=	RMRO + 0x044C,
    MRXBCEL	=	RMRO + 0x0450,
    MRXBCPU	=	RMRO + 0x0454,
    MRXBCPL	=	RMRO + 0x0458,
    MTGFCE	=	RMRO + 0x0508,
    MTGFCP	=	RMRO + 0x050C,
    MTBFC	=	RMRO + 0x0510,
    MTMFC	=	RMRO + 0x0514,
    MTUFC	=	RMRO + 0x0518,
    MTEFC	=	RMRO + 0x051C,
    MTXBCEU	=	RMRO + 0x0520,
    MTXBCEL	=	RMRO + 0x0524,
    MTXBCPU	=	RMRO + 0x0528,
    MTXBCPL	=	RMRO + 0x052C,
    

    		
		
		
		
		
		
		
		
		
    GWMC	=	GWRO + 0x0000,
    GWMS	=	GWRO + 0x0004,
    GWPRC	=	GWRO + 0x0010,
    GWRDQSC	=	GWRO + 0x0014,
    GWRDQC	=	GWRO + 0x0018,
    GWRDQAC	=	GWRO + 0x001C,
    GWRGC	=	GWRO + 0x0020,
    GWRMFSC0	=	GWRO + 0x0040, 
    GWRDQDC0	=	GWRO + 0x0060, 
    GWRDQM0	=	GWRO + 0x0080,
    GWRDQMLM0	=	GWRO + 0x00A0, 
    GWMTIRM	=	GWRO + 0x0100,
    GWMSTLS	=	GWRO + 0x0104,
    GWMSTLR	=	GWRO + 0x0108,
    GWMSTSS	=	GWRO + 0x010C,
    GWMSTSR	=	GWRO + 0x0110,
    GWMAC0	=	GWRO + 0x0120,
    GWMAC1	=	GWRO + 0x0124,
    GWVCC	=	GWRO + 0x0130,
    GWVTC	=	GWRO + 0x0134,
    GWTTFC	=	GWRO + 0x0138,
    GWTDCAC00	=	GWRO + 0x0140,
    GWTDCAC10	=	GWRO + 0x0144, 
    GWTSDCC0	=	GWRO + 0x0160, 
    GWTNM	=	GWRO + 0x0180,
    GWTMNM	=	GWRO + 0x0184,
    GWAC	=	GWRO + 0x0190,
    GWDCBAC0	=	GWRO + 0x0194,
    GWDCBAC1	=	GWRO + 0x0198,
    GWIICBSC	=	GWRO + 0x019C,
    GWMDNC      =       GWRO + 0x01A0,
    GWTRC0	=	GWRO + 0x0200, 
    GWTPC0	=	GWRO + 0x0300,
    GWARIRM	=	GWRO + 0x0380,
    GWDCC0	=	GWRO + 0x0400, 
    GWAARSS	=	GWRO + 0x0800,
    GWAARSR0	=	GWRO + 0x0804,
    GWAARSR1	=	GWRO + 0x0808,
    GWIDAUAS0	=	GWRO + 0x0840, 
    GWIDASM0	=	GWRO + 0x0880, 
    GWIDASAM00	=	GWRO + 0x0900, 
    GWIDASAM10	=	GWRO + 0x0904, 
    GWIDACAM00	=	GWRO + 0x0980, 
    GWIDACAM10	=	GWRO + 0x0984, 
    GWGRLC	=	GWRO + 0x0A00,
    GWGRLULC	=	GWRO + 0x0A04,
    GWRLIVC0	=	GWRO + 0x0A80, 
    GWRLULC0	=	GWRO + 0x0A84, 
    GWIDPC	=	GWRO + 0x0B00,
    GWIDC0	=	GWRO + 0x0C00,

    GWRDCN	=	GWRO + 0x1000,
    GWTDCN	=	GWRO + 0x1004,
    GWTSCN	=	GWRO + 0x1008,

    GWDIS0	=	GWRO + 0x1100,
    GWDIE0	=	GWRO + 0x1104, 
    GWDID0	=	GWRO + 0x1108, 
    GWTSDIS	=	GWRO + 0x1180,
    GWTSDIE	=	GWRO + 0x1184,
    GWTSDID	=	GWRO + 0x1188,
    GWEIS0	=	GWRO + 0x1190,
    GWEIE0	=	GWRO + 0x1194,
    GWEID0	=	GWRO + 0x1198,
    GWEIS1	=	GWRO + 0x11A0,
    GWEIE1	=	GWRO + 0x11A4,
    GWEID1	=	GWRO + 0x11A8,
    GWEIS20	=	GWRO + 0x1200, 
    GWEIE20	=	GWRO + 0x1204, 
    GWEID20	=	GWRO + 0x1208, 
    GWEIS3	=	GWRO + 0x1280,
    GWEIE3	=	GWRO + 0x1284,
    GWEID3	=	GWRO + 0x1288,
    GWEIS4	=	GWRO + 0x1290,
    GWEIE4	=	GWRO + 0x1294,
    GWEID4	=	GWRO + 0x1298,
    GWEIS5	=	GWRO + 0x12A0,
    GWEIE5	=	GWRO + 0x12A4,
    GWEID5	=	GWRO + 0x12A8,
    GWSCR0	=	GWRO + 0x1800, 
    GWSCR1	=	GWRO + 0x1804,
    GWSCR20	=	GWRO + 0x1900,
    PTPIPV	=	PTPRO + 0x0000,
    PTPTMEC	=	PTPRO + 0x0010,
    PTPTMDC	=	PTPRO + 0x0014,
    PTPTIVC0	=	PTPRO + 0x0020,
    PTPTOVC00	=	PTPRO + 0x0030,
    PTPTOVC10	=	PTPRO + 0x0034,
    PTPTOVC20	=	PTPRO + 0x0038,
    PTPAVTPTM00	=	PTPRO + 0x0040,
    PTPAVTPTM10	=	PTPRO + 0x0044,
    PTPGPTPTM00	=	PTPRO + 0x0050,
    PTPGPTPTM10	=	PTPRO + 0x0054,
    PTPGPTPTM20	=	PTPRO + 0x0058,
    PTPMCCC0	=	PTPRO + 0x0200,
    PTPMCCM00	=	PTPRO + 0x0204,
    PTPMCCM10	=	PTPRO + 0x0208,
    PTPMCCM20	=	PTPRO + 0x020C,
    PTPMCRC0	=	PTPRO + 0x0300,
    PTPMCRTC00	=	PTPRO + 0x0304,
    PTPMCRTC10	=	PTPRO + 0x0308,
    PTPMCRTC20	=	PTPRO + 0x030C,
    PTPMCPC0	=	PTPRO + 0x0400,
    PTPCCC00	=	PTPRO + 0x0500,
    PTPCCC10	=	PTPRO + 0x0504,
    PTPIS0	=	PTPRO + 0x0700,
    PTPIE0	=	PTPRO + 0x0704,
    PTPID0	=	PTPRO + 0x0708,
    PTPIS1	=	PTPRO + 0x0710,
    PTPIE1	=	PTPRO + 0x0714,
    PTPID1	=	PTPRO + 0x0718,
    PTPSCR0	=	PTPRO + 0x0780,
    PTPSCR1	=	PTPRO + 0x0784,
    PTPSCR2	=	PTPRO + 0x0788,
	
		
		

		
		
		
		
		
		













};



#endif	/* #ifndef __RSWITCH2_REG_H__ */

/*
    Change History
    2020-09-03 0.0.1 Updated Address Map as per new specification
    2020-11-19 0.0.2 Updated for GPTP 
  
*/
