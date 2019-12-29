#include QMK_KEYBOARD_H

// One shot modifier keys.
#define MD_LSFT MT(MOD_LSFT, KC_TAB)
#define MD_LCTL MT(MOD_LCTL, KC_GRV)
#define MD_RSFT MT(MOD_RSFT, KC_QUOT)
#define MD_RCTL MT(MOD_RCTL, KC_BSLS)

// Layer modifiers.
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SPACE LT(_SPACE, KC_SPC)
#define ENTER KC_ENT
#define META OSL(_META)

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _SPACE,
  _ADJUST,
  _META
};

enum custom_keycodes {
  MEMBERIZEME = SAFE_RANGE,
  MM_AGIN,
  MM_COPY,
  MM_CUT,
  MM_PSTE,
  MM_UNDO,
  MT_COPY,
  MT_PSTE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT( \
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,     META,\
      MD_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, MD_RSFT,\
      MD_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, MD_RCTL,\
                                          KC_LGUI,   LOWER,   SPACE,      ENTER,   RAISE, KC_RALT \
  ),

  [_RAISE] = LAYOUT( \
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,\
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_PGUP, _______,\
      _______,  KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,                      XXXXXXX, KC_HOME,  KC_END, XXXXXXX, KC_PGDN, _______,\
                                          KC_LGUI,   LOWER, KC_BSPC,      ENTER,   RAISE, KC_RALT \
    ),

  [_LOWER] = LAYOUT( \
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,\
      _______,  KC_F6,   KC_F7,   KC_F8,    KC_F9,  KC_F10,                      KC_MINS, KC_PLUS, KC_LBRC, KC_LCBR, XXXXXXX, _______,\
      _______,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,                      KC_UNDS,  KC_EQL, KC_RBRC, KC_RCBR, XXXXXXX, _______,\
                                          KC_LGUI,   LOWER,   SPACE,     KC_DEL,   RAISE, KC_RALT \
  ),

  [_SPACE] = LAYOUT( \
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, MM_UNDO,  MM_CUT, MM_COPY, MM_PSTE, KC_BSPC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, MT_COPY, MT_PSTE,  KC_DEL,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
                                          KC_LGUI,   LOWER,   SPACE,      ENTER,   RAISE, KC_RALT \
  ),

  [_ADJUST] = LAYOUT( \
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
        RESET, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
                                          KC_LGUI,   LOWER,   SPACE,      ENTER,   RAISE, KC_RALT \
  ),

  [_META] = LAYOUT( \
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TO(0),\
      XXXXXXX,   TO(1),   TO(2)  , TO(3)  , TO(4)  , TO(5),                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEAD,\
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
                                          KC_LGUI,   LOWER,   SPACE,      ENTER,   RAISE, KC_RALT \
  )

  /*
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       TRANSP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TRANSP,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       TRANSP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TRANSP,\
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       TRANSP, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  TRANSP,\
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
  */
  /*
  [TEMPLATE] = LAYOUT( \
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
                                          KC_LGUI,   LOWER,   SPACE,      ENTER,   RAISE, KC_RALT \
  ),
  */
};

/*
  Tri layer switch to ADJUST
*/
uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MM_AGIN:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_LSFT("z")));
      }
      break;
    case MM_COPY:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("c"));
      }
      break;
    case MM_CUT:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("x"));
      }
      break;
    case MM_PSTE:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("v"));
      }
      break;
    case MM_UNDO:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("z"));
      }
      break;
    case MT_COPY:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_LSFT("c")));
      }
      break;
    case MT_PSTE:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL(SS_LSFT("v")));
      }
      break;
  }
  return true;
};
