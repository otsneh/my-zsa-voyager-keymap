#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

#define LT_SYM_REP LT(1, KC_0)

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  MAC_MISSION_CONTROL,
  MAC_SIRI,
  MAC_LOCK,
};



#define DUAL_FUNC_0 LT(31, KC_F19)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,                                KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_PLAY_PAUSE,MAC_SIRI,       KC_TRANSPARENT, MAC_LOCK,       
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),LT(3, KC_F),    KC_G,                                           KC_H,           LT(2, KC_J),    MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_QUOTE),KC_TRANSPARENT, 
    KC_TRANSPARENT, LT(4, KC_Z),    KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         LT(5, KC_SLASH),KC_TRANSPARENT, 
                                                    LT_SYM_REP, MT(MOD_LSFT, KC_BSPC),                                MT(MOD_RSFT, KC_TAB),LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_EXLM,        KC_LABK,        KC_RABK,        KC_AT,                                          KC_BSLS,        KC_LCBR,        KC_RCBR,        KC_DLR,         KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_GRAVE,       KC_ASTR,        KC_PLUS,        KC_EQUAL,       KC_HASH,                                        KC_CIRC,        KC_LPRN,        KC_RPRN,        KC_COLN,        KC_MINUS,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_PERC,        KC_AMPR,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_LBRC,        KC_RBRC,        KC_SCLN,        KC_UNDS,        KC_TRANSPARENT, 
                                                    MO(6),          KC_TRANSPARENT,                                 KC_TRANSPARENT, MO(6)
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_7,           KC_8,           KC_9,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_4,           KC_5,           KC_6,           KC_NO,                                          KC_NO,          KC_TRANSPARENT, KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_1,           KC_2,           KC_3,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_0,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_HOME,        KC_PGDN,        KC_PAGE_UP,     KC_END,         KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_0,    KC_LEFT_ALT,    KC_LEFT_GUI,    KC_TRANSPARENT, KC_NO,                                          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          KC_NO,          LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, QK_LLCK
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_MS_WH_UP,    KC_MS_WH_DOWN,  MAC_MISSION_CONTROL,KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, DUAL_FUNC_0,    KC_LEFT_ALT,    KC_LEFT_GUI,    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MAC_UNDO,    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, QK_LLCK
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F12,         KC_F7,          KC_F8,          KC_F9,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F4,          KC_F5,          KC_F6,          KC_NO,                                          KC_NO,          KC_NO,          KC_RIGHT_GUI,   KC_RIGHT_ALT,   KC_RIGHT_CTRL,  KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F10,         KC_F1,          KC_F2,          KC_F3,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_NO,          KC_NO,          RGB_SAD,        RGB_SAI,        KC_NO,                                          KC_NO,          RGB_VAD,        RGB_VAI,        KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, TOGGLE_LAYER_COLOR,RGB_TOG,        RGB_HUD,        RGB_HUI,        KC_NO,                                          KC_NO,          RGB_SPD,        RGB_SPI,        RGB_MODE_FORWARD,RGB_SLD,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,KC_NO,                                          KC_NO,          QK_DYNAMIC_TAPPING_TERM_DOWN,QK_DYNAMIC_TAPPING_TERM_UP,QK_DYNAMIC_TAPPING_TERM_PRINT,KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

const uint16_t PROGMEM combo0[] = { KC_COMMA, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo1[] = { LT(2, KC_J), MT(MOD_RGUI, KC_K), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_DOWN, KC_UP, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_C, KC_V, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_ENTER),
    COMBO(combo1, KC_ESCAPE),
    COMBO(combo2, TO(0)),
    COMBO(combo3, LCTL(KC_A)),
};

#ifdef COMBO_MUST_TAP_PER_COMBO
bool get_combo_must_tap(uint16_t combo_index, combo_t *combo) {
    // Set all combos that have Mod-Tap/Layer-Tap/Momentary keys in the chord to be tap-only.
    uint16_t key;
    uint8_t idx = 0;
    while ((key = pgm_read_word(&combo->keys[idx])) != COMBO_END) {
        switch (key) {
            case QK_MOD_TAP...QK_MOD_TAP_MAX:
            case QK_LAYER_TAP...QK_LAYER_TAP_MAX:
            case QK_MOMENTARY...QK_MOMENTARY_MAX:
                return true;
        }
        idx += 1;
    }
    return false;

}
#endif

#ifdef COMBO_MUST_PRESS_IN_ORDER_PER_COMBO
bool get_combo_must_press_in_order(uint16_t combo_index, combo_t *combo) {
    switch (combo_index) {
        case 1: // JK as ESC combo.
        case 3: // CV as tmux prefix combo.
            return true;
        default:
            return false;
    }
}
#endif

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
  if (keycode == LT_SYM_REP) { return false; }
  return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_BSPC):
            return g_tapping_term -65;
        case MT(MOD_RSFT, KC_TAB):
            return g_tapping_term -65;
        case LT_SYM_REP:
            return g_tapping_term -55;
        default:
            return g_tapping_term;
    }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    // QUICK_TAP_TERM is disabled by default.
    switch (keycode) {
        case LT(2,KC_J):
        case MT(MOD_RGUI, KC_K):
        case MT(MOD_RALT, KC_L):
        case MT(MOD_LSFT, KC_BSPC):
        case MT(MOD_RSFT, KC_TAB):
        case LT_SYM_REP:
            return TAPPING_TERM;
        default:
            return QUICK_TAP_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {86,241,194}, {36,218,204}, {36,218,204}, {169,238,206}, {0,0,0}, {121,218,204}, {148,218,204}, {148,218,204}, {219,218,204}, {86,241,194}, {0,0,0}, {121,218,204}, {191,111,174}, {191,111,174}, {191,111,174}, {0,0,0}, {223,133,237}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,238,206}, {36,218,204}, {36,218,204}, {86,241,194}, {0,0,0}, {0,0,0}, {86,241,194}, {36,218,204}, {36,218,204}, {148,218,204}, {121,218,204}, {0,0,0}, {0,0,0}, {36,218,204}, {36,218,204}, {148,218,204}, {121,218,204}, {0,0,0}, {0,0,0}, {223,133,237} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,218,204}, {152,218,204}, {152,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {152,218,204}, {152,218,204}, {152,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {152,218,204}, {152,218,204}, {152,218,204}, {0,0,0}, {152,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {210,162,224}, {210,162,224}, {210,162,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {210,73,219}, {210,162,224}, {210,162,224}, {0,0,0}, {0,0,0}, {0,0,0}, {36,218,204}, {36,218,204}, {36,218,204}, {36,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {221,109,255}, {221,109,255}, {221,109,255}, {221,109,255}, {0,0,0}, {0,0,0}, {129,240,195}, {129,240,195}, {129,240,195}, {129,240,195}, {0,0,0}, {0,0,0}, {0,0,0}, {15,189,188}, {15,189,188}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,231,226} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {210,73,219}, {210,162,224}, {210,162,224}, {81,245,206}, {81,196,208}, {0,0,0}, {36,218,204}, {36,218,204}, {36,218,204}, {36,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {39,218,204}, {39,218,204}, {84,188,235}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,231,226} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {42,218,204}, {42,218,204}, {42,218,204}, {42,218,204}, {0,0,0}, {0,0,0}, {42,218,204}, {42,218,204}, {42,218,204}, {42,218,204}, {0,0,0}, {0,0,0}, {42,218,204}, {42,218,204}, {42,218,204}, {42,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {210,162,224}, {210,162,224}, {210,162,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,218,204}, {38,218,204}, {0,0,0}, {0,0,0}, {0,189,235}, {0,0,157}, {38,218,204}, {38,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {10,218,204}, {84,218,204}, {157,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,218,204}, {0,0,0}, {38,218,204}, {38,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {38,218,204}, {38,218,204}, {84,188,235}, {0,189,235}, {0,0,0}, {0,0,0}, {23,218,204}, {23,218,204}, {23,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(LGUI(KC_A));
        } else {
          unregister_code16(LGUI(KC_A));
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
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
    case LT_SYM_REP:
      if (record->tap.count) {
        repeat_key_invoke(&record->event);
        return false;
      }
      break;
  }
  return true;
}

