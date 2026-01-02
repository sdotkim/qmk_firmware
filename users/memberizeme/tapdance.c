#include "memberizeme.h"
#include "tapdance.h"

// Tap Dance KC_A
void dance_kca (tap_dance_state_t *state, void *user_data) {
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
void dance_kcc (tap_dance_state_t *state, void *user_data) {
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
void dance_kch (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_H);
      break;
    case 2:
      register_code(KC_LEFT);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_LEFT);
      break;
    case 4:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_LEFT);
      break;
  }
}
void dance_kch_reset (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_H);
      break;
    case 2:
      unregister_code(KC_LEFT);
      break;
    case 3:
      unregister_code(KC_LEFT);
      unregister_code(KC_LGUI);
      break;
    case 4:
      unregister_code(KC_LEFT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_J
void dance_kcj (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_J);
      break;
    case 2:
      register_code(KC_DOWN);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_DOWN);
      break;
    case 4:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_DOWN);
      break;
  }
}
void dance_kcj_reset (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_J);
      break;
    case 2:
      unregister_code(KC_DOWN);
      break;
    case 3:
      unregister_code(KC_DOWN);
      unregister_code(KC_LGUI);
      break;
    case 4:
      unregister_code(KC_DOWN);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_K
void dance_kck (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_K);
      break;
    case 2:
      register_code(KC_UP);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_UP);
      break;
    case 4:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_UP);
      break;
  }
}
void dance_kck_reset (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_K);
      break;
    case 2:
      unregister_code(KC_UP);
      break;
    case 3:
      unregister_code(KC_UP);
      unregister_code(KC_LGUI);
      break;
    case 4:
      unregister_code(KC_UP);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_L
void dance_kcl (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_L);
      break;
    case 2:
      register_code(KC_RGHT);
      break;
    case 3:
      register_code(KC_LGUI);
      register_code(KC_RGHT);
      break;
    case 4:
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_RGHT);
      break;
  }
}
void dance_kcl_reset (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_L);
      break;
    case 2:
      unregister_code(KC_RGHT);
      break;
    case 3:
      unregister_code(KC_RGHT);
      unregister_code(KC_LGUI);
      break;
    case 4:
      unregister_code(KC_RGHT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
      break;
  }
}

// Tap Dance KC_S
void dance_kcs (tap_dance_state_t *state, void *user_data) {
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
void dance_kcv (tap_dance_state_t *state, void *user_data) {
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
void dance_kcx (tap_dance_state_t *state, void *user_data) {
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
void dance_kcz (tap_dance_state_t *state, void *user_data) {
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


// Tap Dance Copy
void dance_copy (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_LCTL);
      register_code(KC_C);
      unregister_code(KC_C);
      unregister_code(KC_LCTL);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_LSFT);
      register_code(KC_C);
      unregister_code(KC_C);
      unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance Paste
void dance_paste (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_LCTL);
      register_code(KC_V);
      unregister_code(KC_V);
      unregister_code(KC_LCTL);
      break;
    case 2:
      register_code(KC_LCTL);
      register_code(KC_LSFT);
      register_code(KC_V);
      unregister_code(KC_V);
      unregister_code(KC_LSFT);
      unregister_code(KC_LCTL);
      break;
  }
}

// Tap Dance Paste
void dance_undo (tap_dance_state_t *state, void *user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_LCTL);
      register_code(KC_Z);
      unregister_code(KC_Z);
      unregister_code(KC_LCTL);
      break;
    case 2:
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
tap_dance_action_t tap_dance_actions[] = {
  [TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
  [TD_KC_A] = ACTION_TAP_DANCE_FN(dance_kca),
  [TD_KC_ENTER] = ACTION_TAP_DANCE_DOUBLE(KC_ENT, KC_DEL),
  [TD_KC_C] = ACTION_TAP_DANCE_FN(dance_kcc),
  [TD_KC_H] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_kch, dance_kch_reset),
  [TD_KC_J] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_kcj, dance_kcj_reset),
  [TD_KC_K] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_kck, dance_kck_reset),
  [TD_KC_L] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_kcl, dance_kcl_reset),
  [TD_KC_M] = ACTION_TAP_DANCE_DOUBLE(KC_M, KC_PGDN),
  [TD_KC_N] = ACTION_TAP_DANCE_DOUBLE(KC_N, KC_END),
  [TD_KC_S] = ACTION_TAP_DANCE_FN(dance_kcs),
  [TD_KC_SPACE] = ACTION_TAP_DANCE_DOUBLE(KC_SPC, KC_BSPC),
  [TD_KC_U] = ACTION_TAP_DANCE_DOUBLE(KC_U, KC_PGUP),
  [TD_KC_V] = ACTION_TAP_DANCE_FN(dance_kcv),
  [TD_KC_X] = ACTION_TAP_DANCE_FN(dance_kcx),
  [TD_KC_Y] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_HOME),
  [TD_KC_Z] = ACTION_TAP_DANCE_FN(dance_kcz),
  [TD__BRC] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
  [TD__CRB] = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
  [TD__EQL] = ACTION_TAP_DANCE_DOUBLE(KC_EQL, KC_PLUS),
  [TD__MNS] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_UNDS),
  [TD__PRN] = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN),
  [TD__COPY] = ACTION_TAP_DANCE_FN(dance_copy),
  [TD__PASTE] = ACTION_TAP_DANCE_FN(dance_paste),
  [TD__UNDO] = ACTION_TAP_DANCE_FN(dance_undo),
};
