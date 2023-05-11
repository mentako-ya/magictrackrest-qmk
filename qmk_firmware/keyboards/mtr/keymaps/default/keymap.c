#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	     /*
	      * ┌───┬───┐              ┌───┬───┬───┬───┐
	      * │L1 │L2 │              │PGU│HOM│UP │END│
	      * ├───┼───┤              ├───┼───┼───┼───┤
	      * │L3 │BS │              │PGD│LT │DN │RT │
	      * └───┴───┘              └───┴───┴───┴───┘
          */
    [0] = LAYOUT_6x2(
        LT(1,KC_LNG2), LT(2,KC_SPC),   KC_PGUP,     KC_HOME,     KC_UP,       KC_END,
		LT(3,KC_LNG1), KC_BSPC,        KC_PGDN,     KC_LEFT,     KC_DOWN,     KC_RGHT
    ),
    [1] = LAYOUT_6x2(
        KC_NO,         KC_NO,          S(KC_PGUP),  S(KC_HOME),  S(KC_UP),    S(KC_END),
		KC_NO,         KC_DEL,         S(KC_PGDN),  S(KC_LEFT),  S(KC_DOWN),  S(KC_RGHT)
    ),
    [2] = LAYOUT_6x2(
        KC_NO,         KC_NO,          C(KC_PGUP),  C(KC_HOME),  C(KC_UP),    C(KC_END),
		KC_NO,         KC_DEL,         C(KC_PGDN),  C(KC_LEFT),  C(KC_DOWN),  C(KC_RGHT)
    ),
    [3] = LAYOUT_6x2(
        KC_NO,         KC_NO,          RGB_MOD,     RGB_HUI,     RGB_SAI,     RGB_VAI,
		KC_NO,         RGB_TOG,        RGB_RMOD,    RGB_HUD,     RGB_SAD,     RGB_VAD
    )
};

#ifdef CONSOLE_ENABLE
void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
#endif

#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

bool oled_task_user(void) {
    render_logo();
    return false;
}
#endif
