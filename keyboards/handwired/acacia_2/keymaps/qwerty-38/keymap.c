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
  _ALPHA_MAC,
  _NAVI,
  _FUNC,
  _NAVI_MAC,
  _FUNC_MAC,
  _SYM_NUM
};

#define NOMAC DF(_ALPHA)
#define MAC DF(_ALPHA_MAC)
#define LCK_ALP TO(_ALPHA)
#define LCK_NAV TO(_NAVI)
#define TT_NAV TT(_NAVI)
#define LCK_ALPM TO(_ALPHA_MAC)
#define LCK_NAVM TO(_NAVI_MAC)
#define TT_NAVM TT(_NAVI_MAC)
#define MO_SYM MO(_SYM_NUM)
#define OSM_LSFT OSM(MOD_LSFT)
#define SPC_FUNC LT(_FUNC, KC_SPC)
#define SPC_FUNM LT(_FUNC_MAC, KC_SPC)
#define OSM_AGR OSM(MOD_RALT)
#define Z_GUI LGUI_T(KC_Z)
#define X_ALT LALT_T(KC_X)
#define C_SYM LT(_SYM_NUM, KC_C)
#define V_CTL LCTL_T(KC_V)
#define N_CTL RCTL_T(KC_N)
#define M_SYM LT(_SYM_NUM, KC_M)
#define SCLN_SYM LT(_SYM_NUM, KC_SCLN)
#define COMM_ALT LALT_T(KC_COMM)
#define DOT_GUI RGUI_T(KC_DOT)
#define SLSH_GUI RGUI_T(KC_SLSH)
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
#define GUIZ LGUI(KC_Z)
#define GUIX LGUI(KC_X)
#define GUIC LGUI(KC_C)
#define GUIV LGUI(KC_V)
#define GUIQ LGUI(KC_Q)
#define GUIW LGUI(KC_W)
#define GUIF LGUI(KC_F)
#define GUIA LGUI(KC_A)
#define GUIS LGUI(KC_S)
#define GUID LGUI(KC_D)
#define GUIK LGUI(KC_K)
#define GUIR LGUI(KC_R)
#define GUIL LGUI(KC_L)
#define GUIE LGUI(KC_E)
#define GUIY LGUI(KC_Y)
#define GUIO LGUI(KC_O)
#define GUII LGUI(KC_I)
#define GUIT LGUI(KC_T)
#define GUIG LGUI(KC_G)
#define GUIH LGUI(KC_H)
#define GUIB LGUI(KC_B)
#define PGDN_CTL RCTL_T(KC_PGDN)
#define PGUP_SYM LT(_SYM_NUM, KC_PGUP)
#define ONE_CTL RCTL_T(KC_1)
#define TWO_SYM LT(_SYM_NUM, KC_2)
#define THRE_ALT LALT_T(KC_3)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_ALPHA] = LAYOUT(
              KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
    KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_B,     KC_ENT,
              Z_GUI,    X_ALT,    C_SYM,    V_CTL,                         N_CTL,    M_SYM,    COMM_ALT, DOT_GUI,
                        KC_MNXT,  OSM_AGR,  OSM_LSFT, TT_NAV,    KC_ESC,   SPC_FUNC, KC_BSPC,  KC_MPLY
  ),
  [_ALPHA_MAC] = LAYOUT(
              KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
    KC_TAB,   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_J,     KC_K,     KC_L,     KC_B,     KC_ENT,
              Z_GUI,    X_ALT,    C_SYM,    V_CTL,                         N_CTL,    M_SYM,    COMM_ALT, DOT_GUI,
                        KC_MNXT,  OSM_AGR,  OSM_LSFT, TT_NAVM,   KC_ESC,   SPC_FUNM, KC_BSPC,  KC_MPLY
  ),
  [_NAVI] = LAYOUT(
              MAC,      XXXXXXX,  KC_ACL0,  KC_ACL1,  KC_BTN1,   KC_HOME,  KC_WH_D,  KC_WH_U,  XXXXXXX,  XXXXXXX,
    _______,  CTLZ,     CTLX,     CTLC,     CTLV,     KC_BTN2,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_END,   _______,
              KC_LGUI,  KC_LALT,  MO_SYM,   KC_LCTL,                       PGDN_CTL, PGUP_SYM, KC_LALT,  KC_RGUI,
                        _______,  LCK_ALP,  _______,  _______,   _______,  _______,  _______,  _______
  ),
  [_FUNC] = LAYOUT(
              CTLQ,     CTLW,     CTLE,     CTLR,     CTLT,      CTLY,     KC_F7,    KC_F8,    KC_F9,    KC_F11,
    _______,  CTLA,     CTLS,     CTLD,     CTLF,     CTLG,      CTLH,     KC_F4,    KC_F5,    KC_F6,    KC_F12,   _______,
              KC_LGUI,  KC_LALT,  CTLK,     KC_LCTL,                       KC_F1,    KC_F2,    KC_F3,    CTLB,
                        KC_MPRV,  CTLO,     _______,  CTLI,      KC_PWR,   _______,  KC_F10,   KC_MNXT
  ),
  [_NAVI_MAC] = LAYOUT(
              NOMAC,    XXXXXXX,  KC_ACL0,  KC_ACL1,  KC_BTN1,   KC_HOME,  KC_WH_D,  KC_WH_U,  XXXXXXX,  XXXXXXX,
    _______,  GUIZ,     GUIX,     GUIC,     GUIV,     KC_BTN2,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_END,   _______,
              KC_LGUI,  KC_LALT,  MO_SYM,   KC_LCTL,                       PGDN_CTL, PGUP_SYM, KC_LALT,  KC_RGUI,
                        _______,  LCK_ALPM, _______,  _______,   _______,  _______,  _______,  _______
  ),
  [_FUNC_MAC] = LAYOUT(
              GUIQ,     GUIW,     GUIE,     GUIR,     GUIT,      GUIY,     KC_F7,    KC_F8,    KC_F9,    KC_F11,
    _______,  GUIA,     GUIS,     GUID,     GUIF,     GUIG,      GUIH,     KC_F4,    KC_F5,    KC_F6,    KC_F12,   _______,
              KC_LGUI,  KC_LALT,  GUIK,     KC_LCTL,                       KC_F1,    KC_F2,    KC_F3,    GUIB,
                        KC_MPRV,  GUII,     _______,  GUIO,      KC_PWR,   _______,  KC_F10,   KC_MNXT
  ),
  [_SYM_NUM] = LAYOUT(
              XXXXXXX,  KC_LCBR,  KC_DQUO,  KC_RCBR,  XXXXXXX,   KC_BSLS,  KC_7,     KC_8,     KC_9,     KC_GRV,
    KC_SLSH,  KC_COLN,  KC_LBRC,  KC_QUOT,  KC_RBRC,  XXXXXXX,   KC_DOT,   KC_4,     KC_5,     KC_6,     KC_MINS,  KC_EQL,
              KC_LGUI,  KC_LALT,  SCLN_SYM, KC_LCTL,                       ONE_CTL,  TWO_SYM,  THRE_ALT, SLSH_GUI,
                        KC_VOLD,  KC_LT,    _______,  KC_GT,     KC_COMM,  _______,  KC_0,     KC_VOLU
  )
};


const rgblight_segment_t PROGMEM base_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_OFF});
const rgblight_segment_t PROGMEM navi_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_BLUE});
const rgblight_segment_t PROGMEM symb_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_ORANGE});
const rgblight_segment_t PROGMEM func_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_CYAN});
const rgblight_segment_t PROGMEM caps_layer[] = RGBLIGHT_LAYER_SEGMENTS({0, 6, HSV_PURPLE});
const rgblight_segment_t * const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
  base_layer, navi_layer, symb_layer, func_layer, caps_layer
);

void keyboard_post_init_user(void) {
  rgblight_layers = rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(0, layer_state_cmp(state, _ALPHA) || layer_state_cmp(state, _ALPHA_MAC));
  return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
  rgblight_set_layer_state(1, layer_state_cmp(state, _NAVI) || layer_state_cmp(state, _NAVI_MAC));
  rgblight_set_layer_state(2, layer_state_cmp(state, _SYM_NUM));
  rgblight_set_layer_state(3, layer_state_cmp(state, _FUNC) || layer_state_cmp(state, _FUNC_MAC));
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
