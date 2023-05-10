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

