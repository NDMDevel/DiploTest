//example Arduino
#include "Timer.h"
#include "Led.h"

Timer timer;
Led led;

void setup()
{
    led.begin(2);
    timer.start();
}

void loop()
{
    if( timer.elapsed() > 100 )
    {
        led.on();
        timer.start();
    }
}
