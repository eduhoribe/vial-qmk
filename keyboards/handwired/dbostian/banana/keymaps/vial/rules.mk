VIA_ENABLE = yes
VIAL_ENABLE = yes
LTO_ENABLE = yes

# The ATmega32U4 doesn't have room for the full Vial feature set
ifeq ($(strip $(MCU)), atmega32u4)
    QMK_SETTINGS = no
    TAP_DANCE_ENABLE = no
    COMBO_ENABLE = no
    KEY_OVERRIDE_ENABLE = no
    MOUSEKEY_ENABLE = no
    MAGIC_ENABLE = no
endif
