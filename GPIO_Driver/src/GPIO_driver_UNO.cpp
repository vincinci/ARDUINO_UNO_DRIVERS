#include "GPIO_driver_UNO.h"

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