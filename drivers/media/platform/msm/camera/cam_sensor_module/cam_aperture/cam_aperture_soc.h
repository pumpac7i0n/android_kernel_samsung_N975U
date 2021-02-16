/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _CAM_APERTURE_SOC_H_
#define _CAM_APERTURE_SOC_H_

#include "cam_aperture_dev.h"

/**
 * @a_ctrl: Aperture ctrl structure
 *
 * This API parses aperture device tree
 */
int cam_aperture_parse_dt(struct cam_aperture_ctrl_t *a_ctrl,
	struct device *dev);

#endif /* _CAM_APERTURE_SOC_H_ */