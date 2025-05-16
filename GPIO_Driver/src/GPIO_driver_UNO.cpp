#include "GPIO_driver_UNO.h"
#include <avr/io.h>

void GPIO_pin_config(GPIO_pins_t pin_num, GPIO_mode_t mode )
{

    switch (pin_num)
    {
        //pin 0 or D0 selected
        case 0:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 0);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 0);
            }
            break;

        //pin 1 or D1 selected
        case 1:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 1);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 1);
            }
            break;

        //pin 2 or D2 selected
        case 2:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 2);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 2);
            }
            break;

        //pin 3 or D3 selected
        case 3:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 3);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 3);
            }
            break;
        
        //pin 4 or D4 selected
        case 4:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 4);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 4);
            }
            break;
        
        //pin 5 or D5 selected
        case 5:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 5);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 5);
            }
            break;
        
        //pin 6 or D6 selected
        case 6:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 6);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 6);
            }
            break;

        //pin 7 or D7 selected
        case 7:
            if(mode == 0)
            {
                DDR_D &= ~ (1 << 7);
            }
            else if(mode == 1)
            {

                DDR_D |= (1 << 7);
            }
            break;

        //pin 8 or D8 selected
        case 8:
            if(mode == 0)
            {
                DDR_B &= ~ (1 << 0);
            }
            else if(mode == 1)
            {

                DDR_B |= (1 << 0);
            }
            break;

        //pin 9 or D9 selected
        case 9:
            if(mode == 0)
            {
                DDR_B &= ~ (1 << 1);
            }
            else if(mode == 1)
            {

                DDR_B |= (1 << 1);
            }
            break;

        //pin 10 or D10 selected    
        case 10:
            if(mode == 0)
            {
                DDR_B &= ~ (1 << 2);
            }
            else if(mode == 1)
            {

                DDR_B |= (1 << 2);
            }
            break;

        //pin 11 or D11 selected    
        case 11:
            if(mode == 0)
            {
                DDR_B &= ~ (1 << 3);
            }
            else if(mode == 1)
            {

                DDR_B |= (1 << 3);
            }
            break;

        //pin 12 or D12 selected    
        case 12:
            if(mode == 0)
            {
                DDR_B &= ~ (1 << 4);
            }
            else if(mode == 1)
            {

                DDR_B |= (1 << 4);
            }
            break;

        //pin 13 or D13 selected    
        case 13:
            if(mode == 0)
            {
                DDR_B &= ~ (1 << 5);
            }
            else if(mode == 1)
            {

                DDR_B |= (1 << 5);
            }
            break;

        //pin 14 or D14 selected    
        case 14:
            if(mode == 0)
            {
                DDR_C &= ~ (1 << 0);
            }
            else if(mode == 1)
            {

                DDR_C |= (1 << 0);
            }
            break;

        //pin 15 or D15 selected    
        case 15:
            if(mode == 0)
            {
                DDR_C &= ~ (1 << 1);
            }
            else if(mode == 1)
            {

                DDR_C |= (1 << 1);
            }
            break;

        //pin 16 or D16 selected    
        case 16:
            if(mode == 0)
            {
                DDR_C &= ~ (1 << 2);
            }
            else if(mode == 1)
            {

                DDR_C |= (1 << 2);
            }
            break;

        //pin 17 or D17 selected 
        case 17:
            if(mode == 0)
            {
                DDR_C &= ~ (1 << 3);
            }
            else if(mode == 1)
            {

                DDR_C |= (1 << 3);
            }
            break;

        //pin 18 or D18 selected    
        case 18:
            if(mode == 0)
            {
                DDR_C &= ~ (1 << 4);
            }
            else if(mode == 1)
            {

                DDR_C |= (1 << 4);
            }
            break;

        //pin 19 or D19 selected    
        case 19:
            if(mode == 0)
            {
                DDR_C &= ~ (1 << 5);
            }
            else if(mode == 1)
            {

                DDR_C |= (1 << 5);
            }
            break;


    }

}
void GPIO_digital_write(GPIO_pins_t pin_num, GPIO_state_t state)
{
    switch (pin_num)
    {
        //pin 0 or D0 selected
        case 0:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 0);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 0);
            }
            break;

        //pin 1 or D1 selected
        case 1:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 1);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 1);
            }
            break;

        //pin 2 or D2 selected
        case 2:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 2);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 2);
            }
            break;

        //pin 3 or D3 selected
        case 3:
            if(state == 0)
            {
               PORT_D &= ~ (1 << 3);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 3);
            }
            break;
        
        //pin 4 or D4 selected
        case 4:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 4);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 4);
            }
            break;
        
        //pin 5 or D5 selected
        case 5:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 5);
            }
            else if(state == 1)
            {

               PORT_D |= (1 << 5);
            }
            break;
        
        //pin 6 or D6 selected
        case 6:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 6);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 6);
            }
            break;

        //pin 7 or D7 selected
        case 7:
            if(state == 0)
            {
                PORT_D &= ~ (1 << 7);
            }
            else if(state == 1)
            {

                PORT_D |= (1 << 7);
            }
            break;

        //pin 8 or D8 selected
        case 8:
            if(state == 0)
            {
                PORT_B &= ~ (1 << 0);
            }
            else if(state == 1)
            {

               PORT_B |= (1 << 0);
            }
            break;

        //pin 9 or D9 selected
        case 9:
            if(state == 0)
            {
                PORT_B &= ~ (1 << 1);
            }
            else if(state == 1)
            {

                PORT_B |= (1 << 1);
            }
            break;

        //pin 10 or D10 selected    
        case 10:
            if(state == 0)
            {
                PORT_B &= ~ (1 << 2);
            }
            else if(state == 1)
            {

                PORT_B |= (1 << 2);
            }
            break;

        //pin 11 or D11 selected    
        case 11:
            if(state == 0)
            {
                PORT_B &= ~ (1 << 3);
            }
            else if(state == 1)
            {

                PORT_B |= (1 << 3);
            }
            break;

        //pin 12 or D12 selected    
        case 12:
            if(state == 0)
            {
                PORT_B &= ~ (1 << 4);
            }
            else if(state == 1)
            {

                PORT_B |= (1 << 4);
            }
            break;

        //pin 13 or D13 selected    
        case 13:
            if(state == 0)
            {
                PORT_B &= ~ (1 << 5);
            }
            else if(state == 1)
            {

                PORT_B |= (1 << 5);
            }
            break;

        //pin 14 or D14 selected    
        case 14:
            if(state == 0)
            {
                PORT_C &= ~ (1 << 0);
            }
            else if(state == 1)
            {

                PORT_C |= (1 << 0);
            }
            break;

        //pin 15 or D15 selected    
        case 15:
            if(state == 0)
            {
                PORT_C &= ~ (1 << 1);
            }
            else if(state == 1)
            {

                PORT_C |= (1 << 1);
            }
            break;

        //pin 16 or D16 selected    
        case 16:
            if(state == 0)
            {
                PORT_C &= ~ (1 << 2);
            }
            else if(state == 1)
            {

                PORT_C |= (1 << 2);
            }
            break;

        //pin 17 or D17 selected 
        case 17:
            if(state == 0)
            {
                PORT_C &= ~ (1 << 3);
            }
            else if(state == 1)
            {

                PORT_C |= (1 << 3);
            }
            break;

        //pin 18 or D18 selected    
        case 18:
            if(state == 0)
            {
                PORT_C &= ~ (1 << 4);
            }
            else if(state == 1)
            {

                PORT_C |= (1 << 4);
            }
            break;

        //pin 19 or D19 selected    
        case 19:
            if(state == 0)
            {
                PORT_C &= ~ (1 << 5);
            }
            else if(state == 1)
            {

                PORT_C |= (1 << 5);
            }
            break;


    }
}

// Read the state of a pin (HIGH or LOW)
uint8_t GPIO_digital_read(GPIO_pins_t pin_num)
{
    switch (pin_num)
    {
        case 0:  return (PIN_D & (1 << 0)) ? 1 : 0;
        case 1:  return (PIN_D & (1 << 1)) ? 1 : 0;
        case 2:  return (PIN_D & (1 << 2)) ? 1 : 0;
        case 3:  return (PIN_D & (1 << 3)) ? 1 : 0;
        case 4:  return (PIN_D & (1 << 4)) ? 1 : 0;
        case 5:  return (PIN_D & (1 << 5)) ? 1 : 0;
        case 6:  return (PIN_D & (1 << 6)) ? 1 : 0;
        case 7:  return (PIN_D & (1 << 7)) ? 1 : 0;
        case 8:  return (PIN_B & (1 << 0)) ? 1 : 0;
        case 9:  return (PIN_B & (1 << 1)) ? 1 : 0;
        case 10: return (PIN_B & (1 << 2)) ? 1 : 0;
        case 11: return (PIN_B & (1 << 3)) ? 1 : 0;
        case 12: return (PIN_B & (1 << 4)) ? 1 : 0;
        case 13: return (PIN_B & (1 << 5)) ? 1 : 0;
        case 14: return (PIN_C & (1 << 0)) ? 1 : 0;
        case 15: return (PIN_C & (1 << 1)) ? 1 : 0;
        case 16: return (PIN_C & (1 << 2)) ? 1 : 0;
        case 17: return (PIN_C & (1 << 3)) ? 1 : 0;
        case 18: return (PIN_C & (1 << 4)) ? 1 : 0;
        case 19: return (PIN_C & (1 << 5)) ? 1 : 0;
        default: return 0;
    }
}

// Read the state of a pin (HIGH or LOW)
uint8_t GPIO_digital_read(GPIO_pins_t pin_num, GPIO_pull_up_t status)
{
    switch (pin_num)
    {
        case 0:  return (PIN_D & (1 << 0)) ? 1 : 0;
        case 1:  return (PIN_D & (1 << 1)) ? 1 : 0;
        case 2:  return (PIN_D & (1 << 2)) ? 1 : 0;
        case 3:  return (PIN_D & (1 << 3)) ? 1 : 0;
        case 4:  return (PIN_D & (1 << 4)) ? 1 : 0;
        case 5:  return (PIN_D & (1 << 5)) ? 1 : 0;
        case 6:  return (PIN_D & (1 << 6)) ? 1 : 0;
        case 7:  return (PIN_D & (1 << 7)) ? 1 : 0;
        case 8:  return (PIN_B & (1 << 0)) ? 1 : 0;
        case 9:  return (PIN_B & (1 << 1)) ? 1 : 0;
        case 10: return (PIN_B & (1 << 2)) ? 1 : 0;
        case 11: return (PIN_B & (1 << 3)) ? 1 : 0;
        case 12: return (PIN_B & (1 << 4)) ? 1 : 0;
        case 13: return (PIN_B & (1 << 5)) ? 1 : 0;
        case 14: return (PIN_C & (1 << 0)) ? 1 : 0;
        case 15: return (PIN_C & (1 << 1)) ? 1 : 0;
        case 16: return (PIN_C & (1 << 2)) ? 1 : 0;
        case 17: return (PIN_C & (1 << 3)) ? 1 : 0;
        case 18: return (PIN_C & (1 << 4)) ? 1 : 0;
        case 19: return (PIN_C & (1 << 5)) ? 1 : 0;
        default: return 0;
    }
}   


void PWM_config_pin(uint8_t pin_num) {
    switch (pin_num) {
        case 9:
            DDR_B |= (1 << 1);
            break;
        case 10:
            DDR_B |= (1 << 2);
            break;
    }
}

void PWM_set_frequency_and_dutycycle(uint8_t pin_num, uint16_t frequency, float dutycycle) {
    const uint16_t prescaler = 8;
    const uint32_t f_cpu = 16000000;
    TCCR1A = 0;
    TCCR1B = 0;
    
    TCCR1A |= (1 << WGM11) | (1 << WGM10);
    TCCR1B |= (1 << WGM12) | (1 << WGM13);
    TCCR1B |= (1 << CS11); // set prescaler = 8
    TCCR1B |= (1 << COM1A1); 

    ICR1 = (uint16_t)(f_cpu / (prescaler * frequency))-1; // TOP value
    OCR1A = (((uint16_t)(dutycycle /100)) * ICR1);

    // switch (pin_num) {
    //     case 9:
    //         TCCR1A |= (1 << COM1A1);
    //         break;
    //     case 10:
    //         TCCR1A |= (1 << COM1B1);
    //         break;
    // }
}
