#include <Keyboard.h>

// Safe HID demonstration.
// This example demonstrates keyboard enumeration and controlled input.
// It does not attempt to authenticate to an account.

void setup() {
  delay(3000);       // Allow USB HID enumeration.
  Keyboard.begin();

  Keyboard.print("HID test");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {
}
