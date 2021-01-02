#pragma once

//Tap Dance Declarations
enum {
  TD_ESC_CAPS = 0,
  TD_KC_A,
  TD_KC_C,
  TD_KC_ENTER,
  TD_KC_H,
  TD_KC_J,
  TD_KC_K,
  TD_KC_L,
  TD_KC_M,
  TD_KC_N,
  TD_KC_S,
  TD_KC_SPACE,
  TD_KC_U,
  TD_KC_V,
  TD_KC_X,
  TD_KC_Y,
  TD_KC_Z,
  TD__BRC,
  TD__CRB,
  TD__EQL,
  TD__MNS,
  TD__PRN,

  TD__COPY,
  TD__PASTE,
  TD__UNDO
};

// Tad Dance shorthands for layer definitions.
#define TD_ESCC TD(TD_ESC_CAPS)
#define TD_KCA TD(TD_KC_A)
#define TD_KCEN TD(TD_KC_ENTER)
#define TD_KCC TD(TD_KC_C)
#define TD_KCH TD(TD_KC_H)
#define TD_KCJ TD(TD_KC_J)
#define TD_KCK TD(TD_KC_K)
#define TD_KCL TD(TD_KC_L)
#define TD_KCM TD(TD_KC_M)
#define TD_KCN TD(TD_KC_N)
#define TD_KCS TD(TD_KC_S)
#define TD_KCSP TD(TD_KC_SPACE)
#define TD_KCU TD(TD_KC_U)
#define TD_KCV TD(TD_KC_V)
#define TD_KCX TD(TD_KC_X)
#define TD_KCY TD(TD_KC_Y)
#define TD_KCZ TD(TD_KC_Z)

#define TD_BRC TD(TD__BRC)
#define TD_CRB TD(TD__CRB)
#define TD_EQL TD(TD__EQL)
#define TD_MNS TD(TD__MNS)
#define TD_PRN TD(TD__PRN)

#define TD_COPY TD(TD__COPY)
#define TD_PSTE TD(TD__PASTE)
#define TD_UNDO TD(TD__UNDO)
