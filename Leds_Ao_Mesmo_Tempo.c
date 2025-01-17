#include "pico/stdlib.h"
#include <stdio.h>

#define Led_Green_Pin 11
#define Led_Blue_Pin 12
#define Led_Red_Pin 13

const TimeOn = 500;
const TimeOff = 500;

// Função de setup dos leds
void initLeds (){
   
    gpio_init(Led_Green_Pin);
    gpio_init(Led_Blue_Pin);
    gpio_init(Led_Red_Pin);

    gpio_set_dir(Led_Green_Pin, GPIO_OUT);
    gpio_set_dir(Led_Blue_Pin, GPIO_OUT);
    gpio_set_dir(Led_Red_Pin, GPIO_OUT);

}

void BlinkLeds (){

    gpio_put(Led_Green_Pin, 1);
    gpio_put(Led_Blue_Pin, 1);
    gpio_put(Led_Red_Pin, 1);
    printf("\n Leds ON.");
    sleep_ms(TimeOn);

    gpio_put(Led_Green_Pin, 0);
    gpio_put(Led_Blue_Pin, 0);
    gpio_put(Led_Red_Pin, 0);
    printf("\n Leds OFF.");
    sleep_ms(TimeOff);
}