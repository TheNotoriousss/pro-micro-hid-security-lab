# Kali Linux Lab Notes

The Kali experiment studies USB HID keyboard interaction with a controlled
login environment.

The intended lab workflow assumes that the test account username is known.

## Lab Model

```text
Pro Micro / ATmega32U4
        |
        | USB HID
        v
Kali Linux test system
        |
        v
Controlled login interface
```

## Configuration

Keep the test username and any test credentials local to the laboratory
environment. They should not be committed to Git.

## Notes

Login behavior can vary with the desktop environment and display/login manager.
Document the exact environment used for reproducible experiments.
