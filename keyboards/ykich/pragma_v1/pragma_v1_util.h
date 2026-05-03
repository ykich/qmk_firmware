#pragma once
#include <stdint.h>

// Returns the currently active (highest) layer.
uint8_t get_active_layer(void);

// Returns a flash-resident string describing the active layer (including newline).
const char *get_active_layer_name(void);

