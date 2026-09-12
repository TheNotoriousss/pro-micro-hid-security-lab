# Hardware

## Pro Micro

This project uses a Pro Micro-compatible development board built around the
ATmega32U4 microcontroller.

The ATmega32U4 is particularly useful for HID research because it provides
native USB functionality. This allows the microcontroller to communicate
with a host computer as a USB Human Interface Device (HID).

## Hardware Specifications

| Component | Specification |
|---|---|
| Development board | Pro Micro |
| Microcontroller | ATmega32U4 |
| USB interface | Micro-USB |
| HID capability | Native USB HID |
| Primary HID device | Keyboard |
| Firmware environment | Arduino-compatible |

## Why ATmega32U4?

Unlike many basic Arduino boards that rely on a separate USB-to-serial
interface, the ATmega32U4 has native USB support.

This makes it possible for firmware to implement USB device classes such as
HID.

For this project, the important consequence is that the board can enumerate
as a keyboard when connected to a compatible host.

## USB HID Architecture

```text
┌─────────────────────────────┐
│        Pro Micro            │
│                             │
│       ATmega32U4            │
│                             │
│     ┌─────────────────┐     │
│     │   USB HID       │     │
│     │    Keyboard     │     │
│     └────────┬────────┘     │
└──────────────┼──────────────┘
               │
               │ USB
               ▼
┌─────────────────────────────┐
│       Host Computer         │
│                             │
│  Windows 10 / Windows 11    │
│        Kali Linux           │
└─────────────────────────────┘
