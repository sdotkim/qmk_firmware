#include QMK_KEYBOARD_H

// One shot modifier keys.
#define MD_LSFT MT(MOD_LSFT, KC_TAB)
#define MD_LCTL MT(MOD_LCTL, KC_GRV)
#define MD_RSFT MT(MOD_RSFT, KC_QUOT)
#define MD_RCTL MT(MOD_RCTL, KC_BSLS)
#define ALT_TAB LALT(KC_TAB)

// Layer switch.
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SPACE LT(_SPACE, KC_SPC)
#define ENTER KC_ENT
#define META OSL(_META)
#define LT_A LT(_A, KC_A)

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _A,
  _SPACE,
  _META
};

enum custom_keycodes {
  MEMBERIZEME = SAFE_RANGE,
  MM_AGIN,
  MM_COPY,
  MM_CUT,
  MM_PSTE,
  MM_SALL,
  MM_SAVE,
  MM_UNDO,
  MT_COPY,
  MT_PSTE
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
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,     META,\
      MD_LSFT,    LT_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, MD_RSFT,\
      MD_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, MD_RCTL,\
                                          KC_LGUI,   LOWER,   SPACE,      ENTER,   RAISE, KC_RALT \
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

  [_SPACE] = LAYOUT( \
      _______, MM_AGIN, XXXXXXX, MT_COPY, MT_PSTE, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, MM_SALL, MM_SAVE, XXXXXXX, KC_BSPC,  KC_DEL,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
      _______, MM_UNDO,  MM_CUT, MM_COPY, MM_PSTE,  KC_ENT,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
                                          _______, _______, _______,    _______, _______, _______ \
  ),

  [_META] = LAYOUT( \
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        TO(1),   TO(2),   TO(3),   TO(4),   TO(5),   TO(0),\
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX,\
        RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, KC_SLEP,\
                                          _______, _______, _______,    _______, _______, _______ \
  )
};

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
    case MM_SALL:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("a"));
      }
      break;
    case MM_SAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_LCTL("s"));
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
