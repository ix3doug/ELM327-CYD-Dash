//  This header file location is force-included by "build_flags" in platformio.ini, else it looks in .pio/build/esp32dev/*

#ifndef LV_CONF_H
#define LV_CONF_H

#define LV_MEM_SIZE (32 * 1024)  // Increased memory for ESP32
#define LV_HOR_RES_MAX 320
#define LV_VER_RES_MAX 240
#define LV_COLOR_DEPTH 16
#define LV_USE_GPU_STM32_DMA2D 0
#define LV_USE_LOG 1
#define LV_LOG_PRINTF 1
#define LV_USE_ASSERT_NULL 1
#define LV_USE_ASSERT_MEM 1
#define LV_USE_ASSERT_OBJ 1
#define LV_USE_USER_DATA 1

// Enable required widgets
#define LV_USE_LABEL 1
#define LV_USE_BUTTON 1
#define LV_USE_BUTTONMATRIX 1
#define LV_USE_CHECKBOX 1
#define LV_USE_SLIDER 1
#define LV_USE_DROPDOWN 1
// Add other widgets as needed

#endif /*LV_CONF_H*/