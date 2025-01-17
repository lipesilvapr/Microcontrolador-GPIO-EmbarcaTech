#include "pico/stdlib.h"

#define LED_PIN_BLUE 12   // Define o pino conectado para o led azul.

void setup() {
    gpio_init(LED_PIN_BLUE);
    gpio_set_dir(LED_PIN_BLUE, GPIO_OUT);  // Pino configurado como saída para o led
}

void ligar_led() {
    gpio_put(LED_PIN_BLUE, 1); // Liga o led.
}

void desligar_led() {
    gpio_put(LED_PIN_BLUE, 0); // Desliga o led.
}