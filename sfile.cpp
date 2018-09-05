#include "Arduino.h"
#include "hfile.h"

Morse::Morse(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Morse::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}

void Morse::dot(int num){
    for(int i = 0 ; i < num ; i++){
        digitalWrite(_pin, HIGH);
        delay(250);
        digitalWrite(_pin, LOW);
        delay(250);
    }
}
void Morse::dash(int num){
    for(int i = 0 ; i < num ; i++){
        digitalWrite(_pin, HIGH);
        delay(1000);
        digitalWrite(_pin, LOW);
        delay(250);
    }
}
