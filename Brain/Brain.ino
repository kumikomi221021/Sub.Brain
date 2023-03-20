#include<Arduino.h>
#include "AnotherTerminal.h"

Bluetoothset BlueTooth;

void setup() {
  // put your setup code here, to run once:
  AnotherTerminal.Bluetooth_setUp();
}

void loop() {
  // put your main code here, to run repeatedly:
  AnotherTerminal.Bluetooth_transmission();
}
