#include "pico/stdlib.h"

#define LED_PIN_RED 13   // Define o pino conectado para o led vermelho.

void setupRed() {
    gpio_init(LED_PIN_RED);
    gpio_set_dir(LED_PIN_RED, GPIO_OUT);  // Pino configurado como saída para o led
}

void ligar_ledRed() {
    gpio_put(LED_PIN_RED, 1); // Liga o led.
}

void desligar_ledRed() {
    gpio_put(LED_PIN_RED, 0); // Desliga o led.
}