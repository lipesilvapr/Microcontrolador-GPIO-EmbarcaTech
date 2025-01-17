#include "pico/stdlib.h"
#include <stdio.h>


#define LED_GREEN_PIN 11
bool ledStatus = false;

//Função para configuração do LED
void initLed(){
    gpio_init(LED_GREEN_PIN);
    gpio_set_dir(LED_GREEN_PIN, GPIO_OUT);
    gpio_put(LED_GREEN_PIN, 0);

}

//Função para ligar o LED
void ledOn(){
    gpio_put(LED_GREEN_PIN, 1);
    printf("\nLed Verde Acesso.\n");
}

//Função para desligar o LED
void ledOff(){
    gpio_put(LED_GREEN_PIN, 0);
    printf("\nLede Verde Desligado.\n");
}


int main(){
    
    printf("\nLed Verde Iniciado");
    initLed();
    
}