# controldeck

![controldeck](https://imgur.com/a/RZj3H6Z)

A small 3-button media controller with a rotary encoder, built on the Seeeduino XIAO RP2040 for the StarDance Hackpad mission on Hack Club.

* Keyboard Maintainer: [Poyraz Dinçer](https://github.com/CircuitPhantom)
* Hardware Supported: Seeeduino XIAO RP2040, custom PCB (3x Cherry MX-style switches + EC11 rotary encoder with push switch)
* Hardware Availability: Custom PCB — design files available in this repository (`/kicad`)

Make example for this keyboard (after setting up your build environment):

    make controldeck:default

Flashing example for this keyboard:

    make controldeck:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in one of the following ways:

* **Physical reset button**: Double-tap the reset button on the XIAO RP2040 board to enter UF2 bootloader mode
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available in your keymap