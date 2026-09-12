# Pro Micro HID Security Lab

A hardware security research project exploring USB HID keyboard emulation
using an ATmega32U4-based Pro Micro.

The project investigates how a microcontroller can enumerate as a USB
keyboard and generate controlled keyboard input on different operating
systems.

## Research Targets

- Windows 10
- Windows 11
- Kali Linux

## Hardware

- Pro Micro
- ATmega32U4
- Micro-USB data cable

## Technologies

- Arduino
- ATmega32U4
- USB HID
- Keyboard emulation
- Windows
- Linux
- Security testing

## Project Structure

```text
pro-micro-hid-security-lab/
├── firmware/
│   ├── windows/
│   └── kali/
│
├── docs/
│   ├── hardware.md
│   ├── windows.md
│   └── kali.md
│
├── images/
│
├── .gitignore
├── LICENSE
└── README.md
