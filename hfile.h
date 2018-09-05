#ifndef HFILE_H_INCLUDED
#define HFILE_H_INCLUDED
#include "Arduino.h"

class Morse
{
  public:
    Morse(int pin);
    void dot(int num);
    void dash(int num);
    void dot();
    void dash();
  private:
    int _pin;
};


#endif // HFILE_H_INCLUDED
