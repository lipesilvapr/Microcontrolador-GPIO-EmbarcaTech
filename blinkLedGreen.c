#include "pico/stdlib.h"
#include <stdio.h>


#define LED_GREEN_PIN 11

//Função para configuração do LED
void initLed(){
    gpio_init(LED_GREEN_PIN);
    gpio_set_dir(LED_GREEN_PIN, GPIO_OUT);
    gpio_put(LED_GREEN_PIN, 0);

}

int main(){

    initLed();
    
}