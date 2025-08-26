#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_74_255_255,
  HSV_169_255_255,
  M_SAVE,
  M_QUIT,
};

enum layer_names {
  _QWE_MAC,
  _NAV_MAC,
  _SYMBOLS,
  _NUM_MAC,
  _ALP_OVL
};

// Danish
#define AGRO RALT(KC_O)
#define AGRQUOT RALT(KC_QUOT)
#define AGRA RALT(KC_A)

// Home/End
#define CTLA RCTL(KC_A)
#define CTLE RCTL(KC_E)

// Cut/Copy/Paste
#define GUIZ LGUI(KC_Z)
#define GUIY LGUI(KC_Y)
#define GUIX LGUI(KC_X)
#define GUIC LGUI(KC_C)
#define GUIV LGUI(KC_V)
#define GUIA LGUI(KC_A)

// Layers
#define LCK_NAV TO(_NAV_MAC)
#define MO_NAV MO(_NAV_MAC)
#define TO_NAV TO(_NAV_MAC)
#define ESC_NAV LT(_NAV_MAC, KC_ESC)
#define SPC_NUM LT(_NUM_MAC, KC_SPC)
#define LCK_ALP TO(_QWE_MAC)
#define OSL_ALP OSL(_ALP_OVL)
#define OSL_NAV OSL(_NAV_MAC)
#define OSL_SYM OSL(_SYMBOLS)

#define OSM_LSFT OSM(MOD_LSFT)
#define OSM_HYPR OSM(MOD_HYPR)
#define OSM_MEH OSM(MOD_MEH)

// Homerow mods
#define P_AGR RALT_T(KC_P)
#define L_ALT LALT_T(KC_L)
#define J_CTL RCTL_T(KC_J)
#define K_GUI RGUI_T(KC_K)
#define F_CTL LCTL_T(KC_F)
#define D_GUI LGUI_T(KC_D)
#define S_ALT LALT_T(KC_S)
#define A_AGR RALT_T(KC_A)
#define F5_AGR RALT_T(KC_F5)
#define F6_ALT LALT_T(KC_F6)
#define F7_GUI LGUI_T(KC_F7)
#define F8_CTL LCTL_T(KC_F8)
#define SIX_ALT LALT_T(KC_6)
#define FIVE_GUI RGUI_T(KC_5)
#define FOUR_CTL RCTL_T(KC_4)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWE_MAC] = LAYOUT_voyager(
    KC_MNXT,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  RM_VALD,                         RM_VALU,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_MPLY,
    XXXXXXX,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                            KC_Y,     KC_U,     KC_I,     KC_O,     KC_B,     XXXXXXX,
    KC_TAB,   A_AGR,    S_ALT,    D_GUI,    F_CTL,    KC_G,                            KC_H,     J_CTL,    K_GUI,    L_ALT,    P_AGR,    KC_BSPC,
    XXXXXXX,  KC_Z,     KC_X,     KC_C,     KC_V,     XXXXXXX,                         XXXXXXX,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   XXXXXXX,
                                                      ESC_NAV,  OSM_LSFT,    OSL_SYM,  SPC_NUM
  ),
  [_NAV_MAC] = LAYOUT_voyager(
    KC_MPRV,  _______,  _______,  _______,  _______,  _______,                         _______,  _______,  _______,  _______,  _______,  _______,
    _______,  OSL_ALP,  GUIY,     KC_WH_D,  KC_WH_U,  KC_BTN1,                         CTLA,     KC_PGDN,  KC_PGUP,  CTLE,     QK_LLCK,  _______,
    _______,  GUIA,     KC_LALT,  KC_LGUI,  KC_LCTL,  KC_BTN2,                         KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, M_SAVE,   _______,
    _______,  GUIZ,     GUIX,     GUIC,     GUIV,     _______,                         _______,  AGRQUOT,  AGRO,     AGRA,     M_QUIT,   _______,
                                                      LCK_ALP,  _______,     KC_ENT,   _______
  ),
  [_SYMBOLS] = LAYOUT_voyager(
    KC_VOLD,  _______,  _______,  _______,  _______,  _______,                         _______,  _______,  _______,  _______,  _______,  KC_VOLU,
    _______,  OSM_HYPR, KC_LCBR,  KC_GRAVE, KC_RCBR,  KC_EQUAL,                        KC_COLN,  KC_AMPR,  KC_ASTR,  KC_QUES,  OSM_MEH,  _______,
    KC_TILD,  KC_SCLN,  KC_LBRC,  KC_DQUO,  KC_RBRC,  KC_MINS,                         KC_0,     KC_DLR,   KC_PERC,  KC_CIRC,  KC_PLUS,  _______,
    _______,  KC_BSLS,  KC_LPRN,  KC_QUOTE, KC_RPRN,  _______,                         _______,  KC_EXLM,  KC_AT,    KC_HASH,  KC_PIPE,  _______,
                                                      _______,  KC_SLASH,    KC_ENT,   KC_UNDS
  ),
  [_NUM_MAC] = LAYOUT_voyager(
    RGB_TOG,  _______,  _______,  _______,  _______,  RM_SPDD,                         RM_SPDU,  _______,  _______,  _______,  _______,  KC_PWR,
    _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_EQUAL,                        KC_COLN,  KC_7,     KC_8,     KC_9,     QK_LLCK,  _______,
    _______,  F5_AGR,   F6_ALT,   F7_GUI,   F8_CTL,   KC_MINS,                         KC_0,     FOUR_CTL, FIVE_GUI, SIX_ALT,  KC_PLUS,  _______,
    _______,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,                         _______,  KC_1,     KC_2,     KC_3,     KC_DOT,   _______,
                                                      LCK_ALP,  KC_SLASH,    KC_COMM,  KC_SPC
  ),
  [_ALP_OVL] = LAYOUT_voyager(
    _______,  _______,  _______,  _______,  _______,  _______,                         _______,  _______,  _______,  _______,  _______,  _______,
    _______,  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                            KC_Y,     KC_U,     KC_I,     KC_O,     KC_B,     _______,
    _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                            KC_H,     KC_J,     KC_K,     KC_L,     KC_P,     _______,
    _______,  KC_Z,     KC_X,     KC_C,     KC_V,     _______,                         _______,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   _______,
                                                      LCK_ALP,  _______,     KC_ENT,   KC_SPC
  ),
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // Store the current modifier state in the variable for later reference.
  static uint8_t mod_state;
  mod_state = get_mods();
  switch (keycode) {
    case M_SAVE:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESC) ":w" SS_TAP(X_ENT));
      }
      break;
    case M_QUIT:
      if (record->event.pressed) {
        SEND_STRING(SS_TAP(X_ESC) ":q" SS_TAP(X_ENT));
      }
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
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
