/*
 * Copyright (c) 2018, Renesas Electronics Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

static uint64_t qoswt_fix[] = {
	/* 0x0000, */ 0x0000000000000000UL,
	/* 0x0008, */ 0x0000000000000000UL,
	/* 0x0010, */ 0x0000000000000000UL,
	/* 0x0018, */ 0x0000000000000000UL,
	/* 0x0020, */ 0x0000000000000000UL,
	/* 0x0028, */ 0x0000000000000000UL,
	/* 0x0030, */ 0x001004320000C010UL,
	/* 0x0038, */ 0x001004320000C010UL,
	/* 0x0040, */ 0x00140C5D0000FFF0UL,
	/* 0x0048, */ 0x0000000000000000UL,
	/* 0x0050, */ 0x0000000000000000UL,
	/* 0x0058, */ 0x00140C940000C010UL,
	/* 0x0060, */ 0x00140C940000C010UL,
	/* 0x0068, */ 0x0000000000000000UL,
	/* 0x0070, */ 0x0000000000000000UL,
	/* 0x0078, */ 0x0000000000000000UL,
	/* 0x0080, */ 0x0000000000000000UL,
	/* 0x0088, */ 0x0014041F0000FFF0UL,
	/* 0x0090, */ 0x0000000000000000UL,
	/* 0x0098, */ 0x0000000000000000UL,
	/* 0x00a0, */ 0x0000000000000000UL,
	/* 0x00a8, */ 0x0000000000000000UL,
	/* 0x00b0, */ 0x0000000000000000UL,
	/* 0x00b8, */ 0x0000000000000000UL,
	/* 0x00c0, */ 0x0000000000000000UL,
	/* 0x00c8, */ 0x0000000000000000UL,
	/* 0x00d0, */ 0x0000000000000000UL,
	/* 0x00d8, */ 0x0000000000000000UL,
	/* 0x00e0, */ 0x0000000000000000UL,
	/* 0x00e8, */ 0x0000000000000000UL,
	/* 0x00f0, */ 0x0000000000000000UL,
	/* 0x00f8, */ 0x0000000000000000UL,
	/* 0x0100, */ 0x0000000000000000UL,
	/* 0x0108, */ 0x0000000000000000UL,
	/* 0x0110, */ 0x0000000000000000UL,
	/* 0x0118, */ 0x0000000000000000UL,
	/* 0x0120, */ 0x0000000000000000UL,
	/* 0x0128, */ 0x0000000000000000UL,
	/* 0x0130, */ 0x0000000000000000UL,
	/* 0x0138, */ 0x0000000000000000UL,
	/* 0x0140, */ 0x0000000000000000UL,
	/* 0x0148, */ 0x0000000000000000UL,
	/* 0x0150, */ 0x0000000000000000UL,
	/* 0x0158, */ 0x0000000000000000UL,
	/* 0x0160, */ 0x0000000000000000UL,
	/* 0x0168, */ 0x0000000000000000UL,
	/* 0x0170, */ 0x0000000000000000UL,
	/* 0x0178, */ 0x0000000000000000UL,
	/* 0x0180, */ 0x0000000000000000UL,
	/* 0x0188, */ 0x0000000000000000UL,
	/* 0x0190, */ 0x0000000000000000UL,
	/* 0x0198, */ 0x0000000000000000UL,
	/* 0x01a0, */ 0x0000000000000000UL,
	/* 0x01a8, */ 0x0000000000000000UL,
	/* 0x01b0, */ 0x0000000000000000UL,
	/* 0x01b8, */ 0x0000000000000000UL,
	/* 0x01c0, */ 0x0000000000000000UL,
	/* 0x01c8, */ 0x0000000000000000UL,
	/* 0x01d0, */ 0x0000000000000000UL,
	/* 0x01d8, */ 0x0000000000000000UL,
	/* 0x01e0, */ 0x0000000000000000UL,
	/* 0x01e8, */ 0x0000000000000000UL,
	/* 0x01f0, */ 0x0000000000000000UL,
	/* 0x01f8, */ 0x0000000000000000UL,
	/* 0x0200, */ 0x0000000000000000UL,
	/* 0x0208, */ 0x0000000000000000UL,
	/* 0x0210, */ 0x0000000000000000UL,
	/* 0x0218, */ 0x0000000000000000UL,
	/* 0x0220, */ 0x0000000000000000UL,
	/* 0x0228, */ 0x0000000000000000UL,
	/* 0x0230, */ 0x0000000000000000UL,
	/* 0x0238, */ 0x0000000000000000UL,
	/* 0x0240, */ 0x0000000000000000UL,
	/* 0x0248, */ 0x0000000000000000UL,
	/* 0x0250, */ 0x0000000000000000UL,
	/* 0x0258, */ 0x0000000000000000UL,
	/* 0x0260, */ 0x000C08150000FFF0UL,
	/* 0x0268, */ 0x001408020000FFF0UL,
	/* 0x0270, */ 0x001404010000FFF0UL,
	/* 0x0278, */ 0x000C04090000FFF0UL,
	/* 0x0280, */ 0x0000000000000000UL,
	/* 0x0288, */ 0x0000000000000000UL,
	/* 0x0290, */ 0x001408020000FFF0UL,
	/* 0x0298, */ 0x001404010000FFF0UL,
	/* 0x02a0, */ 0x0000000000000000UL,
	/* 0x02a8, */ 0x0000000000000000UL,
	/* 0x02b0, */ 0x0000000000000000UL,
	/* 0x02b8, */ 0x0000000000000000UL,
	/* 0x02c0, */ 0x0000000000000000UL,
	/* 0x02c8, */ 0x0000000000000000UL,
	/* 0x02d0, */ 0x0000000000000000UL,
	/* 0x02d8, */ 0x0000000000000000UL,
	/* 0x02e0, */ 0x0000000000000000UL,
	/* 0x02e8, */ 0x0000000000000000UL,
	/* 0x02f0, */ 0x0000000000000000UL,
	/* 0x02f8, */ 0x0000000000000000UL,
	/* 0x0300, */ 0x0000000000000000UL,
	/* 0x0308, */ 0x0000000000000000UL,
	/* 0x0310, */ 0x0000000000000000UL,
	/* 0x0318, */ 0x0000000000000000UL,
	/* 0x0320, */ 0x0000000000000000UL,
	/* 0x0328, */ 0x0000000000000000UL,
	/* 0x0330, */ 0x0000000000000000UL,
	/* 0x0338, */ 0x0000000000000000UL,
	/* 0x0340, */ 0x0000000000000000UL,
	/* 0x0348, */ 0x0000000000000000UL,
	/* 0x0350, */ 0x0000000000000000UL,
	/* 0x0358, */ 0x0000000000000000UL,
	/* 0x0360, */ 0x0000000000000000UL,
	/* 0x0368, */ 0x0000000000000000UL,
	/* 0x0370, */ 0x0000000000000000UL,
	/* 0x0378, */ 0x0000000000000000UL,
	/* 0x0380, */ 0x0000000000000000UL,
	/* 0x0388, */ 0x0000000000000000UL,
	/* 0x0390, */ 0x0000000000000000UL,
};

static uint64_t qoswt_be[] = {
	/* 0x0000, */ 0x0000000000000000UL,
	/* 0x0008, */ 0x0000000000000000UL,
	/* 0x0010, */ 0x0000000000000000UL,
	/* 0x0018, */ 0x0000000000000000UL,
	/* 0x0020, */ 0x0000000000000000UL,
	/* 0x0028, */ 0x0000000000000000UL,
	/* 0x0030, */ 0x0000000000000000UL,
	/* 0x0038, */ 0x0000000000000000UL,
	/* 0x0040, */ 0x0000000000000000UL,
	/* 0x0048, */ 0x0000000000000000UL,
	/* 0x0050, */ 0x0000000000000000UL,
	/* 0x0058, */ 0x0000000000000000UL,
	/* 0x0060, */ 0x0000000000000000UL,
	/* 0x0068, */ 0x0000000000000000UL,
	/* 0x0070, */ 0x0000000000000000UL,
	/* 0x0078, */ 0x0000000000000000UL,
	/* 0x0080, */ 0x0000000000000000UL,
	/* 0x0088, */ 0x0000000000000000UL,
	/* 0x0090, */ 0x0000000000000000UL,
	/* 0x0098, */ 0x0000000000000000UL,
	/* 0x00a0, */ 0x0000000000000000UL,
	/* 0x00a8, */ 0x0000000000000000UL,
	/* 0x00b0, */ 0x0000000000000000UL,
	/* 0x00b8, */ 0x0000000000000000UL,
	/* 0x00c0, */ 0x0000000000000000UL,
	/* 0x00c8, */ 0x0000000000000000UL,
	/* 0x00d0, */ 0x0000000000000000UL,
	/* 0x00d8, */ 0x0000000000000000UL,
	/* 0x00e0, */ 0x0000000000000000UL,
	/* 0x00e8, */ 0x0000000000000000UL,
	/* 0x00f0, */ 0x0000000000000000UL,
	/* 0x00f8, */ 0x0000000000000000UL,
	/* 0x0100, */ 0x0000000000000000UL,
	/* 0x0108, */ 0x0000000000000000UL,
	/* 0x0110, */ 0x0000000000000000UL,
	/* 0x0118, */ 0x0000000000000000UL,
	/* 0x0120, */ 0x0000000000000000UL,
	/* 0x0128, */ 0x0000000000000000UL,
	/* 0x0130, */ 0x0000000000000000UL,
	/* 0x0138, */ 0x0000000000000000UL,
	/* 0x0140, */ 0x0000000000000000UL,
	/* 0x0148, */ 0x0000000000000000UL,
	/* 0x0150, */ 0x0000000000000000UL,
	/* 0x0158, */ 0x0000000000000000UL,
	/* 0x0160, */ 0x0000000000000000UL,
	/* 0x0168, */ 0x0000000000000000UL,
	/* 0x0170, */ 0x0000000000000000UL,
	/* 0x0178, */ 0x0000000000000000UL,
	/* 0x0180, */ 0x0000000000000000UL,
	/* 0x0188, */ 0x0000000000000000UL,
	/* 0x0190, */ 0x0000000000000000UL,
	/* 0x0198, */ 0x0000000000000000UL,
	/* 0x01a0, */ 0x0000000000000000UL,
	/* 0x01a8, */ 0x0000000000000000UL,
	/* 0x01b0, */ 0x0000000000000000UL,
	/* 0x01b8, */ 0x0000000000000000UL,
	/* 0x01c0, */ 0x0000000000000000UL,
	/* 0x01c8, */ 0x0000000000000000UL,
	/* 0x01d0, */ 0x0000000000000000UL,
	/* 0x01d8, */ 0x0000000000000000UL,
	/* 0x01e0, */ 0x0000000000000000UL,
	/* 0x01e8, */ 0x0000000000000000UL,
	/* 0x01f0, */ 0x0000000000000000UL,
	/* 0x01f8, */ 0x0000000000000000UL,
	/* 0x0200, */ 0x0000000000000000UL,
	/* 0x0208, */ 0x0000000000000000UL,
	/* 0x0210, */ 0x0000000000000000UL,
	/* 0x0218, */ 0x0000000000000000UL,
	/* 0x0220, */ 0x0000000000000000UL,
	/* 0x0228, */ 0x0000000000000000UL,
	/* 0x0230, */ 0x0000000000000000UL,
	/* 0x0238, */ 0x0000000000000000UL,
	/* 0x0240, */ 0x0000000000000000UL,
	/* 0x0248, */ 0x0000000000000000UL,
	/* 0x0250, */ 0x0000000000000000UL,
	/* 0x0258, */ 0x0000000000000000UL,
	/* 0x0260, */ 0x0000000000000000UL,
	/* 0x0268, */ 0x0000000000000000UL,
	/* 0x0270, */ 0x0000000000000000UL,
	/* 0x0278, */ 0x0000000000000000UL,
	/* 0x0280, */ 0x0000000000000000UL,
	/* 0x0288, */ 0x0000000000000000UL,
	/* 0x0290, */ 0x0000000000000000UL,
	/* 0x0298, */ 0x0000000000000000UL,
	/* 0x02a0, */ 0x0000000000000000UL,
	/* 0x02a8, */ 0x0000000000000000UL,
	/* 0x02b0, */ 0x0000000000000000UL,
	/* 0x02b8, */ 0x0000000000000000UL,
	/* 0x02c0, */ 0x0000000000000000UL,
	/* 0x02c8, */ 0x0000000000000000UL,
	/* 0x02d0, */ 0x0000000000000000UL,
	/* 0x02d8, */ 0x0000000000000000UL,
	/* 0x02e0, */ 0x0000000000000000UL,
	/* 0x02e8, */ 0x0000000000000000UL,
	/* 0x02f0, */ 0x0000000000000000UL,
	/* 0x02f8, */ 0x0000000000000000UL,
	/* 0x0300, */ 0x0000000000000000UL,
	/* 0x0308, */ 0x0000000000000000UL,
	/* 0x0310, */ 0x0000000000000000UL,
	/* 0x0318, */ 0x0000000000000000UL,
	/* 0x0320, */ 0x0000000000000000UL,
	/* 0x0328, */ 0x0000000000000000UL,
	/* 0x0330, */ 0x0000000000000000UL,
	/* 0x0338, */ 0x0000000000000000UL,
	/* 0x0340, */ 0x0000000000000000UL,
	/* 0x0348, */ 0x0000000000000000UL,
	/* 0x0350, */ 0x0000000000000000UL,
	/* 0x0358, */ 0x0000000000000000UL,
	/* 0x0360, */ 0x0000000000000000UL,
	/* 0x0368, */ 0x0000000000000000UL,
	/* 0x0370, */ 0x0000000000000000UL,
	/* 0x0378, */ 0x0000000000000000UL,
	/* 0x0380, */ 0x0000000000000000UL,
	/* 0x0388, */ 0x0000000000000000UL,
	/* 0x0390, */ 0x0000000000000000UL,
};