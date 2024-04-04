// Copyright 2024 Tommaso Visconti (@tommyblue)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define MASTER_RIGHT

// #define SPI_DRIVER SPID0
// #define SPI_SCK_PIN GP22
// #define SPI_MISO_PIN GP20
// #define SPI_MOSI_PIN GP23
// #define POINTING_DEVICE_CS_PIN GP16

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

// #define SERIAL_PIO_USE_PIO0
// #define SERIAL_USART_TX_PIN GP1
