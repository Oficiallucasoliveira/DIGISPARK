#include "DigiKeyboard.h"
#define KEY_ENTER
#define KEY_KPAD_ENTER
void setup() {

  
  DigiKeyboard.println(KEY_KPAD_ENTER);
  
  DigiKeyboard.delay(2000);
  DigiKeyboard.println(KEY_KPAD_ENTER);
  //DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  

  DigiKeyboard.println("963852"); 

  DigiKeyboard.delay(5000);
}

void loop() {

}

