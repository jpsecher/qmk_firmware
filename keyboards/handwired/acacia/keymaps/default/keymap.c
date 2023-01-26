/* Copyright 2022 Jens Peter Secher <jpsecher@gmail.com>
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
#include "features/layer_lock.h"

enum custom_keycodes {
  LAYERLCK = SAFE_RANGE,
};

// Thumbs
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RSFT OSM(MOD_RSFT)
#define TAB_SYM LT(_SYM_NUM, KC_TAB)
#define SPC_NAV LT(_NAVI_FN, KC_SPC)

#define SPC_CTL LCTL_T(KC_SPC)
#define DEL_GUI LGUI_T(KC_DEL)
#define DEL_CTL LCTL_T(KC_DEL)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_CTL OSM(MOD_LCTL)
#define ESC_CTL LCTL_T(KC_ESC)
#define ESC_AGR RALT_T(KC_ESC)
#define BS_GUI LGUI_T(KC_BSPC)
#define BS_CTL LCTL_T(KC_BSPC)
#define BS_NAV LT(_NAVI_FN, KC_BSPC)
#define SPC_SYM LT(_SYM_NUM, KC_SPC)
#define BS_SYM LT(_SYM_NUM, KC_BSPC)
#define SPC_GUI LGUI_T(KC_SPC)
#define NUL_GUI LGUI_T(KC_0)
#define OSM_AGR OSM(MOD_RALT)
#define TAB_ALT LALT_T(KC_TAB)
#define ENT_CTL LCTL_T(KC_ENT)

// Alpha lower home row mods
#define Z_GUI LGUI_T(KC_Z)
#define X_ALT LALT_T(KC_X)
#define C_AGR RALT_T(KC_C)
#define V_CTL LCTL_T(KC_V)
#define M_CTL RCTL_T(KC_M)
#define COMM_AGR RALT_T(KC_COMM)
#define DOT_ALT LALT_T(KC_DOT)
#define SLSH_GUI RGUI_T(KC_SLSH)

// Symbols lower home row mods
#define GRV_GUI LGUI_T(KC_GRV)
#define BSLS_ALT LALT_T(KC_BSLS)
#define LBRC_AGR RALT_T(KC_LBRC)
#define RBRC_CTL LCTL_T(KC_RBRC)
#define ONE_CTL RCTL_T(KC_1)
#define TWO_AGR RALT_T(KC_2)
#define THRE_ALT LALT_T(KC_3)
#define EQL_GUI RGUI_T(KC_EQL)

enum layer_names {
  _QWERTY,
  _NAVI_FN,
  _SYM_NUM
};

#define LOCK_NAV TO(_NAVI_FN)
#define LOCK_SYM TO(_SYM_NUM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_K,     KC_Q,     KC_W,     KC_D,     KC_R,     KC_G,       KC_H,     KC_U,     KC_I,     KC_O,     KC_P,     KC_QUOT,
    QK_GESC,  KC_A,     KC_S,     KC_T,     KC_F,     KC_B,       KC_J,     KC_N,     KC_E,     KC_L,     KC_Y,     KC_ENT,
              Z_GUI,    X_ALT,    C_AGR,    V_CTL,                          M_CTL,    COMM_AGR, DOT_ALT,  SLSH_GUI,
              KC_MNXT,  KC_DEL,   TAB_SYM,  OSM_LSFT, QK_GESC,    SC_SENT,  OSM_RSFT, SPC_NAV,  KC_BSPC,  KC_MPLY,  DB_TOGG
  ),
  [_NAVI_FN] = LAYOUT(
    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,      KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
    LAYERLCK, KC_BTN2,  KC_HOME,  KC_PGUP,  KC_END,   KC_BTN1,    KC_WH_D,  KC_LEFT,  KC_UP,    KC_RGHT,  KC_WH_U,  _______,
              KC_LGUI,  KC_LALT,  KC_PGDN,  KC_LCTL,                        KC_RCTL,  KC_DOWN,  KC_LALT,  KC_RGUI,
              KC_MPRV,  _______,  _______,  _______,  _______,    _______,  _______,  _______,  _______,  KC_PWR,   EE_CLR
  ),
  [_SYM_NUM] = LAYOUT(
    KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,    KC_AMPR,  KC_7,     KC_8,     KC_9,     KC_ASTR,  KC_SCLN,
    LAYERLCK, KC_LCBR,  KC_RCBR,  KC_LPRN,  KC_RPRN,  KC_COLN,    KC_UNDS,  KC_4,     KC_5,     KC_6,     KC_MINS,  KC_PLUS,
              GRV_GUI,  BSLS_ALT, LBRC_AGR, RBRC_CTL,                       ONE_CTL,  TWO_AGR,  THRE_ALT, EQL_GUI,
              KC_VOLD,  _______,  _______,  _______,  _______,    _______,  _______,  KC_0,     _______,  KC_VOLU,  QK_BOOT
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_layer_lock(keycode, record, LAYERLCK)) {
    return false;
  }
  return true;
}

void matrix_scan_user(void) {
  layer_lock_task();
}
