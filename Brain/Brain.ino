#include "Brain.h"
#include "DicisionButton.h"
#include "AnotherTerminal.h"

//ToDo 後でボタン確認
DicisionButton btn = DicisionButton(int BTN_PIN1, BTN_MODE D_READ); /* 時間 */


void setup() {
  //電池を入れると電源が入りBluetooth接続
  //read()でメインのBluetoothからデータを取得する
  //Serial.begin()で子機のBluetoothとの通信速度(データ通信レート)を決める
}

void loop() {
  //ボタンが押されたかを検知？
  
}
