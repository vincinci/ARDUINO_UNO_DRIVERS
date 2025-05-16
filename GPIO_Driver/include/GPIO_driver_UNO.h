#ifndef GPIO_DRIVER_UNO_H
#define GPIO_DRIVER_UNO_H

#include <stdint.h>

/*
 * $date: Feb 15,2025
 * $Project: GPIO driver for Arduino UNO
 * 
 * 
 * 
 */

/*
 * PIN mapping
 * Digital Pin 0 .. 7   | PORT D
 * Digital Pin 8 .. 13  | PORT B
 * Digital Pin 14 .. 19 | PORT C
 *  
 */ 

#define PIN_B   (* ((volatile uint8_t *) (0x23)))
#define DDR_B   (* ((volatile uint8_t *) (0x24)))
#define PORT_B  (* ((volatile uint8_t *) (0x25)))

#define PIN_C   (* ((volatile uint8_t *) (0x26)))
#define DDR_C   (* ((volatile uint8_t *) (0x27)))
#define PORT_C  (* ((volatile uint8_t *) (0x28)))

#define PIN_D   (* ((volatile uint8_t *) (0x29)))
#define DDR_D   (* ((volatile uint8_t *) (0x2A)))
#define PORT_D  (* ((volatile uint8_t *) (0x2B)))

// GPIO mode enum
typedef enum
{
    INPUT_MODE,
    OUTPUT_MODE,
}GPIO_mode_t;

//GPIO pins enum
typedef enum
{
    D0,
    D1,
    D2,
    D3,
    D4,
    D5,
    D6,
    D7,
    D8,
    D9,
    D10,
    D11,
    D12,
    D13,
    D14,
    D15,
    D16,
    D17,
    D18,
    D19
}GPIO_pins_t;

//GPIO pullup resistor enable disable
typedef enum
{
    Disable,
    Enable
}GPIO_pull_up_t;

typedef enum
{
    LOW_STATE,
    HIGH_STATE
}GPIO_state_t;

void GPIO_pin_config(GPIO_pins_t pin_num,GPIO_mode_t mode);
void GPIO_digital_write(GPIO_pins_t pin_num, GPIO_state_t state);
uint8_t GPIO_digital_read(GPIO_pins_t pin_num);
uint8_t GPIO_digital_read(GPIO_pins_t pin_num, GPIO_pull_up_t status);
void PWM_config_pin(uint8_t pin_num);
void PWM_set_frequency_and_dutycycle(uint8_t pin_num, uint16_t frequency, float dutycycle);
#endif