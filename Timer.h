#pragma once

#include <Arduino.h>
#include <stdint.h>

class Timer
{
private:
    uint32_t tick;
public:
    void start()
    {
        tick = ~millis() + 1;
    }
    uint32_t elapsed()
    {
        return tick + millis();
    }
};
