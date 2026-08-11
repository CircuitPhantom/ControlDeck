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

| Component | Qty | Notes |
|---|---|---|
| Seeeduino XIAO RP2040 | 1 | Main controller |
| Cherry MX-style keyswitch | 3 | SW1, SW2, SW3 |
| EC11 rotary encoder (with push switch) | 1 | SW6 |
| Custom PCB | 1 | KiCad design, see `/pcb` |
| 3D-printed case (top + base) | 1 | Fusion 360 design, see `/cad` |

### Wiring

All switches share a common GND. Signal pins connect to the XIAO RP2040 as follows:

| Pin | Function |
|---|---|
| GND | Common ground for all switches |
| D1 | Encoder A |
| D2 | Encoder B |
| D3 | Encoder push switch |
| D4 | SW1 |
| D5 | SW2 |
| D6 | SW3 |

## Firmware

Built with [QMK Firmware](https://qmk.fm/) for RP2040, using `DIRECT_PINS` (no key matrix) and the built-in QMK encoder support.

## 3D Models Used

- Cherry MX keyswitches — [GrabCAD](https://grabcad.com/library/cherry-mx-switches-mx-1)
- EC11 rotary encoder — [GrabCAD](https://grabcad.com/library/rotary-encoder-17)
- Cherry MX keycaps — [hineybush/CherryMX](https://github.com/hineybush/CherryMX/)
- XIAO RP2040 — [Seeed Studio Wiki](https://wiki.seeedstudio.com/XIAO-RP2040/)

## Project Structure

```
├── cad/        # STL files for the enclosure
├── firmware/
|    └──controldeck    # QMK files for the firmware
├── pcb/       # PCB schematic and layout
├── production/  # Production ready files
├── Demo.mp4
└── README.md
```

## About

Built by CircuitPhantom for the StarDance Hackpad mission on Hack Club.

## Gallery

<img width="701" height="608" alt="image" src="https://github.com/user-attachments/assets/3ffa7879-6e22-4c15-95e7-464492917b03" />

<img width="719" height="577" alt="image" src="https://github.com/user-attachments/assets/fc704286-d269-4327-8fa9-564b33cf3c0a" />

<img width="634" height="703" alt="image" src="https://github.com/user-attachments/assets/b2e79c2d-50db-44a5-b881-5c2275f49bb3" />

<img width="572" height="516" alt="image" src="https://github.com/user-attachments/assets/066d79ba-469c-4916-9fe6-76bf18729655" />


## License

MIT — feel free to fork, remix, and build your own.
