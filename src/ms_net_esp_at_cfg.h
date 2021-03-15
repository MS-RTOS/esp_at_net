/*
 * Copyright (c) 2015-2020 ACOINFO Co., Ltd.
 * All rights reserved.
 *
 * Detailed license information can be found in the LICENSE file.
 *
 * File: ms_net_esp_at_cfg.h ESP8266/32 AT network configuration.
 *
 * Author: Jiao.jinxing <jiaojinxing@acoinfo.com>
 *
 */

#ifndef MS_NET_ESP_AT_CFG_H
#define MS_NET_ESP_AT_CFG_H

/* User specific config */
#define ESP_CFG_AT_ECHO                     1
#define ESP_CFG_INPUT_USE_PROCESS           1

#define ESP_CFG_NETCONN                     1

#define ESP_CFG_HOSTNAME                    1

#define ESP_CFG_SMART                       1

#define ESP_CFG_MODE_ACCESS_POINT           0

#define ESP_CFG_RESTORE_ON_INIT             0

#define ESP_CFG_DNS                         1

#define ESP_CFG_PING                        1

#define ESP_MEMCPY(dst, src, len)           ms_arch_memcpy(dst, src, len)

/* Include default configuration setup */
#include "esp/esp_config_default.h"

#endif /* MS_NET_ESP_AT_CFG_H */
