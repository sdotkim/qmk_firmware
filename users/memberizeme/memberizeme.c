#include "memberizeme.h"

__attribute__ ((weak)) bool process_record_keymap (uint16_t keycode, keyrecord_t *record) {
  return true;
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
