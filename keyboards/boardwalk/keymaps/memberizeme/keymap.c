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
  _GAMING,
  _META
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

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
     XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         KC_MINS, KC_EQL,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    META,    \
     KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,         KC_LBRC, KC_RBRC,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    XXXXXXX, \
     MD_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,         XXXXXXX, XXXXXXX,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MD_RSFT, \
     MD_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,         KC_BSPC, KC_ENT,       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MD_RCTL, \
     XXXXXXX, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

/* RAISE
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | TRANSP |        |        | VOL UP | MUTE   | VOL DWN|             |        |             |        |        |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * | TRANSP |        |        | PRIV   | PLAY   | NEXT   |             |        |             | PG UP  | HOME   |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | TRANSP |        |        |        |        |        |      KC_NO  | KC_NO  |      LEFT   | DOWN   | UP     | RIGHT  |        | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------------------------+--------|
 * | TRANSP |        |        |        |        |        |             |        |             | PG DOWN| END    |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * | TRANSP | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        | TRANSP |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_RAISE] = LAYOUT_memberizeme(
     _______, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_PGUP, KC_HOME, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, KC_PGDN, KC_END,  XXXXXXX, XXXXXXX, _______, \
     _______, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, _______  \
 ),

/* LOWER
 * .------------------------------------------------------     ------------------     -----------------------------------------------------.
 * | TRANSP | F1     | F2     | F3     | F4     | F5     |             |        |             |        |        |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+--------+-----------------|
 * | TRANSP | F6     | F7     | F8     | F9     | F10    |             |        |             |        |        |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | TRANSP | F11    | F12    | F13    | F14    | F15    |      KC_NO  | KC_NO  |             |        |        |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+--------+     --------+--------+     --------+--------+--------+-----------------+--------|
 * | TRANSP | F16    | F17    | F18    | F19    | F20    |      DEL    |        |             |        |        |        |        | TRANSP |
 * |--------+--------+--------+--------+--------+---------     --------+--------+     --------+--------+-----------------+--------+--------|
 * | TRANSP | LGUI   |        | LALT   | LCTRL  | LOWER  |      SPACE  | KC_NO  |      RAISE  | RCTRL  | KC_MENU|        |        | TRANSP |
 * '------------------------------------------------------     ------------------     -----------------------------------------------------'
 */
 [_LOWER] = LAYOUT_memberizeme(
     _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,        XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,       XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_F11,  KC_F12,  KC_F13,  KC_F14,  KC_F15,       XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,       KC_DEL,  XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, _______  \
 ),

 /* SPACE
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
 [_SPACE] = LAYOUT_memberizeme(
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
     _______, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        KC_SPC,  XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, _______  \
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
 [_GAMING] = LAYOUT_memberizeme(
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     KC_T,    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
     KC_B,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,         XXXXXXX, XXXXXXX,      _______, _______, _______, _______, _______, _______, \
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
     RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(0),   \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, TO(1),   TO(2)  , TO(3)  , TO(4)  , TO(_GAMING)  ,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
 ),

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
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, KC_LGUI, XXXXXXX, KC_LALT, KC_LCTL, LOWER,        SPACE,   XXXXXXX,      RAISE,   KC_RCTL, KC_APP,  XXXXXXX, XXXXXXX, _______  \
),
*/
};
