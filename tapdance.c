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


// Hold -> layer Fn, double tap -> Layer Gmng
static bool fn_held = false;
 
void td_fn_gaming_each(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2)
    layer_on(Gmng);
}
 
void td_fn_gaming_finished(tap_dance_state_t *state, void *user_data) {
  if (state->count == 1 && state->pressed) {
    layer_on(Fn);
    fn_held = true;
  }
}
 
void td_fn_gaming_reset(tap_dance_state_t *state, void *user_data) {
  if (fn_held) {
    layer_off(Fn);
    fn_held = false;
  }
}

