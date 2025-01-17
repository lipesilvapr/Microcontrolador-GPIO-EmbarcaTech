#include "pico/stdlib.h"
#include <stdio.h>

#define Led_Green_Pin 11
#define Led_Blue_Pin 12
#define Led_Red_Pin 13


// Função de setup dos leds
void initLeds (){
   
    gpio_init(Led_Green_Pin);
    gpio_init(Led_Blue_Pin);
    gpio_init(Led_Red_Pin);

    gpio_set_dir(Led_Green_Pin, GPIO_OUT);
    gpio_set_dir(Led_Blue_Pin, GPIO_OUT);
    gpio_set_dir(Led_Red_Pin, GPIO_OUT);

}