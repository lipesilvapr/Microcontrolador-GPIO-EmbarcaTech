#include "pico/stdlib.h"
#include <stdio.h>

// Declarações das funções do LED azul
extern void setup();
extern void ligar_led();
extern void desligar_led();

// Declarações das funções do LED verde
extern void initLed();
extern void ledOn();
extern void ledOff();

// Definições dos pinos do teclado
#define LINHAS 4
#define COLUNAS 4

// Pinagem das linhas e colunas do teclado
const uint pinos_linhas[LINHAS] = {8, 7, 6, 5}; 
const uint pinos_colunas[COLUNAS] = {4, 3, 2, 28}; 

// Mapeamento das teclas do teclado
const char teclas[LINHAS][COLUNAS] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

// Função para configurar o teclado
void configurar_teclado() {
    for (int i = 0; i < LINHAS; i++) {
        gpio_init(pinos_linhas[i]);
        gpio_set_dir(pinos_linhas[i], GPIO_OUT);
    }
    for (int i = 0; i < COLUNAS; i++) {
        gpio_init(pinos_colunas[i]);
        gpio_set_dir(pinos_colunas[i], GPIO_IN);
        gpio_pull_down(pinos_colunas[i]);
    }
}

// Função para ler o teclado
char ler_teclado() {
    for (int linha = 0; linha < LINHAS; linha++) {
        gpio_put(pinos_linhas[linha], 1);
        for (int coluna = 0; coluna < COLUNAS; coluna++) {
            if (gpio_get(pinos_colunas[coluna])) {
                gpio_put(pinos_linhas[linha], 0);
                return teclas[linha][coluna];
            }
        }
        gpio_put(pinos_linhas[linha], 0);
    }
    return '\0'; 
}

int main() {
    stdio_init_all(); 
    configurar_teclado();
    setup();  // Configura o LED azul
    initLed(); // Configura o LED verde

    printf("Teste do teclado iniciado. Pressione uma tecla...\n");

    while (true) {
        char tecla = ler_teclado();
        if (tecla != '\0') {
            printf("Tecla pressionada: %c\n", tecla); // Exibe a tecla no terminal

            // Verifica se a tecla pressionada é 'C' (LED azul)
            if (tecla == 'C') {
                printf("Ligando o LED azul...\n");
                ligar_led(); // Liga o LED azul
                sleep_ms(1000); // Mantém o LED azul ligado por 1 segundo
                desligar_led(); // Desliga o LED azul
                printf("LED azul desligado.\n");
            }

            // Verifica se a tecla pressionada é 'A' (LED verde)
            if (tecla == 'A') {
                printf("Ligando o LED verde...\n");
                ledOn(); // Liga o LED verde
                sleep_ms(1000); // Mantém o LED verde ligado por 1 segundo
                ledOff(); // Desliga o LED verde
                printf("LED verde desligado.\n");
            }

            sleep_ms(300); // Debounce (evita leituras múltiplas)
        }

        sleep_ms(10); 
    }
}