#include QMK_KEYBOARD_H
#include "version.h"

enum layer_names {
    QRTY,      // qwerty above workman to make sure transparent does not catch unwanted
               // keycode
    QRTY_F,    // symbols
    DEFAULT_1, // default keys
    DEFAULT_2, // default keys
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [QRTY] = LAYOUT_ergodox(KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LEFT, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_MINS, LT(3, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_EQL, MT(MOD_LCTL | MOD_LSFT | MOD_LGUI, KC_ESC), MT(MOD_LCTL | MOD_LSFT | MOD_LGUI, KC_ESC), KC_LCTL, KC_LALT, KC_LGUI, TO(0), TO(1), KC_P0, LSA_T(KC_SPC), LT(3,KC_BSPC), KC_ENT, KC_RGHT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_LBRC, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(3, KC_QUOT), KC_RBRC, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, MT(MOD_LCTL | MOD_LSFT | MOD_LGUI, KC_ESC), MT(MOD_LCTL | MOD_LSFT | MOD_LGUI, KC_ESC), KC_DOWN, KC_UP, KC_LEFT, KC_RGHT, LT(3,KC_BSPC), LSA_T(KC_SPC)),

    [QRTY_F] = LAYOUT_ergodox(KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), TO(2), KC_P1, KC_TRNS, KC_TRNS, KC_TRNS, KC_F12, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [DEFAULT_1] = LAYOUT_ergodox(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), TO(3), KC_P2, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),

    [DEFAULT_2] = LAYOUT_ergodox(LCTL(LGUI(KC_Q)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_UP), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_LEFT), LCTL(LALT(LGUI(KC_QUOT))), LCTL(LGUI(KC_LEFT)), LCTL(LGUI(KC_DOWN)), LCTL(LGUI(KC_UP)), LCTL(LGUI(KC_RGHT)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(KC_RGHT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TO(0), KC_NO, KC_P3, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, LCTL(LALT(LGUI(KC_QUOT))), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_VOLD, KC_VOLU, KC_BRIU, KC_BRID, KC_TRNS, KC_TRNS)};

// Runs constantly in the background, in a loop.

// layer_state_t layer_state_set_user(layer_state_t state) {
//     ergodox_board_led_off();
//     ergodox_right_led_1_off();
//     ergodox_right_led_2_off();
//     ergodox_right_led_3_off();
//     switch (get_highest_layer(state)) {
//         case 1:
//             ergodox_right_led_1_on();
//             break;
//         case 2:
//             ergodox_right_led_2_on();
//             break;
//         case 3:
//             ergodox_right_led_3_on();
//             break;
//         default:
//             // none
//             break;
//     }
//     return state;
// }
