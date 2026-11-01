# Banana

![banana](https://i.imgur.com/2F6gi57.jpg)

A 3D-printed, 8-key banana-shaped macropad, handwired to a Pro Micro (or an RP2040 Pro Micro-compatible board) with each switch wired directly to a pin (no diodes).

* Keyboard Maintainer: [dbostian](https://github.com/dbostian)
* Hardware Supported: Pro Micro (ATmega32U4), RP2040 Pro Micro-compatible boards
* Hardware Availability: [STLs and build guide](https://github.com/dbostian/banana)

Make example for this keyboard (after setting up your build environment):

    make handwired/dbostian/banana/promicro:default
    make handwired/dbostian/banana/rp2040:default

A [Vial](https://get.vial.today/) keymap is also available:

    make handwired/dbostian/banana/promicro:vial
    make handwired/dbostian/banana/rp2040:vial

Flashing example for this keyboard:

    make handwired/dbostian/banana/promicro:default:flash

The RP2040 build produces a `.uf2` file: put the board into bootloader mode and copy it onto the `RPI-RP2` drive that appears.

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the leftmost key and plug in the keyboard
* **Physical reset button**: Briefly short the RST and GND pins on the Pro Micro, or hold BOOT while plugging in an RP2040 board
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
