#include "ninjonas.h"

#ifdef COMBO_ENABLE
enum combo_events {
  EQ_QUIT,
  RW_CLOSE,
  QT_TAB,
  ZC_COPY,
  XV_PASTE
};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    case EQ_QUIT:
      if (pressed) {
        tap_code16(LGUI(KC_Q));
      }
      break;
    case RW_CLOSE:
      if (pressed) {
        tap_code16(LGUI(KC_W));
      }
      break;
    case QT_TAB:
      if (pressed) {
        tap_code16(LGUI(KC_T));
      }
      break;
    case ZC_COPY:
      if (pressed) {
        tap_code16(LGUI(KC_C));
      }
      break;
    case XV_PASTE:
      if (pressed) {
        tap_code16(LGUI(KC_V));
      }
      break;
  }
}
#endif