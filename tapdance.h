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
#include QMK_KEYBOARD_H

// Tap dances list
enum tap_dances {
    Slsh,    // Q -> /
    At,      // W -> @
    Num,     // E -> #
    Dlr,     // R -> $
    Perc,    // T -> %
    Lth,     // S -> <
    Gth,     // D -> >
    Aqes,    // F -> ¿
    Cqes,    // G -> ?
    Bsls,    // Z -> '\'
    Eql,     // X -> =
    Ampr,    // C -> &
    Apar,    // Y -> (
    Cpar,    // U -> )
    Abra,    // H -> [
    Cbra,    // J -> ]
    Allv,    // N -> {
    Cllv,    // M -> }
    Aexc,    // K -> ¡
    Cexc,    // L -> !
    Acen,    // á -> à
    Comm,    // , -> ;
    Dot,     // . -> :
    Mins,    // - -> _
            
    Stcw,    // LSft -> Caps word
    FnGm    // Fn -> Gmng
};
// Custom functions
void td_SftCw(tap_dance_state_t *state, void *user_data);
void td_FnGmng(tap_dance_state_t *state, void *user_data);
