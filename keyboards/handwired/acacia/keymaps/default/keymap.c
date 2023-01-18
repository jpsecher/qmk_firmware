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

#define SPC_CTL LCTL_T(KC_SPC)
#define DEL_GUI LGUI_T(KC_DEL)
#define A_GUI LGUI_T(KC_A)
#define SCLN_GUI LGUI_T(KC_SCLN)
#define DEL_CTL LCTL_T(KC_DEL)
#define F_CTL LCTL_T(KC_F)
#define J_CTL LCTL_T(KC_J)
#define OSM_SFT OSM(MOD_LSFT)
#define OSM_ALT OSM(MOD_LALT)
#define OSM_CTL OSM(MOD_LCTL)
#define ESC_CTL LCTL_T(KC_ESC)
#define ESC_AGR RALT_T(KC_ESC)
#define S_AGR RALT_T(KC_S)
#define L_AGR RALT_T(KC_L)
#define T_ALT LALT_T(KC_T)
#define E_ALT LALT_T(KC_E)
#define BS_GUI LGUI_T(KC_BSPC)
#define BS_CTL LCTL_T(KC_BSPC)
#define BS_SYM LT(_SYM_NUM, KC_BSPC)
#define BS_NAV LT(_NAVI_FN, KC_BSPC)
#define SPC_NAV LT(_NAVI_FN, KC_SPC)
#define SPC_SYM LT(_SYM_NUM, KC_SPC)
#define SPC_GUI LGUI_T(KC_SPC)
#define NUL_GUI LGUI_T(KC_0)
#define OSM_AGR OSM(MOD_RALT)
#define TAB_ALT LALT_T(KC_TAB)
#define ENT_CTL LCTL_T(KC_ENT)

enum layer_names {
    _QWERTY,
    _NAVI_FN,
    _SYM_NUM
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
    KC_K,    KC_Q,    KC_W,    KC_D,    KC_R,    KC_G,       KC_H,    KC_U,    KC_I,    KC_O,    KC_P,    KC_Y,
    KC_TAB,  KC_A,    KC_S,    KC_T,    KC_F,    KC_B,       KC_N,    KC_J,    KC_E,    KC_L,    KC_SCLN, KC_ENT,
             KC_Z,    KC_X,    KC_C,    KC_V,                         KC_M,    KC_COMM, KC_DOT,  KC_QUOT,
             KC_MNXT, DEL_GUI, BS_SYM,  OSM_SFT, OSM_ALT,    OSM_ALT, OSM_CTL, SPC_NAV, ESC_AGR, KC_MPLY, DB_TOGG
  ),
  [_NAVI_FN] = LAYOUT(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_TAB,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_TILD,    KC_GRV,  KC_LEFT, KC_UP,   KC_RGHT, KC_WBAK, KC_ENT,
             KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,                      KC_WH_D, KC_DOWN, KC_WH_U, KC_WREF,
             KC_MPRV, _______, BS_CTL,  _______, _______,    _______, _______, _______, _______, KC_PWR,  EE_CLR
  ),
  [_SYM_NUM] = LAYOUT(
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC,    KC_BTN2, KC_7,    KC_8,    KC_9,    KC_UNDS, KC_ASTR,
    KC_QUES, KC_SLSH, KC_LBRC, KC_LCBR, KC_LPRN, KC_PIPE,    KC_AMPR, KC_4,    KC_5,    KC_6,    KC_MINS, KC_EQL,
             KC_BSLS, KC_RBRC, KC_RCBR, KC_RPRN,                      KC_1,    KC_2,    KC_3,    KC_PLUS,
             KC_VOLD, _______, _______, _______, _______,    KC_BTN1, _______, NUL_GUI, _______, KC_VOLU, QK_BOOT
  )
};
