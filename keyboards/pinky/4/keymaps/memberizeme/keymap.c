/* Copyright 2018 'Masayuki Sunahara'
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
#include "memberizeme.h"
#include "tapdance.h"

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _A,
  _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT( \
      TD_ESCC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_LPRN,    KC_RPRN,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_TAB,\
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_LBRC,    KC_RBRC,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,\
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_LCBR,    KC_RCBR,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_RSFT,\
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_SPC,     KC_ENT,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS,\
                                 KC_LALT,   LOWER, KC_LGUI,   LOWER,      RAISE, KC_RGUI,  RAISE, KC_RALT \
  ),
  [_RAISE] = LAYOUT( \
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX,    XXXXXXX, KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______,\
      _______, KC_MINS, KC_UNDS,  KC_EQL, KC_PLUS, XXXXXXX, XXXXXXX,    XXXXXXX, KC_HOME,  KC_END, KC_PGUP, KC_PGDN, XXXXXXX, _______,\
                                 _______, _______, _______, _______,    _______, _______, _______, _______ \
  ),
  [_LOWER] = LAYOUT( \
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PSLS, XXXXXXX, _______,\
      _______,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,     KC_NUM,   KC_P7,   KC_P8,   KC_P9, KC_PAST, XXXXXXX, _______,\
       KC_GRV,  TD_MNS,  TD_EQL, XXXXXXX, KC_BSPC,  KC_DEL, XXXXXXX,    XXXXXXX,   KC_P4,   KC_P5,   KC_P6, KC_PPLS, XXXXXXX, KC_QUOT,\
      KC_TILD, TD_UNDO, TD_COPY, TD_PSTE, XXXXXXX, XXXXXXX, XXXXXXX,    KC_PENT,   KC_P1,   KC_P2,   KC_P3, KC_PMNS, XXXXXXX, KC_DQUO,\
                                 _______, _______, _______, _______,      KC_P0, KC_PDOT, _______, _______ \
  ),
  [_META] = LAYOUT( \
      KC_MAKE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO(0),       TO(5), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(0),\
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO(1),       TO(6), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO(3),       TO(7), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TO(4),       TO(8), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP,\
                                 _______, _______, _______, _______,    _______, _______, _______, _______ \
  )
};
