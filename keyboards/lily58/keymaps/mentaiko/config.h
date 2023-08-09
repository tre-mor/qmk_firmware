// ObliviousGmn // Dokuu // October 2020 // Config

#pragma once

/* Select hand configuration */
#undef PRODUCT
#define PRODUCT kiumi

#undef OLED_FONT_H
#define OLED_FONT_H "keyboards/lily58/keymaps/lily58-kiumi/glcdfont.c"
#ifdef OLED_DRIVER_ENABLE
    #define OLED_TIMEOUT 60000
    #define OLED_DISABLE_TIMEOUT
    #define SPLIT_OLED_ENABLE
#endif

#define MASTER_LEFT

#define USE_SERIAL_PD2
#define SPLIT_WPM_ENABLE
#define TAPPING_TERM 125
#define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING

#ifdef RGBLIGHT_ENABLE
    #undef RGBLED_NUM
    #define RGBLED_NUM 27
    #define RGBLIGHT_SLEEP
    #define RGBLIGHT_SPLIT
    #define RGBLED_NUM 27
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
    #define RGBLIGHT_EFFECT_KNIGHT
//  #define RGBLIGHT_ANIMATIONS
//  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
//  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//  #define RGBLIGHT_EFFECT_CHRISTMAS
//  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//  #define RGBLIGHT_EFFECT_TWINKLE
//  #define RGBLIGHT_EFFECT_SNAKE
//  #define RGBLIGHT_EFFECT_RGB_TEST
//  #define RGBLIGHT_EFFECT_ALTERNATING

#endif

#ifdef RGB_MATRIX_ENABLE
//  #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
//  #define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
//  #define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
//#   define DISABLE_RGB_MATRIX_ALPHAS_MODS
//#   define DISABLE_RGB_MATRIX_GRADIENT_UP_DOWN
//#   define DISABLE_RGB_MATRIX_BREATHING
//#   define DISABLE_RGB_MATRIX_BAND_VAL
//#   define DISABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
//#   define DISABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
//#   define DISABLE_RGB_MATRIX_BAND_SPIRAL_SAT
//#   define DISABLE_RGB_MATRIX_BAND_SPIRAL_VAL
//#   define DISABLE_RGB_MATRIX_CYCLE_ALL
//#   define DISABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
//#   define DISABLE_RGB_MATRIX_CYCLE_UP_DOWN
//#   define DISABLE_RGB_MATRIX_CYCLE_OUT_IN
//#   define DISABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
//#	  define DISABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
//#   define DISABLE_RGB_MATRIX_DUAL_BEACON
//#   define DISABLE_RGB_MATRIX_CYCLE_PINWHEEL
//#   define DISABLE_RGB_MATRIX_CYCLE_SPIRAL
//#   define DISABLE_RGB_MATRIX_RAINBOW_BEACON
//#   define DISABLE_RGB_MATRIX_RAINBOW_PINWHEELS
//#   define DISABLE_RGB_MATRIX_RAINDROPS
//#   define DISABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
//#   define DISABLE_RGB_MATRIX_TYPING_HEATMAP
//#   define DISABLE_RGB_MATRIX_DIGITAL_RAIN
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
//#   define DISABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
//#   define DISABLE_RGB_MATRIX_SPLASH
//#   define DISABLE_RGB_MATRIX_MULTISPLASH
//#   define DISABLE_RGB_MATRIX_SOLID_SPLASH
//#   define DISABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
