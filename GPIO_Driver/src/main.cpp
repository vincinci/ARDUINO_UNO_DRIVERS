#include <Arduino.h>
#include "GPIO_driver_UNO.h"

uint8_t val;

void setup() {
   PWM_config_pin(9);              // Use pin 9 (OC1A)
   PWM_set_frequency_and_dutycycle(9, 500, 50);
   GPIO_pin_config(D13,OUTPUT_MODE);
   Serial.begin(9600);
}


void loop() {
   PWM_set_frequency_and_dutycycle(9, 500, 50);
   GPIO_digital_write(D13, HIGH_STATE);
   delay(500);
   GPIO_digital_write(D13, HIGH_STATE);
   delay(500);
}
