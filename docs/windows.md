# Windows Lab Notes

The HID behavior has been tested in the project on:

- Windows 10
- Windows 11

The same general HID mechanism is used for both systems.

## What Is Being Studied

The Windows experiment focuses on:

1. USB HID enumeration.
2. Keyboard input generation.
3. Login-screen focus behavior.
4. Timing differences between host states.
5. Reliability of controlled keyboard events.

Keep experiments inside a dedicated test account or isolated virtual machine.

## Configuration

Do not commit real usernames, passwords, password lists, tokens, or other
environment-specific secrets to the repository.
