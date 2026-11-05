/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (c) 2017 Tuomas Tynkkynen
 */

#ifndef __CONFIG_H
#define __CONFIG_H

#include <linux/sizes.h>

#define BOOT_TARGET_DEVICES(func)	\
	func(VIRTIO, virtio, 0)

#include <config_distro_bootcmd.h>

#define CFG_EXTRA_ENV_SETTINGS	\
	BOOTENV

#endif /* __CONFIG_H */
