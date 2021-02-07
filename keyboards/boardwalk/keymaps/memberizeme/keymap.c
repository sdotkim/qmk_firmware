#include "memberizeme.h"
#include "tapdance.h"

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _GM,
  _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* _Template
[_TEMPLATE] = LAYOUT_memberizeme(
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, _______, _______, _______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______ \
),
*/
 [_BASE] = LAYOUT_memberizeme(
   TD_ESCC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_MINS,  KC_EQL,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    META, \
    KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_LBRC, KC_RBRC,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, XXXXXXX, \
   KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      XXXXXXX, XXXXXXX,         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_RSFT, \
   KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_BSPC, TD_KCEN,         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS, \
   KC_LEAD, XXXXXXX, KC_LALT, KC_LGUI,   LOWER,   KC_SPC,      KC_SPC, XXXXXXX,       KC_ENT,   RAISE, KC_RALT,  KC_APP, XXXXXXX, XXXXXXX  \
 ),

 [_RAISE] = LAYOUT_memberizeme(
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, XXXXXXX,      XXXXXXX, XXXXXXX,      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______, \
   _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, XXXXXXX,      XXXXXXX, XXXXXXX,      KC_HOME,  KC_END, KC_PGUP, KC_PGDN, XXXXXXX, _______, \
   _______, _______, _______, _______, _______,  KC_DEL,      _______, _______,      KC_RALT, _______, _______, _______, _______, _______  \
 ),

 [_LOWER] = LAYOUT_memberizeme(
   _______, XXXXXXX, XXXXXXX,   KC_F7,   KC_F8,   KC_F9,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    KC_GRV,  TD_MNS,  TD_EQL,  TD_BRC,  TD_CRB,  TD_PRN,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_QUOT, \
   KC_TILD, TD_UNDO, TD_COPY, TD_PSTE, KC_BSPC,  KC_DEL,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DQUO, \
   _______, _______, _______, _______, _______, _______,      _______, _______,       KC_INS, _______, _______, _______, _______, _______  \
 ),

 [_GM] = LAYOUT_memberizeme(
    KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      XXXXXXX, XXXXXXX,      _______, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, _______, \
      KC_T,  KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,      XXXXXXX, XXXXXXX,      _______,   KC_P7,   KC_P8,   KC_P9, KC_PPLS, _______, \
      KC_G, KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,      XXXXXXX, XXXXXXX,      _______,   KC_P4,   KC_P5,   KC_P6, XXXXXXX, _______, \
      KC_B, KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,      XXXXXXX, XXXXXXX,      _______,   KC_P1,   KC_P2,   KC_P3, KC_PENT, _______, \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,  KC_SPC,      KC_SPC,  XXXXXXX,      XXXXXXX,   KC_P0, KC_PDOT, XXXXXXX, XXXXXXX, KC_BSPC  \
 ),

 [_META] = LAYOUT_memberizeme(
   KC_MAKE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,        TO(1),   TO(2),   TO(3),   TO(4),   TO(5),   TO(0), \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(_GM), XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
     RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP  \
 )
};
