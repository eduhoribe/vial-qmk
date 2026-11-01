#include QMK_KEYBOARD_H

enum custom_keycodes {
    BA = SAFE_RANGE,
    NA,
    NA_BANG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        BA, NA, NA, NA, NA, NA, NA, NA_BANG
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {
            case BA:
                SEND_STRING("Ba");
                return false;
            case NA:
                SEND_STRING("na");
                return false;
            case NA_BANG:
                SEND_STRING("na!");
                return false;
        }
    }
    return true;
}
