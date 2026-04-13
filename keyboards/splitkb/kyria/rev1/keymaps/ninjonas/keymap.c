/* Copyright 2020 ninjonas
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "ninjonas.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_wrapper(
//  ,------—————————-------------------------------------.                                ,--------—————————-----------------------------------.
     _____________________QWERTY_L1______________________,                                 _____________________QWERTY_R1______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----|                                |------—+——------+——------+——------+——------+--------|
     _____________________QWERTY_L2______________________,                                 _____________________QWERTY_R2______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----+———-----------.  ,——————————————+------—+——------+——------+——------+——------+--------|
     _____________________QWERTY_L3______________________,XXXXXXX,KC_LALT,  T_CPAP,XXXXXXX,_____________________QWERTY_R3______________________,
//  `--------------------------+--------+--------+-------+-------+------|  |------+-------+-------+--------+--------+--------+--------+--------'
                                _____________MOD_LEFT_____________,T_LBRC,  T_RBRC,________MOD_RIGHT________,KC_MUTE
//                             `----------------------------------------'  `----------------------------------------'
  ),

  // Stage 1: DVORAK commented out — QWERTY only base layer
  // [_DVORAK] = LAYOUT_wrapper(
  //   _____________________DVORAK_L1______________________, _____________________DVORAK_R1______________________,
  //   _____________________DVORAK_L2______________________, _____________________DVORAK_R2______________________,
  //   _____________________DVORAK_L3______________________,XXXXXXX,KC_LALT,  T_CPAP,XXXXXXX,_____________________DVORAK_R3______________________,
  //                              _____________MOD_LEFT_____________,T_LBRC,  T_RBRC,________MOD_RIGHT________,KC_MUTE
  // ),

  // Stage 1: COLEMAK commented out — QWERTY only base layer
  // [_COLEMAK] = LAYOUT_wrapper(
  //   _____________________COLEMAK_L1_____________________, _____________________COLEMAK_R1_____________________,
  //   _____________________COLEMAK_L2_____________________, _____________________COLEMAK_R2_____________________,
  //   _____________________COLEMAK_L3_____________________,XXXXXXX,KC_LALT,  T_CPAP,XXXXXXX,_____________________COLEMAK_R3_____________________,
  //                              _____________MOD_LEFT_____________,T_LBRC,  T_RBRC,________MOD_RIGHT________,KC_MUTE
  // ),

  [_LOWER] = LAYOUT_wrapper(
//  ,------—————————-------------------------------------.                                ,--------—————————-----------------------------------.
     _____________________LOWER_L1_______________________,                                 _____________________LOWER_R1_______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----|                                |------—+——------+——------+——------+——------+--------|
     _____________________LOWER_L2_______________________,                                 _____________________LOWER_R2_______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----+———-----------.  ,——————————————+------—+——------+——------+——------+——------+--------|
     _____________________LOWER_L3_______________________,_______,_______,  _______,_______,_____________________LOWER_R3_______________________,
//  `--------------------------+--------+--------+-------+-------+------|  |------+-------+-------+--------+--------+--------+--------+--------'
                                _______,_______,_______,_______,_______,    _______,_______,_______,_______,_______
//                             `----------------------------------------'  `----------------------------------------'
  ),

  [_RAISE] = LAYOUT_wrapper(
//  ,------—————————-------------------------------------.                                ,--------—————————-----------------------------------.
     _____________________NUM_LEFT_______________________,                                 _____________________NUM_RIGHT______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----|                                |------—+——------+——------+——------+——------+--------|
     _____________________SYM_LEFT_______________________,                                 _____________________SYM_RIGHT______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----+———-----------.  ,——————————————+------—+——------+——------+——------+——------+--------|
     _____________________FUNC_LEFT______________________,_______,_______,  K_CPRF,_______,_____________________FUNC_RIGHT_____________________,
//  `--------------------------+--------+--------+-------+-------+------|  |------+-------+-------+--------+--------+--------+--------+--------'
                                _______,_______,_______,_______,_______,    _______,_______,_______,_______,_______
//                             `----------------------------------------'  `----------------------------------------'
  ),

  [_ADJUST] = LAYOUT_wrapper(
//  ,------—————————-------------------------------------.                                ,--------—————————-----------------------------------.
     _____________________ADJUST_L1______________________,                                 _____________________ADJUST_R1______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----|                                |------—+——------+——------+——------+——------+--------|
     _____________________ADJUST_L2______________________,                                 _____________________ADJUST_R2______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----+———-----------.  ,——————————————+------—+——------+——------+——------+——------+--------|
     _____________________ADJUST_L3______________________,_______,_______,  _______,_______,_____________________ADJUST_R3______________________,
//  `--------------------------+--------+--------+-------+-------+------|  |------+-------+-------+--------+--------+--------+--------+--------'
                                _______,_______,_______,_______,_______,    _______,_______,_______,_______,_______
//                             `----------------------------------------'  `----------------------------------------'
  ),

  [_NUMPAD] = LAYOUT_wrapper(
//  ,------—————————-------------------------------------.                                ,--------—————————-----------------------------------.
      _______, _______, _______, _______, _______,_______,                                 _____________________NUMPAD_1_______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----|                                |------—+——------+——------+——------+——------+--------|
      _______, _______, _______, _______, _______,_______,                                 _____________________NUMPAD_2_______________________,
//  |--------+-----——-+——------+-——-----+——------+——-----+———-----------.  ,——————————————+------—+——------+——------+——------+——------+--------|
      _______, _______, _______, _______,_______,_______,_______,_______,  _______,_______,_____________________NUMPAD_3_______________________,
//  `--------------------------+--------+--------+-------+-------+------|  |------+-------+-------+--------+--------+--------+--------+--------'
                                 _______,_______,_______,_______,_______,    _______,_______,_______,_______,_______
//                             `----------------------------------------'  `----------------------------------------'
  ),

/*
  [_TEMPLATE] = LAYOUT_wrapper(
//  ,------—————————-------------------------------------.                                ,--------—————————-----------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  |--------+-----——-+——------+-——-----+——------+——-----|                                |------—+——------+——------+——------+——------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,                                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  |--------+-----——-+——------+-——-----+——------+——-----+———-----------.  ,——————————————+------—+——------+——------+——------+——------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,  XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//  `--------------------------+--------+--------+-------+-------+------|  |------+-------+-------+--------+--------+--------+--------+--------'
                                 XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,  XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX, XXXXXXX
//                             `----------------------------------------'  `----------------------------------------'
  ),
*/
};

// Combo definitions (callbacks implemented in users/ninjonas/combos.c)
#ifdef COMBO_ENABLE
enum combo_events {
  EQ_QUIT,
  RW_CLOSE,
  QT_TAB,
  ZC_COPY,
  XV_PASTE
};
const uint16_t PROGMEM quit_combo[]  = {KC_E, KC_Q, COMBO_END};
const uint16_t PROGMEM close_combo[] = {KC_R, KC_W, COMBO_END};
const uint16_t PROGMEM tab_combo[]   = {KC_Q, KC_T, COMBO_END};
const uint16_t PROGMEM copy_combo[]  = {KC_Z, KC_C, COMBO_END};
const uint16_t PROGMEM paste_combo[] = {KC_X, KC_V, COMBO_END};
combo_t key_combos[] = {
  [EQ_QUIT]  = COMBO_ACTION(quit_combo),
  [RW_CLOSE] = COMBO_ACTION(close_combo),
  [QT_TAB]   = COMBO_ACTION(tab_combo),
  [ZC_COPY]  = COMBO_ACTION(copy_combo),
  [XV_PASTE] = COMBO_ACTION(paste_combo),
};
#endif

// Tap dance definitions (callbacks implemented in users/ninjonas/tap_dances.c)
#ifdef TAP_DANCE_ENABLE
extern void copy_paste_app_finished(tap_dance_state_t *state, void *user_data);
extern void copy_paste_app_reset(tap_dance_state_t *state, void *user_data);
extern void y_numpad_finished(tap_dance_state_t *state, void *user_data);
extern void y_numpad_reset(tap_dance_state_t *state, void *user_data);
tap_dance_action_t tap_dance_actions[] = {
  [TD_ESC_CAPS]       = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
  [TD_LBRC_BACK]      = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, LGUI(KC_LBRC)),
  [TD_RBRC_FWD]       = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, LGUI(KC_RBRC)),
  [TD_TAB_CTRLTAB]    = ACTION_TAP_DANCE_DOUBLE(KC_TAB, LCTL(KC_TAB)),
  [TD_GRV_CTRLGRV]    = ACTION_TAP_DANCE_DOUBLE(KC_GRV, LGUI(KC_GRV)),
  [TD_GUI_GUISPC]     = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LGUI(KC_SPC)),
  [TD_COPY_PASTE_APP] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, copy_paste_app_finished, copy_paste_app_reset),
  [TD_Y_NUMPAD]       = ACTION_TAP_DANCE_FN_ADVANCED(NULL, y_numpad_finished, y_numpad_reset),
};
#endif

// Stage 1: Encoder map (replaces encoder_update_user callback)
// ENCODER_MAP_ENABLE = yes in rules.mk
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_QWERTY]  = { ENCODER_CCW_CW(KC_BRID, KC_BRIU),   ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_LOWER]   = { ENCODER_CCW_CW(SGUI(KC_TAB), LGUI(KC_TAB)), ENCODER_CCW_CW(KC_UP, KC_DOWN) },
    [_RAISE]   = { ENCODER_CCW_CW(KC_PGUP, KC_PGDN),   ENCODER_CCW_CW(LCTL(KC_TAB), LCTL(LSFT(KC_TAB))) },
    [_ADJUST]  = { ENCODER_CCW_CW(UG_HUEU, UG_HUED),   ENCODER_CCW_CW(UG_VALU, UG_VALD) },
    [_NUMPAD]  = { ENCODER_CCW_CW(_______, _______),   ENCODER_CCW_CW(_______, _______) },
};
#endif