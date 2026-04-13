OLED_ENABLE = yes              # Enables the use of OLED displays (renamed from OLED_DRIVER_ENABLE)
ENCODER_MAP_ENABLE = yes       # Use ENCODER_MAP instead of encoder_update_user callback
RGBLIGHT_ENABLE = yes          # Enable keyboard RGB underglow
LTO_ENABLE = yes               # Link Time Optimization (renamed from LINK_TIME_OPTIMIZATION_ENABLE)
TRI_LAYER_ENABLE = yes         # Built-in tri-layer (replaces update_tri_layer_state in userspace)

SRC += oled.c

INTROSPECTION_KEYMAP_C = introspection.c
