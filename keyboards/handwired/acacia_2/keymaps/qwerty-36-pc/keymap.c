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
  _ALPHA,
  _NAVI,
  _FUNC,
  _SYM_NUM,
  _ALPHA_OL,
};

#define LCK_ALP TO(_ALPHA)
#define OSL_ALP OSL(_ALPHA_OL)
#define LCK_NAV TO(_NAVI)
#define TT_NAV TT(_NAVI)
#define MO_SYM MO(_SYM_NUM)
#define OSM_LSFT OSM(MOD_LSFT)
#define SPC_FUNC LT(_FUNC, KC_SPC)
#define OSM_AGR OSM(MOD_RALT)
#define Z_GUI LGUI_T(KC_Z)
#define B_GUI RGUI_T(KC_B)
#define X_ALT LALT_T(KC_X)
#define LBRC_ALT LALT_T(KC_LBRC)
#define C_SYM LT(_SYM_NUM, KC_C)
#define V_CTL LCTL_T(KC_V)
#define RBRC_CTL LCTL_T(KC_RBRC)
#define N_CTL RCTL_T(KC_N)
#define M_SYM LT(_SYM_NUM, KC_M)
#define SCLN_SYM LT(_SYM_NUM, KC_SCLN)
#define COMM_ALT LALT_T(KC_COMM)
#define DOT_GUI RGUI_T(KC_DOT)
#define BSLS_GUI RGUI_T(KC_BSLS)
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
#define CTLK LCTL(KC_K)
#define CTLR LCTL(KC_R)
#define CTLL LCTL(KC_L)
#define CTLE LCTL(KC_E)
#define CTLY LCTL(KC_Y)
#define CTLO LCTL(KC_O)
#define CTLI LCTL(KC_I)
#define CTLT LCTL(KC_T)
#define CTLG LCTL(KC_G)
#define CTLH LCTL(KC_H)
#define CTLB LCTL(KC_B)
#define CTLP LCTL(KC_P)
#define CTLU LCTL(KC_U)
#define PGDN_CTL RCTL_T(KC_PGDN)
#define PGUP_SYM LT(_SYM_NUM, KC_PGUP)
#define ONE_CTL RCTL_T(KC_1)
#define TWO_SYM LT(_SYM_NUM, KC_2)
#define THRE_ALT LALT_T(KC_3)
#define F1_CTL RCTL_T(KC_F1)
#define F3_ALT LALT_T(KC_F3)
#define F11_GUI RGUI_T(KC_F11)
#define ESC_AGR RALT_T(KC_ESC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPHA] = LAYOUT(
              XXXXXXX,  KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     XXXXXXX,
    KC_Q,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_P,     KC_ENT,
              Z_GUI,    X_ALT,    C_SYM,    V_CTL,                         N_CTL,    M_SYM,    COMM_ALT, B_GUI,
                        KC_MNXT,  ESC_AGR,  OSM_LSFT, TT_NAV,    KC_TAB,   SPC_FUNC, KC_BSPC,  KC_MPLY
  ),
  [_NAVI] = LAYOUT(
              XXXXXXX,  KC_BTN3,  KC_WH_U,  KC_WH_D,  KC_BTN2,   KC_HOME,  KC_WH_D,  KC_WH_U,  QK_REP,  XXXXXXX,
    CTLU,     CTLZ,     CTLX,     CTLC,     CTLV,     KC_BTN1,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_END,   _______,
              KC_LGUI,  KC_LALT,  MO_SYM,   KC_LCTL,                       PGDN_CTL, PGUP_SYM, KC_LALT,  KC_RGUI,
                        _______,  LCK_ALP,  _______,  OSL_ALP,   _______,  _______,  _______,  _______
  ),
  [_ALPHA_OL] = LAYOUT(
              XXXXXXX,  KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     XXXXXXX,
    KC_Q,     KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_P,     _______,
              KC_Z,     KC_X,     KC_C,     KC_V,                          KC_N,     KC_M,     KC_COMM,  KC_B,
                        KC_MNXT,  KC_ESC,   _______,  XXXXXXX,   _______,  KC_SPC,   _______,  _______
  ),
  [_FUNC] = LAYOUT(
              XXXXXXX,  CTLW,     CTLE,     CTLR,     CTLT,      CTLY,     KC_F7,    KC_F8,    KC_F9,    XXXXXXX,
    CTLQ,     CTLA,     CTLS,     CTLD,     CTLF,     CTLG,      CTLH,     KC_F4,    KC_F5,    KC_F6,    KC_F12,   _______,
              KC_LGUI,  KC_LALT,  CTLK,     KC_LCTL,                       F1_CTL,   KC_F2,    F3_ALT,   F11_GUI,
                        KC_MPRV,  CTLO,     _______,  CTLI,      KC_PWR,   _______,  KC_F10,   KC_MNXT
  ),
  [_SYM_NUM] = LAYOUT(
              XXXXXXX,  KC_LCBR,  KC_DQUO,  KC_RCBR,  KC_TILD,   KC_COMM,  KC_7,     KC_8,     KC_9,     XXXXXXX,
    KC_GRV,   KC_COLN,  KC_LPRN,  KC_QUOT,  KC_RPRN,  KC_SCLN,   KC_DOT,   KC_4,     KC_5,     KC_6,     KC_MINS,  KC_EQL,
              KC_LGUI,  LBRC_ALT, XXXXXXX,  RBRC_CTL,                      ONE_CTL,  TWO_SYM,  THRE_ALT, BSLS_GUI,
                        KC_VOLD,  KC_LT,    _______,  KC_GT,     KC_SLSH,  KC_0,     KC_BSPC,  KC_VOLU
  )
};


const rgblight_segment_t PROGMEM base_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_OFF});
const rgblight_segment_t PROGMEM navi_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_BLUE});
const rgblight_segment_t PROGMEM symb_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_OFF});
const rgblight_segment_t PROGMEM func_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_OFF});
const rgblight_segment_t PROGMEM caps_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_CYAN});
const rgblight_segment_t * const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  base_layer, navi_layer, symb_layer, func_layer, caps_layer
);

void keyboard_post_init_user(void) {
  rgblight_layers = rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(0, layer_state_cmp(state, _ALPHA));
  return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(1, layer_state_cmp(state, _NAVI));
  rgblight_set_layer_state(2, layer_state_cmp(state, _SYM_NUM));
  rgblight_set_layer_state(3, layer_state_cmp(state, _FUNC));
  return state;
}

void caps_word_set_user(bool active) {
  rgblight_set_layer_state(4, active);
}

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
