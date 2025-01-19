# README - Projeto de Simulação com LEDs e Buzzer - Subgrupo 8

## Descrição do Projeto
Este projeto implementa um sistema de controle para LEDs (verde, vermelho, azul) e um buzzer usando um microcontrolador. O código permite que o usuário interaja com o sistema através de um teclado matricial (4x4), acionando os dispositivos com diferentes teclas. O objetivo é simular o funcionamento em um ambiente virtual usando o [Wokwi Simulator](https://wokwi.com/).

## Estrutura do Projeto
A estrutura do projeto conta com:
- Um **arquivo principal**, responsável por centralizar a execução do código e gerenciar as interações com os dispositivos.
- **Arquivos secundários**, responsáveis por implementar as funcionalidades específicas de cada dispositivo (LED verde, LED vermelho, LED azul, todos os LEDs juntos e buzzer). 

Cada membro da equipe desenvolveu sua funcionalidade em arquivos separados em suas respectivas branches, o que ajudou a reduzir conflitos durante os pull requests no GitHub.

## Funcionalidades
1. **LED Verde** (Responsável: Alisson):
   - Liga o LED verde ao pressionar a tecla **'A'**.
2. **LED Vermelho** (Responsável: Lucas):
   - Liga o LED vermelho ao pressionar a tecla **'B'**.
3. **LED Azul** (Responsável: Caíque):
   - Liga o LED azul ao pressionar a tecla **'C'**.
4. **Todos os LEDs ao mesmo tempo** (Responsável: Felipe Santana):
   - Pisca todos os LEDs simultaneamente ao pressionar a tecla **'1'**.
5. **Buzzer** (Responsável: Felipe Silva, líder do projeto):
   - Aciona o buzzer ao pressionar a tecla **'D'**.

**Observações:** 
1. Embora Lucas seja responsável pelo LED vermelho, ele não consta como colaborador no GitHub, pois estava sem acesso ao computador e enviou sua contribuição ao líder (Felipe Silva).
2. Rivaldo Matias não consta como colaborador direto no projeto devido a problemas técnicos na configuração do Visual Studio Code em seu computador pessoal que havia comentado com a professora Aline na mentoria do dia 16/01/2025. Além disso, ele enfrentou questões pessoais importantes durante o desenvolvimento do projeto. No entanto, Rivaldo esteve sempre disponível para auxiliar o grupo sempre que possível, contribuindo com orientações e sugestões.
3. Breno não pôde colaborar diretamente com o desenvolvimento do projeto devido a demandas excessivas em seu trabalho. Apesar disso, ele manteve-se disponível para ajudar o grupo por meio do WhatsApp, participando de discussões e oferecendo suporte quando necessário.

## Como Funciona
### Fluxo Principal:
1. O teclado matricial (4x4) é configurado para mapear as teclas a funções específicas.
2. Quando uma tecla é pressionada:
   - **'A'** aciona o LED verde.
   - **'B'** aciona o LED vermelho.
   - **'C'** aciona o LED azul.
   - **'1'** faz todos os LEDs piscarem ao mesmo tempo.
   - **'D'** aciona o buzzer.
3. Cada funcionalidade é mantida ativa por 1 segundo (com exceção do piscar de todos os LEDs e do buzzer, que seguem suas lógicas específicas).

## Instruções para Usar no Wokwi Simulator

1. **Configurar o Ambiente:**
   - Certifique-se de que você possui a extensão do Wokwi instalada no seu editor de código.
   - O projeto já contém os arquivos `wokwi.toml` e `diagram.json`, que definem os componentes necessários para a simulação.

2. **Compilar o Projeto:**
   - Antes de executar, compile o código para garantir que todas as dependências e configurações estejam corretas.

3. **Testar a Simulação:**
   - Inicie a simulação no Wokwi e pressione as teclas do teclado matricial para acionar os LEDs e o buzzer conforme descrito.

## Estrutura de Funções
### LEDs
- **LED Verde:**
  - `initLed()`: Inicializa o LED verde.
  - `ledOn()`: Liga o LED verde.
  - `ledOff()`: Desliga o LED verde.
- **LED Vermelho:**
  - `setupRed()`: Inicializa o LED vermelho.
  - `ligar_ledRed()`: Liga o LED vermelho.
  - `desligar_ledRed()`: Desliga o LED vermelho.
- **LED Azul:**
  - `setup()`: Inicializa o LED azul.
  - `ligar_led()`: Liga o LED azul.
  - `desligar_led()`: Desliga o LED azul.

### Todos os LEDs
- **Todos os LEDs juntos:**
  - `initLeds()`: Inicializa todos os LEDs.
  - `BlinkLeds()`: Pisca todos os LEDs simultaneamente.

### Buzzer
- **Buzzer:**
  - `setupBuzzer()`: Inicializa o buzzer.
  - `buzzerOn()`: Liga o buzzer.
  - `buzzerOff()`: Desliga o buzzer.

## Créditos
- **Alisson**: Desenvolvimento do controle para o LED verde.
- **Lucas**: Desenvolvimento do controle para o LED vermelho.
- **Caíque**: Desenvolvimento do controle para o LED azul.
- **Felipe Santana**: Implementação da funcionalidade de todos os LEDs piscando juntos.
- **Felipe Silva (Líder)**: Implementação do controle do buzzer e integração geral do projeto.

