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
      TD_ESCC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                       TD_KCY,  TD_KCU,    KC_I,    KC_O,   KC_P,     META,\
      MD_LSFT,  TD_KCA,  TD_KCS,    KC_D,    KC_F,    KC_G,                       TD_KCH,  TD_KCJ,  TD_KCK,  TD_KCL, KC_SCLN, MD_RSFT,\
      MD_LCTL,  TD_KCZ,  TD_KCX,  TD_KCC,  TD_KCV,    KC_B,                       TD_KCN,  TD_KCM, KC_COMM,  KC_DOT, KC_SLSH, MD_RCTL,\
                                          KC_LGUI,   LOWER,  TD_KCSP,   TD_KCEN,   RAISE, KC_RALT \
  ),

  [_RAISE] = LAYOUT( \
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_HOME,  KC_END, KC_PGUP, KC_PGDN, XXXXXXX, _______,\
                                          _______, _______, _______,    _______, _______, _______ \
    ),

  [_LOWER] = LAYOUT( \
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,\
      _______, KC_MINS,  KC_EQL, KC_LBRC, KC_LCBR, KC_LPRN,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, KC_UNDS, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
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
