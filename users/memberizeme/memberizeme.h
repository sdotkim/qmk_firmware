#pragma once
#include QMK_KEYBOARD_H
#include "tapdance.h"

// Layer modifiers.
#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define LT_A LT(_A, KC_A)
#define META OSL(_META)


// One shot modifier keys.
#define MD_LSFT MT(MOD_LSFT, KC_TAB)
#define MD_LCTL MT(MOD_LCTL, KC_GRV)
#define MD_RSFT MT(MOD_RSFT, KC_QUOT)
#define MD_RCTL MT(MOD_RCTL, KC_BSLS)


enum custom_keycodes {
  MEMBERIZEME = SAFE_RANGE,
  KC_MAKE,           // Rebuild the current firmware
};
