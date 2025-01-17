#include "pico/stdlib.h"
#include <stdio.h>

#define led_pin_red 13
#define led_pin_blue 12
#define led_pin_green 11

const int tempo = 500;

//Blink dos Leds 
void BlinkLeds(){
      gpio_put(led_pin_red, true);
      gpio_put(led_pin_blue, true);
      gpio_put(led_pin_green, true);
      sleep_ms(tempo);
      gpio_put(led_pin_red, false);
      gpio_put(led_pin_blue, false);
      gpio_put(led_pin_green, false);
      sleep_ms(tempo);
}

//Inicialização do Led
void initLeds(){
  gpio_init(led_pin_red);
  gpio_init(led_pin_blue);
  gpio_init(led_pin_green);
  printf("\n Led ON!!!");

  gpio_set_dir(led_pin_red, GPIO_OUT);
  gpio_set_dir(led_pin_blue, GPIO_OUT);
  gpio_set_dir(led_pin_green, GPIO_OUT);
  printf("\n Led OFF!!!");
}

