#include "memberizeme.h"

__attribute__ ((weak)) bool process_record_keymap (uint16_t keycode, keyrecord_t *record) {
  return true;
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool pressed = record->event.pressed;

  switch (keycode) {
    case KC_MAKE:  // Compiles the firmware, and adds the flash command based on keyboard bootloader
      if (!pressed) {
        send_string_with_delay_P(PSTR("make " QMK_KEYBOARD ":" QMK_KEYMAP
#if defined(__ARM__)
                     ":dfu-util"
#elif defined(BOOTLOADER_DFU)
                     ":dfu"
#elif defined(BOOTLOADER_HALFKAY)
                     ":teensy"
#elif defined(BOOTLOADER_CATERINA)
                     ":avrdude"
#endif // bootloader options
                     SS_TAP(X_ENTER)), 10);
      }
      return false;
      break;

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

LEADER_EXTERNS();

void matrix_scan_user(void) {
  LEADER_DICTIONARY() {
    leading = false;
    leader_end();

    SEQ_ONE_KEY(KC_R) {
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_RGHT);
      unregister_code(KC_RGHT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
    }
    SEQ_ONE_KEY(KC_E) {
      register_code(KC_LGUI);
      register_code(KC_LSFT);
      register_code(KC_LEFT);
      unregister_code(KC_LEFT);
      unregister_code(KC_LSFT);
      unregister_code(KC_LGUI);
    }
    SEQ_ONE_KEY(KC_F) {
      register_code(KC_LGUI);
      register_code(KC_RGHT);
      unregister_code(KC_RGHT);
      unregister_code(KC_LGUI);
    }
    SEQ_ONE_KEY(KC_D) {
      register_code(KC_LGUI);
      register_code(KC_LEFT);
      unregister_code(KC_LEFT);
      unregister_code(KC_LGUI);
    }
    SEQ_TWO_KEYS(KC_D, KC_D) {
      SEND_STRING(SS_LCTL("a") SS_LCTL("c"));
    }
    SEQ_THREE_KEYS(KC_D, KC_D, KC_S) {
      SEND_STRING("https://start.duckduckgo.com\n");
    }
    SEQ_TWO_KEYS(KC_A, KC_S) {
      register_code(KC_LGUI);
      register_code(KC_S);
      unregister_code(KC_S);
      unregister_code(KC_LGUI);
    }
  }
}
