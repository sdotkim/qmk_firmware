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
      KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_LBRC, KC_RBRC,         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, XXXXXXX, \
     MD_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      XXXXXXX, XXXXXXX,         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, MD_RSFT, \
     MD_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_BSPC,  KC_ENT,         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, MD_RCTL, \
     XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT, KC_LGUI,   LOWER,        SPACE, XXXXXXX,        RAISE, KC_RALT,  KC_APP, XXXXXXX, XXXXXXX, XXXXXXX  \
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
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_MINS,  KC_EQL, KC_LBRC, KC_LCBR, KC_LPRN,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_UNDS, KC_PLUS, KC_RBRC, KC_RCBR, KC_RPRN,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, _______, _______, _______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______  \
 ),

 [_SPACE] = LAYOUT_memberizeme(
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, _______, _______, _______, _______, _______,      _______, _______,      _______, _______, _______, _______, _______, _______  \
 ),

 /* GAMING
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      |             |        |      TRANSP | TRANSP | TRANSP | TRANSP | TRANSP | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * | T      | TAB    | Q      | W      | E      | R      |             |        |      TRANSP | TRANSP | TRANSP | TRANSP | TRANSP | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | G      | LSHIFT | A      | S      | D      | F      |      KC_NO  | KC_NO  |      TRANSP | TRANSP | TRANSP | TRANSP | TRANSP | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * | B      | LCTRL  | Z      | X      | C      | V      |             |        |      TRANSP | TRANSP | TRANSP | TRANSP | TRANSP | TRANSP |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * |        |        |        |        |        | LALT   |      SPACE  | KC_NO  |             | RCTRL  | KC_MENU|        |        |        |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_GM] = LAYOUT_memberizeme(
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     KC_T,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     KC_B,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,      KC_SPC,  XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
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
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,        TO(1),   TO(2),   TO(3),   TO(4),   TO(5),   TO(0), \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(_GM),      XXXXXXX, XXXXXXX,      XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX, XXXXXXX, \
       RESET, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_SLEP  \
 )
};
