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
#include QMK_KEYBOARD_H
#include "layers.h"
#include "tapdance.h"

// Custom functions
void td_SftCw(tap_dance_state_t *state, void *user_data){
    if (state->count == 2) caps_word_on();
}

void td_FnGmng(tap_dance_state_t *state, void *user_data){
    if(state->count == 2) layer_on(Gmng);
}

static void hold_layer(uint8_t layer, bool pressed){
    if (pressed)
        layer_on(layer);
    else
        layer_off(layer);
}


bool process_record_user(uint16_t keycode, keyrecord_t *record){
    switch (keycode) {
        case TD(FnGm):
            hold_layer(Gmng, record -> event.pressed);
            return true;
        default: return true;
    }
}
