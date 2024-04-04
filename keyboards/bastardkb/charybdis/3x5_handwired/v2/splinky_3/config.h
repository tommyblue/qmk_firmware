/*
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Handedness. */
#define MASTER_RIGHT

// To use the handedness pin, resistors need to be installed on the adapter PCB.
// If so, uncomment the following code, and undefine MASTER_RIGHT above.
// #define SPLIT_HAND_PIN GP15
// #define SPLIT_HAND_PIN_LOW_IS_LEFT  // High -> right, Low -> left.

/* SPI & PMW3360 settings. */
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP22
#define SPI_MISO_PIN GP20
#define SPI_MOSI_PIN GP23
#define POINTING_DEVICE_CS_PIN GP16

/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define MATRIX_COL_PINS_RIGHT { GP27, GP28, GP21, GP6, GP7 }
#define MATRIX_ROW_PINS_RIGHT { GP29, GP26, GP5, GP4 }

// // wiring of each half, use the bottom left 6 and the bottom right 6 pins.
#define MATRIX_COL_PINS { GP7, GP6, GP21, GP28, GP27 }
#define MATRIX_ROW_PINS { GP29, GP26, GP5, GP4 }
#define MATRIX_ROWS 8
#define MATRIX_COLS 5


#define SOFT_SERIAL_PIN GP1
// #define SERIAL_USART_TX_PIN GP1
// #define SERIAL_USART_RX_PIN GP1
// #define SERIAL_PIO_USE_PIO1
// #define SPLIT_USB_DETECT

// #define MATRIX_ROWS 8
// #define MATRIX_COLS 5

// #define MATRIX_COL_PINS { GP27, GP28, GP21, GP6, GP7 }
// #define MATRIX_ROW_PINS { GP29, GP26, GP5, GP4 }
// #define MATRIX_COL_PINS_RIGHT { GP7, GP6, GP21, GP28, GP27 }
// #define MATRIX_ROW_PINS_RIGHT { GP29, GP26, GP5, GP4 }
