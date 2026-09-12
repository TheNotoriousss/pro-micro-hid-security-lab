# Pro Micro HID Security Lab

A hardware security research and educational project built using an
ATmega32U4-based Pro Micro to explore USB HID keyboard emulation and
controlled interaction with operating-system login interfaces.

The project demonstrates how a microcontroller with native USB support can
communicate with a computer as a Human Interface Device (HID) and generate
keyboard input.

---

## Educational Purpose

This project is developed for educational purposes, cybersecurity learning,
and controlled laboratory experimentation.

It is intended to demonstrate USB HID concepts, microcontroller-based keyboard
emulation, and operating-system interaction using an ATmega32U4-based Pro
Micro.

Use this project only on systems and accounts that you own or have explicit
permission to test.

The author is not responsible for misuse of this project or for any damage,
data loss, or unauthorized access resulting from its use.

---

## Project Overview

The project uses the native USB capabilities of the ATmega32U4 to make the
Pro Micro appear to a host computer as a USB keyboard.

The project has been tested with:

- Windows 10
- Windows 11
- Kali Linux

Windows 10 and Windows 11 use the same firmware implementation, while Kali
Linux has a separate implementation because of differences in its login
interface and input behavior.

---

## How It Works

```text
                    +----------------------+
                    |      Pro Micro       |
                    |                      |
                    |      ATmega32U4      |
                    |                      |
                    |       USB HID        |
                    |       Keyboard       |
                    +----------+-----------+
                               |
                               | USB
                               v
                    +----------------------+
                    |    Host Computer     |
                    |                      |
                    |  Windows 10 / 11     |
                    |     Kali Linux       |
                    +----------------------+
```

The ATmega32U4 provides native USB functionality, allowing the
microcontroller to communicate with the host as a USB HID device.

The firmware uses the Arduino `Keyboard.h` library to generate keyboard
input.

---

## Hardware

### Pro Micro

The project uses an ATmega32U4-based Pro Micro development board.

### Hardware Requirements

| Component | Specification |
|---|---|
| Development board | Pro Micro |
| Microcontroller | ATmega32U4 |
| USB interface | Micro-USB |
| HID capability | Native USB HID |
| HID device | Keyboard |
| Programming environment | Arduino-compatible |

### Why ATmega32U4?

The ATmega32U4 includes native USB functionality.

This is important for the project because the microcontroller can implement
USB device functionality directly and enumerate as a HID keyboard when
connected to a compatible host.

---

## Supported Operating Systems

### Windows

The project has been tested on:

- Windows 10
- Windows 11

The same firmware implementation is used for both versions.

### Kali Linux

A separate firmware implementation is provided for Kali Linux.

The Kali laboratory setup assumes that the username of the test account is
already known.

Login behavior can vary depending on the desktop environment, display
manager, and system configuration.

---

## Project Structure

```text
pro-micro-hid-security-lab/
|
+-- firmware/
|   +-- windows/
|   +-- kali/
|
+-- docs/
|   +-- hardware.md
|   +-- windows.md
|   +-- kali.md
|
+-- images/
|
+-- .gitignore
+-- LICENSE
+-- README.md
```

---

## Documentation

- [Hardware Documentation](docs/hardware.md)
- [Windows Testing](docs/windows.md)
- [Kali Linux Testing](docs/kali.md)

---

## Technologies

- Arduino
- ATmega32U4
- USB HID
- Keyboard emulation
- Windows
- Linux
- Cybersecurity

---

## Limitations

HID behavior depends on the host operating system, login interface,
configuration, and timing.

Results observed on one system may not be identical on another system.

The project should therefore be considered a controlled laboratory
experiment rather than a universal automation solution.

---

## Future Development

- Additional HID experiments
- More operating-system testing
- Hardware status indicators
- Improved configuration management
- Test-result logging
- Detailed timing analysis
- Additional security-lab experiments

---

## License

This project is released under the MIT License.

See [LICENSE](LICENSE) for details.

---

## Author

Developed as a cybersecurity and hardware-security learning project.
