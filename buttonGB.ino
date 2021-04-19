#include <Keyboard.h>
#define abutton 1
#define bbutton 0
#define ybutton 3
#define xbutton 2
#define startbutton 4
#define selectbutton 5
#define rightbutton 9
#define downbutton 7
#define upbutton 6
#define leftbutton 8
#define ltbutton 10
#define rtbutton 16


void setup() {
 pinMode(abutton,INPUT_PULLUP);pinMode(bbutton,INPUT_PULLUP);pinMode(ybutton,INPUT_PULLUP);pinMode(xbutton,INPUT_PULLUP);
 pinMode(startbutton,INPUT_PULLUP);pinMode(selectbutton,INPUT_PULLUP);
 pinMode(rightbutton,INPUT_PULLUP);pinMode(downbutton,INPUT_PULLUP);pinMode(upbutton,INPUT_PULLUP);pinMode(leftbutton,INPUT_PULLUP);
 pinMode(ltbutton,INPUT_PULLUP);pinMode(rtbutton,INPUT_PULLUP);
 Serial.begin(9600);
 Keyboard.begin();
}

void loop() {
 if (!digitalRead(abutton)){Keyboard.press('p');}else{Keyboard.release('p');}
 if (!digitalRead(bbutton)){Keyboard.press('l');}else{Keyboard.release('l');}
 if (!digitalRead(ybutton)){Keyboard.press('k');}else{Keyboard.release('k');}
 if (!digitalRead(xbutton)){Keyboard.press('o');}else{Keyboard.release('o');}
 if (!digitalRead(startbutton)){Keyboard.press('x');}else{Keyboard.release('x');}
 if (!digitalRead(selectbutton)){Keyboard.press('y');}else{Keyboard.release('y');}
 if (!digitalRead(rightbutton)){Keyboard.press('d');}else{Keyboard.release('d');}
 if (!digitalRead(downbutton)){Keyboard.press('s');}else{Keyboard.release('s');}
 if (!digitalRead(upbutton)){Keyboard.press('w');}else{Keyboard.release('w');}
 if (!digitalRead(leftbutton)){Keyboard.press('a');}else{Keyboard.release('a');}
 if (!digitalRead(ltbutton)){Keyboard.press('q');}else{Keyboard.release('q');}
 if (!digitalRead(rtbutton)){Keyboard.press('e');}else{Keyboard.release('e');}

}
