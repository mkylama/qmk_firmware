/*
Copyright 2020 MigiBacon

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define VENDOR_ID 0xE0E0
#define PRODUCT_ID 0x0036
#define DEVICE_VER 0x0001
#define MANUFACTURER Void
#define PRODUCT ER36
#define DESCRIPTION A custom keyboard

#define MATRIX_ROWS 6
#define MATRIX_COLS 6

#define DIRECT_PINS { { F0 } }

#define ENCODERS_PAD_A { F1 }
#define ENCODERS_PAD_B { F4 }

#define UNUSED_PINS

#define RGB_DI_PIN B4
#ifdef RGB_DI_PIN
    #define DRIVER_LED_TOTAL 36
	#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 100
#endif

#define DEBOUNCE 5

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif
