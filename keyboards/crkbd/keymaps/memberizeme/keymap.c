#include "memberizeme.h"

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _A,
  _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*

  [TEMPLATE] = LAYOUT( \
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
                                          _______, _______, _______,    _______, _______, _______ \`
  ),
  */
  [_BASE] = LAYOUT( \
      TD_ESCC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,     META,\
      KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_RSFT,\
      KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_BSLS,\
                                          KC_LGUI,   LOWER,  TD_KCSP,   TD_KCEN,   RAISE, KC_RALT \
  ),

  [_RAISE] = LAYOUT( \
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME,  KC_END, KC_PGUP, KC_PGDN, XXXXXXX, _______,\
                                          _______, _______, _______,    _______, _______, _______ \
    ),

  [_LOWER] = LAYOUT( \
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,\
       KC_GRV,  TD_MNS,  TD_EQL,  TD_BRC,  TD_CRB,  TD_PRN,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_QUOT,\
      KC_TILD, TD_UNDO, TD_COPY, TD_PSTE, KC_BSPC,  KC_DEL,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DQUO,\
                                          _______, _______, _______,    _______, _______, _______ \
  ),

  [_A] = LAYOUT( \
      _______, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
                                          _______, _______, _______,    _______, _______, _______ \
    ),

  [_META] = LAYOUT( \
      KC_MAKE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        TO(1),   TO(2),   TO(3),   TO(4),   TO(5),   TO(0),\
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEAD, XXXXXXX,                      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,\
        RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, KC_SLEP,\
                                          _______, _______, _______,    _______, _______, _______ \
  )
};
