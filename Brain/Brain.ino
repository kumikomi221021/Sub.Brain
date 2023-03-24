#include<Arduino.h>
#include "AnotherTerminal.h"
#include "Brain.h"
#include "BluetoothSerial.h"
#include"DicisionButton.h"

AnotherTerminal BlueTooth;

DicisionButton btn_1 = DicisionButton(BTN_PIN1, D_READ, NULL);

void setup() {
  // put your setup code here, to run once:
  BlueTooth.Bluetooth_setUp();
}

void loop() {
  // put your main code here, to run repeatedly:

  if((btn_1.Read() == true)){

    int judgement = 0;

    BlueTooth.Bluetooth_transmission(judgement);

  }
}
