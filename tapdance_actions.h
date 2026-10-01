// Tap dance definitions
#pragma once

#include QMK_KEYBOARD_H
#include "tapdance.h"
#include "keymap_spanish.h"

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
    
    [FnGm] = ACTION_TAP_DANCE_FN_ADVANCED(td_fn_gaming_each, td_fn_gaming_finished, td_fn_gaming_reset), // Fn -> Gmng
};
