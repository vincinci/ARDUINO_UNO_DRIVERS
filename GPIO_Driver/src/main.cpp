#include <Arduino.h>
#include "GPIO_driver_UNO.h"

uint8_t val;

void setup() {
GPIO_pin_config(D12,INPUT_MODE);
Serial.begin(9600);
}


void loop() {
  val = GPIO_digital_read(D12);
  delay(1000);
  Serial.println(val);
  val = GPIO_digital_read(D12);
  delay(1000);
  Serial.println(val);
  val = GPIO_digital_read(D12);
  delay(1000);
  Serial.println(val);
}
