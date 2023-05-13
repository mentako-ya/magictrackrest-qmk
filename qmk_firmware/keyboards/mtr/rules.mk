# MCU name
MCU = atmega32u4

# Bootloader selection
BOOTLOADER = caterina

# Firmware size reduction. https://docs.qmk.fm/#/squeezing_avr?id=squeezing-the-most-out-of-avr
LTO_ENABLE = yes
SPACE_CADET_ENABLE = no
GRAVE_ESC_ENABLE = no 
MAGIC_ENABLE = no
AVR_USE_MINIMAL_PRINTF = yes
MUSIC_ENABLE = no

# oled
OLED_ENABLE = no
OLED_DRIVER = SSD1306

# rgblight
RGBLIGHT_ENABLE = yes        # Enable RGBLIGHT
RGBLIGHT_DRIVER = WS2812
RGB_MATRIX_ENABLE = no      # Enable RGB_MATRIX (not work yet)
RGB_MATRIX_DRIVER = WS2812

# extra key
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes

# debug
CONSOLE_ENABLE = no
