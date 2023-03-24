#include<Arduino.h>
#include"Brain.h"
#include"DicisionButton.h"

DicisionButton::DicisionButton(int button_pin, BTN_MODE mode, void*function) {
  if (mode == D_READ) {
    PinNumber = button_pin;
    pinMode(PinNumber, INPUT);
  }
}

int DicisionButton::Read() {
  return digitalRead(PinNumber);
}
