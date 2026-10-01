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
#include "keymap_spanish.h"
#include "custom_defs.h"

// Custom functions
void td_SftCw(tap_dance_state_t *state, void *user_data){
    if (state->count == 2) caps_word_on();
}

void td_FnGmng(tap_dance_state_t *state, void *user_data){
    if(state->count == 2) layer_on(Gmng);
}

// Tap dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [Slsh] = ACTION_TAP_DANCE_DOUBLE(KC_Q, ES_SLSH), // q -> /
    [At]   = ACTION_TAP_DANCE_DOUBLE(KC_W, ES_AT),   // w -> @
    [Num]  = ACTION_TAP_DANCE_DOUBLE(KC_E, ES_HASH), // e -> #
    [Dlr]  = ACTION_TAP_DANCE_DOUBLE(KC_R, ES_DLR),  // r -> $
    [Perc] = ACTION_TAP_DANCE_DOUBLE(KC_T, ES_PERC), // t -> %
    [Lth]  = ACTION_TAP_DANCE_DOUBLE(KC_S, ES_LABK), // s -> <
    [Gth]  = ACTION_TAP_DANCE_DOUBLE(KC_D, ES_RABK), // d -> >
    [Aqes] = ACTION_TAP_DANCE_DOUBLE(KC_F, ES_IQUE), // f -> ¿
    [Cqes] = ACTION_TAP_DANCE_DOUBLE(KC_G, ES_QUES), // g -> ?
    [Bsls] = ACTION_TAP_DANCE_DOUBLE(KC_Z, ES_BSLS), // z -> '\'
    [Eql]  = ACTION_TAP_DANCE_DOUBLE(KC_X, ES_EQL),  // x -> =
    [Ampr] = ACTION_TAP_DANCE_DOUBLE(KC_C, ES_AMPR), // c -> &
    [Apar] = ACTION_TAP_DANCE_DOUBLE(KC_Y, ES_LPRN), // y -> (
    [Cpar] = ACTION_TAP_DANCE_DOUBLE(KC_U, ES_RPRN), // u -> )
    [Abra] = ACTION_TAP_DANCE_DOUBLE(KC_H, ES_LBRC), // h -> [
    [Cbra] = ACTION_TAP_DANCE_DOUBLE(KC_J, ES_RBRC), // j -> ]
    [Allv] = ACTION_TAP_DANCE_DOUBLE(KC_N, ES_LCBR), // n -> {
    [Cllv] = ACTION_TAP_DANCE_DOUBLE(KC_M, ES_RCBR), // m -> }
    [Aexc] = ACTION_TAP_DANCE_DOUBLE(KC_K, ES_IEXL), // k -> ¡
    [Cexc] = ACTION_TAP_DANCE_DOUBLE(KC_L, ES_EXLM), // l -> !
    [Acen] = ACTION_TAP_DANCE_DOUBLE(ES_ACUT, ES_GRV), // á -> à
    [Comm] = ACTION_TAP_DANCE_DOUBLE(ES_COMM, ES_SCLN), // , -> ;
    [Dot]  = ACTION_TAP_DANCE_DOUBLE(ES_DOT, ES_COLN), // . -> :
    [Mins] = ACTION_TAP_DANCE_DOUBLE(ES_MINS, ES_UNDS), // - -> _
    
    [Stcw] = ACTION_TAP_DANCE_FN(td_SftCw), // LShift -> CapsWord on
    [FnGm] = ACTION_TAP_DANCE_FN(td_FnGmng), // Fn -> Gmng
};



bool process_record_user(uint16_t keycode, keyrecord_t *record){
    switch (keycode) {
        case TD(FnGm):
            if (record -> event.pressed) layer_on(Gmng);
            else layer_off(Gmng);
            return true;
        default: return true;
    }
}
