# Pro Micro HID Security Lab

A security-research and hardware-learning project built around an
ATmega32U4-based Pro Micro and its USB HID keyboard capabilities.

The project explores how a microcontroller can enumerate as a USB keyboard,
generate controlled keyboard input, and interact with login interfaces in
isolated, authorized laboratory environments.

## Project Goals

- Learn USB HID behavior with the ATmega32U4.
- Understand keyboard emulation from a microcontroller.
- Study timing and focus behavior on different operating systems.
- Build reproducible security-lab demonstrations.
- Document hardware, firmware, testing methodology, and limitations.

## Supported Lab Platforms

- Windows 10
- Windows 11
- Kali Linux

## Hardware

- ATmega32U4-based Pro Micro
- Micro-USB cable
- Host computer running one of the supported lab operating systems

## Repository Layout

```text
pro-micro-hid-security-lab/
├── README.md
├── LICENSE
├── .gitignore
│
├── firmware/
│   ├── windows/
│   └── kali/
│
├── docs/
│   ├── hardware.md
│   ├── windows.md
│   └── kali.md
│
└── images/
```

## Responsible Use

This repository is intended for authorized security research, education, and
isolated laboratory testing. Do not use the hardware or firmware to access
accounts, devices, or systems without explicit authorization.

The repository intentionally keeps credentials and other environment-specific
configuration out of version control.

## Status

Early-stage project. Documentation and safe HID demonstrations are being
developed before the repository is considered complete.
