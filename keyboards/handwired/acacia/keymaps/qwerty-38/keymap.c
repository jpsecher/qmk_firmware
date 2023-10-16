/* Copyright 2023 Jens Peter Secher <jpsecher@gmail.com>
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
  _ALPHA,
  _NAVI,
  _SYM_NUM,
  _FUNC
};

#define MO_SYM MO(_SYM_NUM)
#define OSM_LSFT OSM(MOD_LSFT)
#define SPC_FUNC LT(_FUNC, KC_SPC)
#define ESC_NAV LT(_NAVI, KC_ESC)
#define LOCK_ALP TO(_ALPHA)
#define LOCK_NAV TO(_NAVI)
#define TT_NAV TT(_NAVI)
#define NUL_GUI LGUI_T(KC_0)
#define OSM_AGR OSM(MOD_RALT)
#define Z_GUI LGUI_T(KC_Z)
#define X_ALT LALT_T(KC_X)
#define C_SYM LT(_SYM_NUM, KC_C)
#define V_CTL LCTL_T(KC_V)
#define G_AGR RALT_T(KC_G)
#define H_AGR RALT_T(KC_H)
#define N_CTL RCTL_T(KC_N)
#define M_CTL RCTL_T(KC_M)
#define M_SYM LT(_SYM_NUM, KC_M)
#define COMM_SYM LT(_SYM_NUM, KC_COMM)
#define COMM_ALT LALT_T(KC_COMM)
#define DOT_ALT LALT_T(KC_DOT)
#define DOT_GUI RGUI_T(KC_DOT)
#define SLSH_GUI RGUI_T(KC_SLSH)
#define B_GUI RGUI_T(KC_B)
#define CTLZ LCTL(KC_Z)
#define CTLX LCTL(KC_X)
#define CTLC LCTL(KC_C)
#define CTLV LCTL(KC_V)
#define CTLQ LCTL(KC_Q)
#define CTLW LCTL(KC_W)
#define CTLF LCTL(KC_F)
#define CTLA LCTL(KC_A)
#define CTLS LCTL(KC_S)
#define CTLD LCTL(KC_D)
#define CTLP LCTL(KC_P)
#define CTLK LCTL(KC_K)
#define CTLR LCTL(KC_R)
#define CTLL LCTL(KC_L)
#define CTLE LCTL(KC_E)
#define CTLU LCTL(KC_U)
#define CTLY LCTL(KC_Y)
#define CTLO LCTL(KC_O)
#define CTLI LCTL(KC_I)
#define CTLT LCTL(KC_T)
#define CTLG LCTL(KC_G)
#define CTLH LCTL(KC_H)
#define CTLTAB LCTL(KC_TAB)
#define ALTTAB LALT(KC_TAB)
#define GUITAB LGUI(KC_TAB)
#define CTLENT LCTL(KC_ENT)
#define CTLB LCTL(KC_B)
#define ALTO LALT(KC_O)
#define PGDN_CTL RCTL_T(KC_PGDN)
#define PGUP_SYM LT(_SYM_NUM, KC_PGUP)
#define GRV_GUI RGUI_T(KC_GRV)
#define LBRC_ALT LALT_T(KC_LBRC)
#define RBRC_CTL LCTL_T(KC_RBRC)
#define LBRC_GUI LGUI_T(KC_LBRC)
#define RBRC_ALT LALT_T(KC_RBRC)
#define LBRC_CTL LCTL_T(KC_LBRC)
#define LBRC_AGR RALT_T(KC_LBRC)
#define SCLN_CTL LCTL_T(KC_SCLN)
#define QUOT_AGR RALT_T(KC_QUOT)
#define MINS_AGR RALT_T(KC_MINS)
#define ONE_CTL RCTL_T(KC_1)
#define TWO_SYM LT(_SYM_NUM, KC_2)
#define THRE_ALT LALT_T(KC_3)
#define EQL_GUI RGUI_T(KC_EQL)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPHA] = LAYOUT(
    XXXXXXX,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,       KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     XXXXXXX,
    KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,       KC_H,     KC_J,     KC_K,     KC_L,     KC_B,     KC_ENT,
              Z_GUI,    X_ALT,    C_SYM,    V_CTL,                          N_CTL,    M_SYM,    COMM_ALT, DOT_GUI,
              KC_MNXT,  TT_NAV,   OSM_LSFT, OSM_AGR,  XXXXXXX,    XXXXXXX,  QK_GESC,  SPC_FUNC, KC_BSPC,  KC_MPLY,  DB_TOGG
  ),
  [_NAVI] = LAYOUT(
    XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_ACL0,  KC_ACL1,  KC_BTN1,    KC_HOME,  KC_WH_D,  KC_WH_U,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    _______,  CTLZ,     CTLX,     CTLC,     CTLV,     KC_BTN2,    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_END,   _______,
              KC_LGUI,  KC_LALT,  MO_SYM,   KC_LCTL,                        PGDN_CTL, PGUP_SYM, KC_LALT,  KC_LGUI,
              KC_MPRV,  LOCK_ALP, _______,  _______,  XXXXXXX,    XXXXXXX,  _______,  _______,  _______,  KC_MUTE,  EE_CLR
  ),
  [_SYM_NUM] = LAYOUT(
    XXXXXXX,  KC_TILD,  KC_LT,    KC_DQUO,  KC_GT,    XXXXXXX,    KC_BSLS,  KC_7,     KC_8,     KC_9,     KC_MINS,  XXXXXXX,
    GUITAB,   KC_GRV,   KC_LBRC,  KC_QUOT,  KC_RBRC,  KC_RALT,    KC_DOT,   KC_4,     KC_5,     KC_6,     KC_SCLN,  KC_EQL,
              KC_LGUI,  KC_LALT,  MO_SYM,   KC_LCTL,                        ONE_CTL,  TWO_SYM,  THRE_ALT, SLSH_GUI,
              KC_VOLD,  KC_LCBR,  _______,  KC_RCBR,  XXXXXXX,    XXXXXXX,  KC_COMM,  _______,  KC_0,     KC_VOLU,  QK_BOOT
  ),
  [_FUNC] = LAYOUT(
    XXXXXXX,  CTLQ,     CTLW,     CTLE,     CTLR,     CTLT,       CTLY,     KC_F7,    KC_F8,    KC_F9,    KC_F11,   XXXXXXX,
    CTLTAB,   CTLA,     CTLS,     CTLD,     CTLF,     CTLG,       CTLH,     KC_F4,    KC_F5,    KC_F6,    KC_F12,   CTLENT,
              KC_LGUI,  KC_LALT,  CTLK,     KC_LCTL,                        KC_F1,    KC_F2,    KC_F3,    CTLB,
              KC_MPRV,  CTLO,     _______,  CTLI,     XXXXXXX,    XXXXXXX,  KC_PWR,   _______,  KC_F10,   KC_MNXT,  XXXXXXX
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Store the current modifier state in the variable for later reference.
  static uint8_t mod_state;
  mod_state = get_mods();
  switch (keycode) {
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
  }
  return true;
}
