#include <stdio.h>
#include "pico/stdlib.h"


#define LED_PIN_BLUE 8   //Define o pino conectado para o led azul.

void setup(){
  pinMode(LED_PIN_BLUE, OUTPUT);  //Pino configurado como saída para o led
}
void loop(){
  digitalWrite(LED_PIN_BLUE, HIGH); //Liga o led.
  delay(1000);  //Aguarda 1 segundo.
  digitalWrite(LED_PIN_BLUE, LOW); //Desliga o led.
  delay(1000);  //Aguarda 1 segundo.
}