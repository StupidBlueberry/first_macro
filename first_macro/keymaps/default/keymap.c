#include QMK_KEYBOARD_H

#define RGBLIGHT_DEFAULT_HUE 180

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_Q, KC_W, KC_E, KC_A, KC_S, KC_D
  )
};