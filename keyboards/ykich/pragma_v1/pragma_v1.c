// 左側 OLED に表示する簡易表示
#include "pragma_v1.h"
#include "pragma_v1_util.h"

void write_left_oled(void) {
    // レイヤー表示
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("Layer: "), false);
    oled_write_P(get_active_layer_name(), false);

    // CapsLock 表示
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(PSTR("Caps : "), false);
    if (led_usb_state.caps_lock) {
        oled_write_P(PSTR("On\n"), false);
    } else {
        oled_write_P(PSTR("Off\n"), false);
    }
}

