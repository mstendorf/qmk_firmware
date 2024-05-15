#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#include "features/achordion.h"
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
  ST_TO_DK,
  ST_TO_UK,
  ST_PREV_DIAG,
  ST_NEXT_DIAG,
  ST_PREV_FN,
  ST_NEXT_FN,
};

#define HOME_S MT(MOD_LALT, KC_S)
#define HOME_D MT(MOD_LGUI, KC_D)
#define HOME_F MT(MOD_LSFT, KC_F)
#define HOME_J MT(MOD_LSFT, KC_J)
#define HOME_K MT(MOD_LGUI, KC_K)
#define HOME_L MT(MOD_LALT, KC_L)
#define HOME_V MT(MOD_LCTL, KC_V)
#define HOME_M MT(MOD_LCTL, KC_M)
#define HOME_C LT(4, KC_C)
#define LT_ENTER LT(3, KC_ENTER)
#define LT_SPACE_DK LT(7, KC_SPACE)
#define LT_SPACE_US LT(1, KC_SPACE)
#define RT_BSPC_DK LT(8, KC_BSPC)
#define RT_BSPC_US LT(2, KC_BSPC)


// danish mac symbols and letters
#define DK_AT LALT(KC_BSLS)
#define DK_BSLS LALT(LSFT(KC_7))
#define DK_PIPE RALT(KC_I)
#define DK_DOLLA RALT(LSFT(KC_3))
#define DK_LTHN KC_GRAVE
#define DK_MTHN LSFT(KC_GRAVE)
#define DK_LCBRC LALT(LSFT(KC_8))
#define DK_RCBRC LALT(LSFT(KC_9))
#define TRANS KC_TRANSPARENT


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,  KC_1,    KC_2,     KC_3,     KC_4,      KC_5,                 KC_6,    KC_7,     KC_8,       KC_9,     KC_0,       KC_MINUS,
    CW_TOGG,    KC_Q,    KC_W,     KC_E,     KC_R,      KC_T,                 KC_Y,    KC_U,     KC_I,       KC_O,     KC_P,       KC_BSLS,
    KC_TAB,     KC_A,    HOME_S,   HOME_D,   HOME_F,    KC_G,                 KC_H,    HOME_J,   HOME_K,     HOME_L,   KC_SCLN,    KC_QUOTE,
    ST_TO_DK,   KC_Z,    KC_X,     HOME_C,   HOME_V,    KC_B,                 KC_N,    HOME_M,   KC_COMMA,   KC_DOT,   KC_SLASH,   MO(5),
                                                  LT_SPACE_US,    LT_ENTER,    KC_RIGHT_GUI,   RT_BSPC_US
  ),
  [1] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,
    TRANS,     TRANS,     KC_GRAVE,  KC_EXLM,   KC_QUES,   TRANS,               TRANS,     KC_ASTR,   KC_PERC,   KC_PLUS,   TRANS,     TRANS,
    TRANS,     KC_AT,     KC_HASH,   KC_BSLS,   KC_SLASH,  TRANS,               TRANS,     KC_PIPE,   KC_AMPR,   KC_COLN,   KC_SCLN,   TRANS,
    TRANS,     TRANS,     TRANS,     KC_TILD,   TRANS,     TRANS,               TRANS,     KC_CIRC,   KC_DLR,    TRANS,     TRANS,     TRANS,
                                                        TRANS, TRANS,       TRANS, TRANS
  ),
  [2] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,
    TRANS,     DK_LBRC,   TRANS,     KC_LPRN,   KC_RPRN,   TRANS,               TRANS,     KC_DQUO,   KC_QUOTE,  KC_PLUS,   TRANS,     TRANS,
    TRANS,     TRANS,     KC_LABK,   KC_LBRC,   KC_RBRC,   KC_RABK,             TRANS,     KC_UNDS,   KC_MINUS,  KC_COLN,   KC_SCLN,   TRANS,
    TRANS,     TRANS,     TRANS,     KC_LCBR,   KC_RCBR,   KC_PERC,             TRANS,     KC_EQUAL,  KC_EXLM,   KC_EQUAL,  TRANS,     TRANS,
                                                         TRANS, TRANS,      TRANS, TRANS
  ),
  [3] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     TRANS,        TRANS,        TRANS,     TRANS,     TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     ST_PREV_DIAG, ST_NEXT_DIAG, TRANS,     TRANS,     TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               KC_LEFT,   KC_DOWN,      KC_UP,        KC_RIGHT,  TRANS,     TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     ST_PREV_FN,   ST_NEXT_FN,   TRANS,     TRANS,     TRANS,
                                                        TRANS, TRANS,        TRANS, TRANS
  ),
  [4] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     TRANS,     KC_SLASH,     KC_ASTR,     KC_MINUS,     TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     KC_7,      KC_8,         KC_9,        KC_PLUS,      TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               TRANS,     KC_4,      KC_5,         KC_6,        KC_COMMA,     TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,               KC_0,      KC_1,      KC_2,         KC_3,        KC_DOT,       TRANS,
                                                       TRANS, TRANS,         TRANS, TRANS
  ),
  [5] = LAYOUT_voyager(
    RGB_TOG,     TOGGLE_LAYER_COLOR,    RGB_MODE_FORWARD,     RGB_SLD,           RGB_VAD,              RGB_VAI,                     TRANS,       TRANS,              TRANS,          TRANS,     TRANS,     QK_BOOT,
    TRANS,       TRANS,                 KC_AUDIO_VOL_DOWN,    KC_AUDIO_VOL_UP,   KC_AUDIO_MUTE,        TRANS,                       KC_PAGE_UP,  KC_HOME,            KC_UP,          KC_END,    TRANS,     TRANS,
    TRANS,       KC_MEDIA_PREV_TRACK,   KC_MEDIA_NEXT_TRACK,  KC_MEDIA_STOP,     KC_MEDIA_PLAY_PAUSE,  TRANS,                       KC_PGDN,     KC_LEFT,            KC_DOWN,        KC_RIGHT,  TRANS,     TRANS,
    TRANS,       TRANS,                 TRANS,                HSV_0_255_255,     HSV_74_255_255,       HSV_169_255_255,             TRANS,       LCTL(LSFT(KC_TAB)), LCTL(KC_TAB),   TRANS,     TRANS,     TRANS,
                                                                                                             TRANS, TRANS,       TRANS, TRANS
  ),
  [6] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,              TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,              TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     DK_ARNG,
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,              TRANS,     TRANS,     TRANS,     TRANS,     DK_AE,     DK_OSTR,
    ST_TO_UK,  TRANS,     TRANS,     TRANS,     TRANS,     TRANS,              TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,
                                                  LT_SPACE_DK, TRANS,     KC_RIGHT_GUI,    RT_BSPC_DK
  ),
  [7] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,              TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,
    TRANS,     TRANS,     DK_GRV,    DK_EXLM,   DK_QUES,   TRANS,              TRANS,     DK_ASTR,   DK_PERC,   DK_PLUS,   TRANS,     TRANS,
    TRANS,     DK_AT,     DK_HASH,   DK_BSLS,   DK_SLSH,   TRANS,              TRANS,     DK_PIPE,   DK_AMPR,   DK_COLN,   DK_SCLN,   TRANS,
    TRANS,     TRANS,     TRANS,     DK_TILD,   TRANS,     TRANS,              TRANS,     DK_CIRC,   DK_DOLLA,  TRANS,     TRANS,     TRANS,
                                                        TRANS, TRANS,     TRANS, TRANS
  ),
  [8] = LAYOUT_voyager(
    TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,              TRANS,     TRANS,     TRANS,     TRANS,     TRANS,     TRANS,
    TRANS,     TRANS,     TRANS,     DK_LPRN,   DK_RPRN,   TRANS,              TRANS,     DK_DQUO,   DK_QUOT,   DK_PLUS,   TRANS,     TRANS,
    TRANS,     TRANS,     DK_LTHN,   DK_LBRC,   DK_RBRC,   DK_MTHN,            TRANS,     DK_UNDS,   DK_MINS,   DK_COLN,   DK_SCLN,   TRANS,
    TRANS,     TRANS,     TRANS,     DK_LCBRC,  DK_RCBRC,  DK_PERC,            TRANS,     DK_EQL,    DK_EXLM,   DK_EQL,    TRANS,     TRANS,
                                                        TRANS, TRANS,     TRANS, TRANS
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {169,255,84}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {0,255,255}, {0,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {169,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,84}, {169,255,84}, {169,255,84}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {169,255,84}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {169,255,84}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {169,255,84}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [8] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {0,255,255}, {0,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,255,255}, {169,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },


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
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_achordion(keycode, record)) { return false; }
  switch (keycode) {
    case ST_TO_DK:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        layer_move(6);
    }
    break;
    case ST_TO_UK:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_SPACE)));
        layer_move(0);
    }
    break;
    case ST_PREV_DIAG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
    case ST_NEXT_DIAG:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RBRC) SS_DELAY(100) SS_TAP(X_D));
    }
    break;
    case ST_PREV_FN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LBRC) SS_DELAY(100) SS_TAP(X_M));
    }
    break;
    case ST_NEXT_FN:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_RBRC) SS_DELAY(100) SS_TAP(X_M));
    }
    break;

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
  }
  return true;
}

void matrix_scan_user(void) {
  achordion_task();
}
bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
  // Exceptionally consider the following chords as holds, even though they
  // are on the same hand in Dvorak.
  switch (tap_hold_keycode) {
    // same hand browser tab closing and pasting
    case HOME_D:  // A + U.
      if (other_keycode == KC_W || other_keycode == KC_V || other_keycode == KC_R) { return true; }
      break;

    // same hand Ctrl-c
    case HOME_V:  // A + U.
      if (other_keycode == HOME_C) { return true; }
      break;

    // same hand rectangle fullscren
    case HOME_S + HOME_V:  // A + U.
      if (other_keycode == LT_ENTER) { return true; }
      break;

    // same hand locale switching
    case HOME_S:  // A + U.
      if (other_keycode == LT_SPACE_DK || other_keycode == LT_SPACE_US) { return true; }
      break;
  }

  // Also allow same-hand holds when the other key is in the rows below the
  // alphas. I need the `% (MATRIX_ROWS / 2)` because my keyboard is split.
  if (tap_hold_record->event.key.row % (MATRIX_ROWS / 2) >= 4) { return true; }

  // Otherwise, follow the opposite hands rule.
  return achordion_opposite_hands(tap_hold_record, other_record);
}
