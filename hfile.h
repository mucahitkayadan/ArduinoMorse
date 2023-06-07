#ifndef HFILE_H_INCLUDED
#define HFILE_H_INCLUDED

#include "Arduino.h"

class Morse
{
public:
    Morse(int pin);  // Constructor
    void dot();      // Emit a dot
    void dash();     // Emit a dash
    void dot(int num);   // Emit multiple dots
    void dash(int num);  // Emit multiple dashes

private:
    int _pin;   // The pin number for Morse code output
};

#endif // HFILE_H_INCLUDED
