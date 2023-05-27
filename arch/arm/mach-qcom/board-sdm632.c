// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2017,2021, The Linux Foundation. All rights reserved.
 */

#include <linux/kernel.h>
#include "board-dt.h"
#include <asm/mach/map.h>
#include <asm/mach/arch.h>

static const char *sdm632_dt_match[] __initconst = {
	"qcom,sdm632",
	NULL
};

static void __init sdm632_init(void)
{
	board_dt_populate(NULL);
}

DT_MACHINE_START(SDM450_DT,
	"Qualcomm Technologies, Inc. SDM632 (Flattened Device Tree)")
	.init_machine		= sdm632_init,
	.dt_compat		= sdm632_dt_match,
MACHINE_END
