// Copyright 2023 mentako-ya
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// USB Device descriptor parameters
#define VENDOR_ID           0x4D59     // "MY" = mentako-ya
#define PRODUCT_ID          0x0200
#define DEVICE_VER          0x0010
#define MANUFACTURER        mentako-ya
#define PRODUCT             mtr

// Key matrix parameters
#define DIODE_DIRECTION     ROW2COL
#define MATRIX_COLS         4
#define MATRIX_ROWS         3
#define MATRIX_COL_PINS     { F6, F7, B1, B3 }
#define MATRIX_ROW_PINS     { C6, D7, E6 }
#define DEBOUNCE            5

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

/* Firmware size reduction */
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE

#define MATRIX_ROWS 3
#define MATRIX_COLS 4


#ifdef RGBLIGHT_ENABLE
#define RGB_DI_PIN D3
#define RGBLED_NUM 20 // Number of LEDs
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE
#endif

#ifdef OLED_ENABLE
#define OLED_FONT_H "keyboards/mtr/glcdfont.c"
#endif
