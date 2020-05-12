/* Copyright 2020 MigiBacon
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

#include "er36.h"
#include "quantum/rgb_matrix.h"

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {  0,  1,  2,  3,  4,  5 },
        { 11, 10,  9,  8,  7,  6 },
        { 12, 13, 14, 15, 16, 17 },
        { 23, 22, 21, 20, 19, 18 },
        { 24, 25, 26, 27, 28, 29 },
        { 35, 34, 33, 32, 31, 30 }
    }, {
        // LED Index to Physical Position
        {   0,  0 }, {  45,  0 }, {  90,  0 }, { 134,  0 }, { 179,  0 }, { 224,  0 },
        { 224, 13 }, { 179, 13 }, { 134, 13 }, {  90, 13 }, {  45, 13 }, {   0, 13 },
        {   0, 26 }, {  45, 26 }, {  90, 26 }, { 134, 26 }, { 179, 26 }, { 224, 26 },
        { 224, 38 }, { 179, 38 }, { 134, 38 }, {  90, 38 }, {  45, 38 }, {   0, 38 },
        {   0, 51 }, {  45, 51 }, {  90, 51 }, { 134, 51 }, { 179, 51 }, { 224, 51 },
        { 224, 64 }, { 179, 64 }, { 134, 64 }, {  90, 64 }, {  45, 64 }, {   0, 64 }
    }, {
        // LED Index to Flag
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4
    }
};

void matrix_init_kb(void) {
    matrix_init_user();
}

void matrix_scan_kb(void) {
    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    return process_record_user(keycode, record);
}

void led_set_kb(uint8_t usb_led) {
    led_set_user(usb_led);
}