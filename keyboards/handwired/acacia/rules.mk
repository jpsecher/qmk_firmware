BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
CAPS_WORD_ENABLE = yes      # Smart caps lock
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # N-Key Rollover
LTO_ENABLE = yes            # Link-time optimisation for smaller code

SRC += features/layer_lock.c
