//This DigiSpark script opens up Rick Astley's - Never Gonna Give You Up and also a fake Windows update screen and then maximizes it using F11
#include "DigiKeyboard.h"
#define KEY_SLASH 0x54 

// link do youtbe encurtado http://twixar.me/7xV1
// link do fake update windows 98 http://twixar.me/kxV1

void setup() {
  
}
void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("http?"); // essa linha inicia o link que sera dividido e trocamos o : por ?
  DigiKeyboard.sendKeyStroke(KEY_SLASH); // essa linha adiciona o /
  DigiKeyboard.sendKeyStroke(KEY_SLASH); // essa linha adiciona o /
  DigiKeyboard.print("twixar.me"); // essa linha completa o resto do link 
  DigiKeyboard.sendKeyStroke(KEY_SLASH); // essa linha adiciona o /
  DigiKeyboard.print("7xV1"); // essa linha completa o resto do link 
  
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(3000);
  
  // aqui faremos com que ele exiba uma tela fake do windows 98
  
  DigiKeyboard.print("http?"); // essa linha inicia o link que sera dividido e trocamos o : por ?
  DigiKeyboard.sendKeyStroke(KEY_SLASH); // essa linha adiciona o /
  DigiKeyboard.sendKeyStroke(KEY_SLASH); // essa linha adiciona o /
  DigiKeyboard.print("twixar.me"); // essa linha completa o resto do link 
  DigiKeyboard.sendKeyStroke(KEY_SLASH); // essa linha adiciona o /
  DigiKeyboard.print("kxV1"); // essa linha completa o resto do link 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_F11); // comando para abrir tela inteira do navegador
  for(;;){ /*empty*/ }
}
