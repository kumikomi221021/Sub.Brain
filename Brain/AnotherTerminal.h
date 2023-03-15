#pragma once

class AnotherTerminal{

  private:
  String MACadd = "";
  uint8_t address[6];
  
  public:
  int BluetoothSet();
  Serial.println();
  Serial.begin();  
  Serial.println();
}
