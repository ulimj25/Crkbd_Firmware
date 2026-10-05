/*
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

/* Select hand configuration */
#define MASTER_LEFT

// CAPS WORD CONFIG
#define CAPS_WORD_IDLE_TIMEOUT 3000
#define DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD

// TAP-DANCE CONFIG
#define TAPPING_TERM 150

// OLED CONFIG
#define OLED_FONT_H "cornefont.c"
#define OLED_SCROLL_TIMEOUT 5000

#ifdef RGB_MATRIX_ENABLE
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define ENABLE_RGB_MATRIX_PIXEL_RAIN
    #define RGB_MATRIX_SLEEP
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_PIXEL_RAIN
#endif
