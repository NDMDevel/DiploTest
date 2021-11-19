#pragma once

#include <Arduino.h>
#include <stdint.h>


class Led
{
private:
    uint16_t pin;
public:
    void begin(uint16_t p)
    {
        pin = p;
        pinMode(pin,OUTPUT);
    }
    void on()
    {
        digitalWrite(pin,HIGH);
    }
    void off()
    {
        digitalWrite(pin,LOW);
    }
};
