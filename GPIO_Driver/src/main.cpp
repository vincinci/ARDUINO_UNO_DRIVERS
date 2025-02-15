#include <Arduino.h>
#include "GPIO_driver_UNO.h"

void setup() {
GPIO_pin_config(D0,OUTPUT_MODE);
}


void loop() {
  digitalWrite(0,HIGH);
  delay(100);
  digitalWrite(0,LOW);
  delay(100);
}
