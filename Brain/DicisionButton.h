#pragma once

typedef enum {
  D_READ,
  INTERRPUT
} BTN_MODE;

class DicisionButton {

  private:
    int PinNumber;

  public:
    DicisionButton(int button_pin, BTN_MODE mode, void*function);
    int Read();
};
