#include <Arduino.h>
#include "GPIO_driver_UNO.h"

void setup() {
GPIO_pin_config(D12,OUTPUT_MODE);
}


void loop() {
  GPIO_digital_write(D12,HIGH_STATE);
  delay(500);
  GPIO_digital_write(D12,LOW_STATE);
  delay(100);
  GPIO_digital_read (D12);
  delay(100);
}
