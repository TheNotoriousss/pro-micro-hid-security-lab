# Windows Lab Testing

## Supported Versions

The project has been tested with:

- Windows 10
- Windows 11

The same ATmega32U4 HID firmware is used for both operating systems.

## Objective

The Windows experiment demonstrates how an ATmega32U4-based Pro Micro can
enumerate as a USB HID keyboard and generate keyboard input on a Windows
system.

The experiment also examines how timing and interface state affect HID input
during controlled laboratory testing.

## Test Architecture

```text
┌───────────────────────┐
│       Pro Micro       │
│                       │
│     ATmega32U4        │
│                       │
│      USB HID          │
│      Keyboard         │
└───────────┬───────────┘
            │
            │ USB
            ▼
┌───────────────────────┐
│    Windows Host       │
│                       │
│   Windows 10 / 11     │
└───────────────────────┘
