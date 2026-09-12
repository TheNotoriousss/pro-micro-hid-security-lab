# Kali Linux Lab Testing

## Objective

The Kali Linux portion of the project explores USB HID keyboard interaction
with a controlled Kali Linux login environment using an ATmega32U4-based
Pro Micro.

The test assumes that the username of the laboratory account is already
known. The experiment focuses on interaction with the password input interface.

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
│     Kali Linux        │
│                       │
│  Controlled Login     │
│      Interface        │
└───────────────────────┘
