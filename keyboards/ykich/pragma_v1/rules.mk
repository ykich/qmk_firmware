# MCU設定
MCU = RP2040
BOOTLOADER = rp2040

POINTING_DEVICE_DRIVER = adns5050

SPACE_CADET_ENABLE = no
MAGIC_ENABLE = no


# Source files
SRC += trackball_module.c pragma_v1_util.c
