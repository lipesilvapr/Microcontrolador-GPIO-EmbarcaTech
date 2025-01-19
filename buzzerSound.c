#include "pico/stdlib.h"
#include <stdio.h>

#define BUZZER_PIN 21  // Define o pino conectado ao buzzer

// Função para configurar o buzzer
void setupBuzzer() {
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_put(BUZZER_PIN, 0);  // Garante que o buzzer comece desligado
}

// Função para emitir um som no buzzer
void buzzerOn() {
    int duracao_ms = 500;  // Duração do som em milissegundos (500 ms)
    int intervalo_us = 500;  // Intervalo entre ligar/desligar o buzzer (500 µs)

    int tempo_total_us = duracao_ms * 1000;  // Converte a duração para microssegundos
    int tempo_decorrido_us = 0;

    while (tempo_decorrido_us < tempo_total_us) {
        gpio_put(BUZZER_PIN, 1);  // Liga o buzzer
        sleep_us(intervalo_us);   // Espera um pouco
        gpio_put(BUZZER_PIN, 0);  // Desliga o buzzer
        sleep_us(intervalo_us);   // Espera um pouco
        tempo_decorrido_us += 2 * intervalo_us;  // Atualiza o tempo decorrido
    }
    printf("\nBuzzer ligado.\n");
}

// Função para desligar o buzzer
void buzzerOff() {
    gpio_put(BUZZER_PIN, 0);  // Desliga o buzzer
    printf("\nBuzzer desligado.\n");
}