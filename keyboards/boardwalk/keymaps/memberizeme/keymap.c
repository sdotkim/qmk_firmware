/*
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

#include QMK_KEYBOARD_H


#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define META OSL(_META)

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _GAMING,
  _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASE
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      |      -      | =      |      6      | 7      | 8      | 9      | 0      | META   |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      |      [      | ]      |      Y      | U      | I      | O      | P      | QUOTE  |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | LSHIFT | A      | S      | D      | F      | G      |      KC_NO  | KC_NO  |      H      | J      | K      | L      | ;      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * | KC_GRV | Z      | X      | C      | V      | B      |      KC_BSPC| KC_ENT |      N      | M      | ,      | .      | /      | \      |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_BASE] = LAYOUT_memberizeme(
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_MINS, KC_EQL,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    META, \
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_LBRC, KC_RBRC,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_QUOT, \
     KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         XXXXXXX, XXXXXXX,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT, \
     KC_GRV,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_BSPC, KC_ENT,       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS, \
     XXXXXXX, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

/* RAISE
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | ESC    |        |        | VOL UP | MUTE   | VOL DWN|             |        |             |        |        |        |        | META   |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * |        |        |        | PRIV   | PLAY   | NEXT   |             |        |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     |      KC_NO  | KC_NO  |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * |        | F11    | F12    | F13    | F14    | F15    |             |        |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_RAISE] = LAYOUT_memberizeme(
     KC_ESC,  XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, META,    \
     XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,       XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

/* LOWER
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | ESC    |        |        |        |        |        |             |        |             |        |        |        |        | META   |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * |        | UNDO   | CUT    | COPY   | PASTE  |        |             | PG UP  |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * |        | F6     | F7     | F8     | F9     | F10    |      KC_NO  | KC_NO  |      HOME   | UP     | END    |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * |        | F16    | F17    | F18    | F19    | F20    |      DEL    | PG DOWN|      LEFT   | DOWN   | RIGHT  |        |        |        |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_LOWER] = LAYOUT_memberizeme(
     KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, META,    \
     XXXXXXX, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, XXXXXXX,      XXXXXXX, KC_PGUP,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,       XXXXXXX, XXXXXXX,      KC_HOME, KC_UP,   KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,       KC_DEL,  KC_PGDN,      KC_LEFT, KC_DOWN, KC_RIGHT,XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

 /* GAMING
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      |             |        |      6      | 7      | 8      | 9      | 0      | META   |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * | T      | TAB    | Q      | W      | E      | R      |             |        |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | G      | LSHIFT | A      | S      | D      | F      |      KC_NO  | KC_NO  |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * | B      | LCTRL  | Z      | X      | C      | V      |             |        |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        |        |        |        |        | LALT   |      SPACE  | KC_NO  |             | RCTRL  | KC_MENU|        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_GAMING] = LAYOUT_memberizeme(
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         XXXXXXX, XXXXXXX,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    META,    \
     KC_T,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,         XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,         XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_RSFT, \
     KC_B,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,         XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,      KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

 /* META
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * |        |        |        |        |        |        |             |        |             |        |        |        |        | LAYER 0|
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * |        |        |        |        |        |        |             |        |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * |        | LAYER 1| LAYER 2| LAYER 3| LAYER 4|        |      KC_NO  | KC_NO  |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * |        |        |        |        |        |        |             |        |             |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |             | KC_NO  |             |        |        |        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_META] = LAYOUT_memberizeme(
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(0),   \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, TO(1),   TO(2)  , TO(3)  , TO(4)  , TO(5)  ,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
 ),
/* _Template
* .------------------------------------------------------     ------------------     -----------------------------------------------------.
* | ESC    |        |        |        |        |        |             |        |             |        |        |        |        | META   |
* |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
* | TAB    |        |        |        |        |        |             |        |             |        |        |        |        |        |
* |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
* | KC_GRV |        |        |        |        |        |      KC_NO  | KC_NO  |             |        |        |        |        |        |
* |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
* | LSHIFT |        |        |        |        |        |             |        |             |        |        |        |        |        |
* |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
* |        | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        |        |
* '------------------------------------------------------     ------------------     -----------------------------------------------------'
*/
/* _Template
[_TEMPLATE] = LAYOUT_memberizeme(
    KC_ESC,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, META,    \
    KC_TAB,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, XXXXXXX  \
),
*/
};
