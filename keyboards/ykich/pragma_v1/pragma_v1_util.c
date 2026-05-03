#include QMK_KEYBOARD_H
#include "pragma_v1_util.h"

uint8_t get_active_layer(void) {
    return get_highest_layer(layer_state | default_layer_state);
}

const char *get_active_layer_name(void) {
    switch (get_active_layer()) {
        case 0:
            return PSTR("Base(0)\n");
        case 1:
            return PSTR("Lower(1)\n");
        case 2:
            return PSTR("Raise(2)\n");
        case 3:
            return PSTR("Fn(3)\n");
        case 4:
            return PSTR("Adj(4)\n");
        case 5:
            return PSTR("Num(5)\n");
        case 6:
            return PSTR("Track(6)\n");
        default:
            return PSTR("Undef\n");
    }
}
