/*
 * 
 * View this on github https://github.com/j-n-s-k-n-r/
 * Share this, mod this but don't sell this
 * Author: j4n5s1
 * The God who created this universe is quite clearly a maniac
 */




/*
 * If you want to use more button,   
 * uncomment a line below  and attach following line
 * to the void setup() block.
 * if (digitalRead(buttonPin6) == 0)  // if the button goes low
 *    {
 *        Keyboard.write('Char of your Choice');  // Char to Computer via HID => open the move/copy modus
 *        delay(waitingTime);
 *    }
 */


#include <Keyboard.h>
// => for the HID Modus

// Change the value below the increase or reduce the time between the keystrokes
int waitingTime = 1000;


int buttonPin2 = 2;  // pin 2= buttonPin2
int buttonPin3 = 3;  // pin 3= buttonPin3
int buttonPin4 = 4;  // pin 4= buttonPin4
int buttonPin5 = 5;  // pin 5= buttonPin5
int buttonPin6 = 6;  // Set a button to any pin
int buttonPin7 = 7;  // Set a button to any pin
//int buttonPin8 = 8;  // Set a button to any pin
//int buttonPin9 = 9;  // Set a button to any pin
//int buttonPin10 = 10;  // Set a button to any pin
//int buttonPin14 = 14;  // Set a button to any pin
//int buttonPin15 = 15;  // Set a button to any pin
//int buttonPin16 = 16;  // Set a button to any pin


void setup()
{
  pinMode(buttonPin2, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  digitalWrite(buttonPin2, HIGH);  // for the start pull the button high

  pinMode(buttonPin3, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  digitalWrite(buttonPin3, HIGH);  // for the start pull the button high

  pinMode(buttonPin4, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  digitalWrite(buttonPin4, HIGH);  // for the start pull the button high

  pinMode(buttonPin5, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  digitalWrite(buttonPin5, HIGH);  // for the start pull the button high

  pinMode(buttonPin6, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  digitalWrite(buttonPin6, HIGH);  // for the start pull the button high

  pinMode(buttonPin7, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin7, HIGH);  // for the start pull the button high

  //pinMode(buttonPin8, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin8, HIGH);  // for the start pull the button high

  //pinMode(buttonPin9, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin9, HIGH);  // for the start pull the button high

  //pinMode(buttonPin10, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin10, HIGH);  //for the start pull the button high

  //pinMode(buttonPin14, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin14, HIGH);  // for the start pull the button high

  //pinMode(buttonPin15, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin15, HIGH);  // for the start pull the button high

  //pinMode(buttonPin16, INPUT_PULLUP);  // Set the button as an input with the intern pullup
  //digitalWrite(buttonPin16, HIGH);  // for the start pull the button high

Keyboard.begin();
}
void loop()
{
  //Pin2 => F3
  if (digitalRead(buttonPin2) == 0)  // if the button goes low
  {
    Keyboard.write('196');  // F3 to Computer via HID
    delay(waitingTime);
  }
  
  //Pin3 => F8
  if (digitalRead(buttonPin3) == 0)  // if the button goes low
  {
    Keyboard.write(201);  // F8 to Computer via HID 
    delay(waitingTime);  
  }
  
  //Pin4 => Shift + Tab
  if (digitalRead(buttonPin4) == 0)  // if the button goes low
  {
    Keyboard.press(129); // Shift to Computer via HID
    Keyboard.press(179); // Tab to Computer via HID
    delay(100);//   
    Keyboard.releaseAll();
    delay(waitingTime);  
  }
  
  //Pin5 => Tab
  if (digitalRead(buttonPin5) == 0)  // if the button goes low
  {
    Keyboard.write('179');  // Tab  to Computer via HID 
    delay(waitingTime);  
  }
  
  //Pin6 => Strg + Q
  if (digitalRead(buttonPin6) == 0)  // if the button goes low
  {
    Keyboard.press(128);  // Controll to Computer via HID
    Keyboard.press("q");  // Small q to Computer via HID
    delay(100);
    Keyboard.releaseAll();
    delay(waitingTime);
  }
  
  //Pin7 => Strg + Shift + /
  if (digitalRead(buttonPin7) == 0)  // if the button goes low
  {
    Keyboard.press(128);  // Controll to Computer via HID
    Keyboard.press(129);  // Shift q to Computer via HID
    Keyboard.press(47);     // "/" to Computer via HID
    delay(100);
    Keyboard.releaseAll();
    delay(waitingTime);
  }  
}
