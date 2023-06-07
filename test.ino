#include "Arduino.h"
#include "hfile.h"

Morse morse(13);  // Create an instance of the Morse class with pin 13

void setup()
{
  pinMode(13, OUTPUT);  // Set pin 13 as OUTPUT (built-in LED on most Arduino boards)
}

void loop()
{
  // Emit SOS in Morse code (dot, dot, dot, dash, dash, dash, dot, dot, dot)
  morse.dot();   // S
  morse.dot();
  morse.dot();
  delay(1000);   // Delay between letters
  morse.dash();  // O
  morse.dash();
  morse.dash();
  delay(1000);   // Delay between letters
  morse.dot();   // S
  morse.dot();
  morse.dot();
  delay(2000);   // Delay between SOS repetitions
}
