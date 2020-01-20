#include "memberizeme.h"

// Layer shorthand
enum layer {
  _BASE,
  _RAISE,
  _LOWER,
  _A,
  _GM,
  _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* _Template
* .------------------------------------------------------     ------------------     -----------------------------------------------------.
* | TRANSP |        |        |        |        |        |             |        |             |        |        |        |        | TRANSP |
* |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
* | TRANSP |        |        |        |        |        |             |        |             |        |        |        |        | TRANSP |
* |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
* | TRANSP |        |        |        |        |        |      KC_NO  | KC_NO  |             |        |        |        |        | TRANSP |
* |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
* | TRANSP |        |        |        |        |        |             |        |             |        |        |        |        | TRANSP |
* |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
* | TRANSP | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        | TRANSP |
* '------------------------------------------------------     ------------------     -----------------------------------------------------'
*/
/* _Template
[_TEMPLATE] = LAYOUT_memberizeme(
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,\
   _______, _______, _______, _______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______ \
),
*/

/* BASE
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | XXXXXXX| 1      | 2      | 3      | 4      | 5      |      -      | =      |      6      | 7      | 8      | 9      | 0      | META   |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * | ESC    | Q      | W      | E      | R      | T      |      [      | ]      |      Y      | U      | I      | O      | P      | XXXXXXX|
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | MD_LSFT| A      | S      | D      | F      | G      |      KC_NO  | KC_NO  |      H      | J      | K      | L      | ;      | MD_RSFT|
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * | MD_LCTL| Z      | X      | C      | V      | B      |      KC_BSPC| KC_ENT |      N      | M      | ,      | .      | /      | MD_RCTL|
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_BASE] = LAYOUT_memberizeme(
   XXXXXXX,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_MINS,  KC_EQL,         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    META, \
   TD_ESCC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_LBRC, KC_RBRC,       TD_KCY,  TD_KCU,    KC_I,    KC_O,    KC_P, XXXXXXX, \
   MD_LSFT,  TD_KCA,  TD_KCS,    KC_D,    KC_F,    KC_G,      XXXXXXX, XXXXXXX,       TD_KCH,  TD_KCJ,  TD_KCK,  TD_KCL, KC_SCLN, MD_RSFT, \
   MD_LCTL,  TD_KCZ,  TD_KCX,  TD_KCC,  TD_KCV,    KC_B,      KC_BSPC, TD_KCEN,       TD_KCN,  TD_KCM, KC_COMM,  KC_DOT, KC_SLSH, MD_RCTL, \
   KC_LEAD, XXXXXXX, XXXXXXX, KC_LALT, KC_LGUI,   LOWER,      TD_KCSP, XXXXXXX,        RAISE, KC_RALT,  KC_APP, XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

 [_RAISE] = LAYOUT_memberizeme(
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, _______, \
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      KC_HOME,  KC_END, KC_PGUP, KC_PGDN, XXXXXXX, _______, \
   _______, _______, _______, _______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______  \
 ),

 [_LOWER] = LAYOUT_memberizeme(
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX, KC_BSPC,  KC_ENT,  KC_DEL, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, KC_MINS,  KC_EQL, KC_LBRC, KC_LCBR, KC_LPRN,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, KC_UNDS, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, _______, _______, _______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______  \
 ),

 [_A] = LAYOUT_memberizeme( \
   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX,   KC_F1,   KC_F2,   KC_F3,   KC_F4,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX,   KC_F5,   KC_F6,   KC_F7,   KC_F8,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, XXXXXXX,   KC_F9,  KC_F10,  KC_F11,  KC_F12,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
   _______, _______, _______, _______, _______, _______,      _______, _______,       _______, _______, _______, _______, _______, _______ \
 ),

 [_GM] = LAYOUT_memberizeme(
   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
   KC_T,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
   KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
   KC_B,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,      KC_SPC,  XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BSPC  \
 ),

 [_META] = LAYOUT_memberizeme(
   KC_MAKE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,        TO(1),   TO(2),   TO(3),   TO(4),   TO(5),   TO(0), \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(_GM), XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, \
   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
     RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP  \
 )
};
