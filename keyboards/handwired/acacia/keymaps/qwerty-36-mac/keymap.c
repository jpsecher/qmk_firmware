/* Copyright 2024 Jens Peter Secher <jpsecher@gmail.com>
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

enum layer_names {
  _ALP_MAC,
  _NAV_MAC,
  _NUM_MAC,
  _SYMBOLS,
  _ALP_OVL
};

#define LCK_ALPM TO(_ALP_MAC)
#define OSL_ALPM OSL(_ALP_OVL)
#define LCK_NAVM TO(_NAV_MAC)
#define TT_NAVM TT(_NAV_MAC)
#define MO_NAVM MO(_NAV_MAC)
#define MO_SYM MO(_SYMBOLS)
#define MO_ALPM MO(_ALP_MAC)
#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_RSFT OSM(MOD_RSFT)
#define OSL_FUNM OSL(_NUM_MAC)
#define SPC_FUNM LT(_NUM_MAC, KC_SPC)
#define ESC_FUNM LT(_NUM_MAC, KC_ESC)
#define BCK_NUM LT(_NUM_MAC, KC_BSPC)
#define ESC_NAV LT(_NAV_MAC, KC_ESC)
#define ESC_AGR RALT_T(KC_ESC)
#define OSM_AGR OSM(MOD_RALT)
#define Z_GUI LGUI_T(KC_Z)
#define B_GUI RGUI_T(KC_B)
#define X_ALT LALT_T(KC_X)

#define V_NUM LT(_NUM_MAC, KC_V)
#define N_NUM LT(_NUM_MAC, KC_N)
#define DOT_SYM LT(_SYMBOLS, KC_DOT)
#define F_SYM LT(_SYMBOLS, KC_F)
#define GUIZ LGUI(KC_Z)
#define GUIX LGUI(KC_X)
#define GUIC LGUI(KC_C)
#define GUIV LGUI(KC_V)
#define GUIA LGUI(KC_A)
#define GUIY LGUI(KC_Y)
#define MINS_AGR RALT_T(KC_MINS)
#define SIX_ALT LALT_T(KC_6)
#define FIVE_GUI RGUI_T(KC_5)
#define FOUR_CTL RCTL_T(KC_4)
#define AGRO RALT(KC_O)
#define AGRQUOT RALT(KC_QUOT)
#define AGRA RALT(KC_A)
#define CTLE RCTL(KC_E)
#define CTLA RCTL(KC_A)
#define SPC_SYM LT(_SYMBOLS, KC_SPC)
#define B_AGR RALT_T(KC_B)
#define L_ALT LALT_T(KC_L)
#define F_CTL RCTL_T(KC_F)
#define K_GUI RGUI_T(KC_K)
#define J_CTL LCTL_T(KC_J)
#define D_GUI LGUI_T(KC_D)
#define S_ALT LALT_T(KC_S)
#define A_AGR RALT_T(KC_A)
#define F5_AGR RALT_T(KC_F5)
#define F6_ALT LALT_T(KC_F6)
#define F7_GUI LGUI_T(KC_F7)
#define F8_CTL LCTL_T(KC_F8)
#define OSM_HYPR OSM(MOD_HYPR)
#define OSM_MEH OSM(MOD_MEH)
#define OSL_ALP OSL(_ALP_OVL)
#define OSL_SYM OSL(_SYMBOLS)
#define TAB_SFT LSFT_T(KC_TAB)

#define OSM_ALT OSM(MOD_LALT)
#define OSM_GUI OSM(MOD_LGUI)
#define OSM_CTL OSM(MOD_LCTL)


enum {
  // Save buffer in editor
  M_SAVE = SAFE_RANGE,
  // Quit editor
  M_QUIT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALP_MAC] = LAYOUT(
    TAB_SFT,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_ENT,
    XXXXXXX,  A_AGR,    S_ALT,    D_GUI,    F_CTL,    KC_G,      KC_H,     J_CTL,    K_GUI,    L_ALT,    B_AGR,    XXXXXXX,
              KC_Z,     KC_X,     KC_C,     V_NUM,                         N_NUM,    KC_M,     KC_COMM,  KC_DOT,
              KC_MPLY,  ESC_AGR,  MO_NAVM,  OSM_LSFT, XXXXXXX,   XXXXXXX,  OSL_SYM,  KC_SPC,   KC_BSPC,  KC_MNXT,  DB_TOGG
  ),
  [_NAV_MAC] = LAYOUT(
    _______,  OSL_ALP,  GUIY,     KC_WH_D,  KC_WH_U,  KC_BTN1,   CTLA,     KC_PGDN,  KC_PGUP,  CTLE,     QK_LLCK,  _______,
    _______,  GUIA,     OSM_ALT,  OSM_GUI,  OSM_CTL,  KC_BTN2,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  M_SAVE,   _______,
              GUIZ,     GUIX,     GUIC,     GUIV,                          AGRQUOT,  AGRO,     AGRA,     M_QUIT,
              KC_MPRV,  _______,  LCK_ALPM, _______,  _______,   _______,  _______,  _______,  _______,  KC_MNXT,  DB_TOGG
  ),
  [_NUM_MAC] = LAYOUT(
    _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_EQL,    KC_COLN,  KC_7,     KC_8,     KC_9,     QK_LLCK,  _______,
    _______,  F5_AGR,   F6_ALT,   F7_GUI,   F8_CTL,   KC_MINS,   KC_0,     FOUR_CTL, FIVE_GUI, SIX_ALT,  KC_PLUS,  _______,
              KC_F9,    KC_F10,   KC_F11,   KC_F12,                        KC_1,     KC_2,     KC_3,     KC_DOT,
              KC_EJCT,  KC_UNDS,  LCK_ALPM, KC_SLSH,  _______,   _______,  KC_COMM,  _______,  _______,  KC_PWR,   DB_TOGG
  ),
  [_SYMBOLS] = LAYOUT(
    KC_TILD,  KC_SPC,   KC_LCBR,  KC_QUOT,  KC_RCBR,  KC_EQL,    KC_COLN,  KC_AMPR,  KC_ASTR,  KC_QUES,  QK_LLCK,  _______,
    _______,  KC_SCLN,  KC_LPRN,  KC_DQUO,  KC_RPRN,  KC_MINS,   KC_0,     KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,  _______,
              KC_BSLS,  KC_LBRC,  KC_GRV,   KC_RBRC,                       KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,
              KC_VOLD,  KC_UNDS,  LCK_ALPM, KC_SLSH,  _______,   _______,  KC_COMM,  _______,  _______,  KC_VOLU,  DB_TOGG
  ),
  [_ALP_OVL] = LAYOUT(
    _______,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     _______,
    _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_B,     _______,
              KC_Z,     KC_X,     KC_C,     KC_V,                          KC_N,     KC_M,     KC_COMM,  KC_DOT,
              _______,  _______,  LCK_ALPM, _______,  _______,   _______,  _______,  _______,  _______,  _______,  DB_TOGG
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Store the current modifier state in the variable for later reference.
  static uint8_t mod_state;
  mod_state = get_mods();
  switch (keycode) {
    case M_SAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESC) ":w");
        return false;
      }
      break;
    case M_QUIT:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESC) ":q");
        return false;
      }
      break;
    case KC_BSPC:
      {
        // Keep track of whether the delete key status is registered.
        static bool delkey_registered;
        if (record->event.pressed) {
          if (mod_state & MOD_MASK_SHIFT) {
            // Make sure that Shift is not applied to the KC_DEL keycode.
            del_mods(MOD_MASK_SHIFT);
            register_code(KC_DEL);
            // Update the boolean variable to reflect the status of KC_DEL
            delkey_registered = true;
            // Reapplying modifier state so that the held shift key(s)
            // still work even after having tapped the Backspace/Delete key.
            set_mods(mod_state);
            return false;
          }
        } else { // on release of KC_BSPC
          // In case KC_DEL is still being sent even after the release of KC_BSPC
          if (delkey_registered) {
            unregister_code(KC_DEL);
            delkey_registered = false;
            return false;
          }
        }
      }
      break;
  }
  return true;
}
