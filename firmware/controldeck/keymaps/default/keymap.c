// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───────────────┬───────────────┬───────────────┬───────────────┐
     * │   NEXT TRACK  │  PLAY/PAUSE   │ PREVIOUS TRACK│  MUTE (encoder │
     * │               │               │               │     click)     │
     * └───────────────┴───────────────┴───────────────┴───────────────┘
     *   Encoder rotate: Volume Down / Volume Up
     */

    [0] = LAYOUT(
        KC_MEDIA_NEXT_TRACK,
        KC_MEDIA_PLAY_PAUSE,
        KC_MEDIA_PREV_TRACK,
        KC_MUTE
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return false;
}