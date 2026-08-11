# ControlDeck

A compact, open-source desktop media controller / macropad, built for the **StarDance Hackpad** mission on [Hack Club](https://hackclub.com/).

3 mechanical keys + a rotary encoder with push-button, all driven by a Seeeduino XIAO RP2040 running QMK firmware.

## Important Note

I haven't tested it myself yet, so no guarantees it works 100%. But if you end up building it before I do, let me know how it goes!

## Features

- 3x Cherry MX-style mechanical switches (media/macro keys)
- 1x EC11 rotary encoder with push switch (volume control / scroll / custom actions)
- Custom PCB designed in KiCad
- 3D-printed enclosure designed in Fusion 360
- Powered by a Seeeduino XIAO RP2040 running QMK firmware

## Hardware

| Component                              | Qty | Notes                         |
| --------------------------------------- | --- | ------------------------------ |
| Seeeduino XIAO RP2040                   | 1   | Main controller                |
| Cherry MX-style keyswitch               | 3   | SW1, SW2, SW3                  |
| EC11 rotary encoder (with push switch)  | 1   | SW6                            |
| Custom PCB                              | 1   | KiCad design, see `/pcb`       |
| 3D-printed case (top + base)            | 1   | Fusion 360 design, see `/cad`  |

### Wiring

All switches share a common GND. Signal pins connect to the XIAO RP2040 as follows:

| Pin | Function                       |
| --- | ------------------------------- |
| GND | Common ground for all switches  |
| D1  | Encoder A                       |
| D2  | Encoder B                       |
| D3  | Encoder push switch             |
| D4  | SW1                              |
| D5  | SW2                              |
| D6  | SW3                              |

## Firmware

Built with [QMK Firmware](https://qmk.fm/) for RP2040, using `DIRECT_PINS` (no key matrix) and the built-in QMK encoder support.

## 3D Models Used

- Cherry MX keyswitches — [GrabCAD](https://grabcad.com/library/cherry-mx-switches-mx-1) *(not redistributed in this repo — download from source, see License section)*
- EC11 rotary encoder — [GrabCAD](https://grabcad.com/library/rotary-encoder-17) *(not redistributed in this repo — download from source, see License section)*
- Cherry MX keycaps — [hineybush/CherryMX](https://github.com/hineybush/CherryMX) (MIT License)
- XIAO RP2040 — [Seeed Studio Wiki](https://wiki.seeedstudio.com/XIAO-RP2040/) (reference only, no files redistributed)

## Project Structure

```
├── cad/        # STL files for the enclosure
├── firmware/
|    └──controldeck    # QMK files for the firmware
├── pcb/       # PCB schematic and layout
├── production/  # Production ready files
├── Demo.mp4
├── LICENSE
└── README.md
```

## About

Built by CircuitPhantom for the StarDance Hackpad mission on Hack Club.

## Gallery

[![image](https://private-user-images.githubusercontent.com/196764383/633960238-3ffa7879-6e22-4c15-95e7-464492917b03.png)](https://private-user-images.githubusercontent.com/196764383/633960238-3ffa7879-6e22-4c15-95e7-464492917b03.png)
[![image](https://private-user-images.githubusercontent.com/196764383/633960579-fc704286-d269-4327-8fa9-564b33cf3c0a.png)](https://private-user-images.githubusercontent.com/196764383/633960579-fc704286-d269-4327-8fa9-564b33cf3c0a.png)
[![image](https://private-user-images.githubusercontent.com/196764383/633960788-b2e79c2d-50db-44a5-b881-5c2275f49bb3.png)](https://private-user-images.githubusercontent.com/196764383/633960788-b2e79c2d-50db-44a5-b881-5c2275f49bb3.png)
[![image](https://private-user-images.githubusercontent.com/196764383/633961695-066d79ba-469c-4916-9fe6-76bf18729655.png)](https://private-user-images.githubusercontent.com/196764383/633961695-066d79ba-469c-4916-9fe6-76bf18729655.png)

## License

The hardware design (PCB, KiCad files), original enclosure design, and this repository's own content are licensed under the **MIT License** — see [`LICENSE`](./LICENSE). Feel free to fork, remix, and build your own.

**Third-party assets used in this project are *not* covered by the MIT license above and remain under their original terms:**

| Asset | Source | License / Terms |
|---|---|---|
| Cherry MX keyswitch 3D model | [GrabCAD](https://grabcad.com/library/cherry-mx-switches-mx-1) | GrabCAD Library content — personal/non-commercial use only; contact the original uploader for redistribution or commercial use. **Not redistributed in this repo.** |
| EC11 rotary encoder 3D model | [GrabCAD](https://grabcad.com/library/rotary-encoder-17) | Same as above — GrabCAD non-commercial terms. **Not redistributed in this repo.** |
| Cherry MX keycap models | [hineybush/CherryMX](https://github.com/hineybush/CherryMX) | MIT License (original author: Josh Hinnebusch) |
| Firmware base | [QMK Firmware](https://qmk.fm/) | GPL-2.0 / GPL-3.0 (per-file) — this project's keymap/config files are provided under MIT, but they build on top of QMK, which remains GPL-licensed. If you redistribute a compiled firmware image or the full QMK source tree, GPL terms apply to that portion. |
| XIAO RP2040 reference | [Seeed Studio Wiki](https://wiki.seeedstudio.com/XIAO-RP2040/) | Documentation reference only, no files redistributed. |

If you plan to redistribute this project (including the `cad/` STL files), make sure any GrabCAD-sourced geometry is either removed/regenerated or that you've obtained permission from the original uploader — the MIT license on this repo does not extend to that content.
