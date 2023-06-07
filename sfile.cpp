#include "Arduino.h"
#include "hfile.h"

Morse::Morse(int pin)
{
    pinMode(pin, OUTPUT);   // Set the specified pin as OUTPUT
    _pin = pin;             // Store the pin number in the private member variable
}

void Morse::dot()
{
    digitalWrite(_pin, HIGH);   // Turn on the LED or activate the output
    delay(250);                  // Delay for dot duration
    digitalWrite(_pin, LOW);    // Turn off the LED or deactivate the output
    delay(250);                  // Delay between dots
}

void Morse::dash()
{
    digitalWrite(_pin, HIGH);   // Turn on the LED or activate the output
    delay(1000);                 // Delay for dash duration
    digitalWrite(_pin, LOW);    // Turn off the LED or deactivate the output
    delay(250);                  // Delay between dashes
}

void Morse::dot(int num)
{
    for (int i = 0; i < num; i++)
    {
        digitalWrite(_pin, HIGH);   // Turn on the LED or activate the output
        delay(250);                  // Delay for dot duration
        digitalWrite(_pin, LOW);    // Turn off the LED or deactivate the output
        delay(250);                  // Delay between dots
    }
}

void Morse::dash(int num)
{
    for (int i = 0; i < num; i++)
    {
        digitalWrite(_pin, HIGH);   // Turn on the LED or activate the output
        delay(1000);                 // Delay for dash duration
        digitalWrite(_pin, LOW);    // Turn off the LED or deactivate the output
        delay(250);                  // Delay between dashes
    }
}
