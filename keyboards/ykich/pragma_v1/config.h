#pragma once
#define DYNAMIC_KEYMAP_LAYER_COUNT 7

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 9  // Maximum columns across both halves

#define ADNS5050_SCLK_PIN         GP14
#define ADNS5050_SDIO_PIN         GP12
#define ADNS5050_CS_PIN           GP13

// I2C for OLED
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

// Split keyboard serial communication
#define SERIAL_USART_TX_PIN       GP0
#define SERIAL_USART_RX_PIN       GP1

#define POINTING_DEVICE_ROTATION_180
#define OLED_FONT_H "keyboards/ykich/pragma_v1/lib/glcdfont.c"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U