//example Arduino
#include "Timer.h"

Timer timer;

void setup()
{
    timer.start();
    pinMode(2,OUTPUT);
}

void loop()
{
    if( timer.elapsed() > 100 )
    {
        bool state = digitalRead(2);
        digitalWrite(2,!state);
        timer.start();
    }
}
