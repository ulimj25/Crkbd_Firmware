/*
Copyright 2019 @foostan

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

// Spanish keys
#include "keymap_spanish.h"

// Layers
#include "layers.h"
#include "tapdance_actions.h"

// Caps word
//#include "capsword.h"

// Key overrides
const key_override_t delete_ko = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

const key_override_t *key_overrides[] = {
    &delete_ko
};

// Tap dances
//#include "tapdance.h"
extern tap_dance_action_t tap_dance_actions[];


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [Wrtng] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB, TD(Slsh), TD(At), TD(Num), TD(Dlr), TD(Perc),                      TD(Apar), TD(Cpar), KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     TD(Stcw), KC_A,   TD(Lth), TD(Gth), TD(Aqes), TD(Cqes),                     TD(Abra), TD(Cbra), TD(Aexc), TD(Cexc), ES_NTIL, TD(Acen),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, TD(Bsls), TD(Eql), TD(Ampr),  KC_V,    KC_B,                      TD(Allv), TD(Cllv), TD(Comm), TD(Dot), TD(Mins), KC_LALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, MO(Sym),  KC_SPC,     KC_ENT, TD(FnGm), KC_ESC
                                      //`--------------------------'  `--------------------------'

  ),

    [Sym] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, ES_TILD, ES_PIPE, _______, ES_ASTR,                      _______, KC_7,    KC_8,    KC_9,   _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______ , KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  ES_PLUS,                      _______, KC_4,    KC_5,    KC_6,   ES_DQUO, KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, ES_DIAE, ES_CIRC, ES_MINS,                       ES_DOT, KC_1,    KC_2,    KC_3,   ES_QUOT, KC_LALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______, _______,   KC_0,   KC_LGUI, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [Fn] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,                      _______, KC_F7,   KC_F8,    KC_F9,  KC_F10,  RM_SATU,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, KC_BRIU,                      _______, KC_F4,   KC_F5,    KC_F6,  KC_F11,  RM_VALU,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, KC_VOLD, KC_MUTE, KC_VOLU, KC_BRID,                      _______, KC_F1,   KC_F2,    KC_F3,  KC_F12,  RM_SPDU,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,   RM_TOGG, _______, RM_NEXT
                                      //`--------------------------'  `--------------------------'
  ),

    [Gmng] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,    KC_1,   KC_Q,    KC_W,   KC_E,    KC_T,                          KC_K,    KC_F7,   KC_F8,   KC_F9,   KC_F10, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,   KC_2,   KC_A,    KC_S,   KC_D,    KC_F,                          KC_I,    KC_F4,   KC_F5,   KC_F6,  _______, KC_RALT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,   KC_3,   KC_Z,    KC_X,   KC_C,    KC_V,                          KC_O,    KC_F1,   KC_F2,   KC_F3,  _______, KC_LALT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         KC_4, MO(Gmngsym), KC_SPC,    TG(Gmng), TG(Gmng), _______
                                      //`--------------------------'  `--------------------------'
  ),
    [Gmngsym] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_J,    KC_5,    KC_T,    _______, KC_Y,    KC_U,                    _______,  _______,  _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_6,    _______, _______, _______, KC_G,                    _______,  _______,  _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_7,    KC_B,     KC_N,   KC_M,    KC_H,                    _______,  _______,  _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         _______, _______, _______,    _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  )
};

/*

#include "capsword.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record){
    switch (keycode){
        case TD(LYR1):
            if (record->event.pressed) layer_on(Sym);
            else layer_off(Sym);
            return true;
        case TD(LYR2):
            if (record->event.pressed) layer_on(Fn);
            else layer_off(Fn);
            return true;
        default: return true;
    }
}

#include "oled.h"
bool oled_task_user(void){
     if (!is_keyboard_master()) render_logo();

     if (is_keyboard_master()){
	Write_lyr();

	}
     return false;
}
*/
