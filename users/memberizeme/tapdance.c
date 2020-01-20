#include "memberizeme.h"

// Tap Dance KC_A
void dance_kca (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_A);
      unregister_code(KC_A);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_A);
      unregister_code(KC_A);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance KC_C
void dance_kcc (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_C);
      unregister_code(KC_C);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_C);
      unregister_code(KC_C);
      unregister_code(KC_LCTL);
      break;
    case 3:
      register_code(KC_LCTL);
      register_code(KC_LSFT);
      register_code(KC_C);
      unregister_code(KC_C);
      unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance KC_H
void dance_kch (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_H);
      unregister_code(KC_H);
      break;
    case 2:
      register_code(KC_LGUI);
      register_code(KC_LEFT);
      unregister_code(KC_LEFT);
      unregister_code(KC_LGUI);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_LEFT);
      unregister_code(KC_LEFT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}
// Tap Dance KC_J
void dance_kcj (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_J);
      unregister_code(KC_J);
      break;
    case 2:
      register_code(KC_LGUI);
      register_code(KC_DOWN);
      unregister_code(KC_DOWN);
      unregister_code(KC_LGUI);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_DOWN);
      unregister_code(KC_DOWN);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_K
void dance_kck (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_K);
      unregister_code(KC_K);
      break;
    case 2:
      register_code(KC_LGUI);
      register_code(KC_UP);
      unregister_code(KC_UP);
      unregister_code(KC_LGUI);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_LEFT);
      unregister_code(KC_LEFT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_L
void dance_kcl (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_L);
      unregister_code(KC_L);
      break;
    case 2:
      register_code(KC_LGUI);
      register_code(KC_RGHT);
      unregister_code(KC_RGHT);
      unregister_code(KC_LGUI);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_RGHT);
      unregister_code(KC_RGHT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_S
void dance_kcs (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_S);
      unregister_code(KC_S);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance KC_V
void dance_kcv (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_V);
      unregister_code(KC_V);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_V);
      unregister_code(KC_V);
      unregister_code(KC_LCTL);
      break;
    case 3:
      register_code(KC_LCTL);
      register_code(KC_LSFT);
      register_code(KC_V);
      unregister_code(KC_V);
      unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance KC_X
void dance_kcx (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_X);
      unregister_code(KC_X);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_X);
      unregister_code(KC_X);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance KC_Z
void dance_kcz (qk_tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
        register_code(KC_Z);
      unregister_code(KC_Z);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_Z);
      unregister_code(KC_Z);
      unregister_code(KC_LCTL);
      break;
    case 3:
      register_code(KC_LCTL);
      register_code(KC_LSFT);
      register_code(KC_Z);
      unregister_code(KC_Z);
      unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
      break;
  }
}

//Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
  [TD_KC_A] = ACTION_TAP_DANCE_FN(dance_kca),
  [TD_KC_C] = ACTION_TAP_DANCE_FN(dance_kcc),
  [TD_KC_H] = ACTION_TAP_DANCE_FN(dance_kch),
  [TD_KC_J] = ACTION_TAP_DANCE_FN(dance_kcj),
  [TD_KC_K] = ACTION_TAP_DANCE_FN(dance_kck),
  [TD_KC_L] = ACTION_TAP_DANCE_FN(dance_kcl),
  [TD_KC_S] = ACTION_TAP_DANCE_FN(dance_kcs),
  [TD_KC_V] = ACTION_TAP_DANCE_FN(dance_kcv),
  [TD_KC_X] = ACTION_TAP_DANCE_FN(dance_kcx),
  [TD_KC_Z] = ACTION_TAP_DANCE_FN(dance_kcz)
};
