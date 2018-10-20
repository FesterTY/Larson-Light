/*
* Fester's first program. Congratulations!
*/

#include <Arduino.h>

//////////////////////////////////////
// Global Variables
///////////////////////////////////////

const int kMinPinNum = 2;
const int kMaxPinNum = 9;

///////////////////////////////////////
// Source files/functions
///////////////////////////////////////

/** Run once when the system powers up*/
void setup()
{

}

/** Runs over and over again as long as then Arduino has power or is connected to a power supply*/
void loop()
{
    //Loop through as many time as the amount of pins and turn it on
    for (int p = kMinPinNum; p <= kMaxPinNum; p++)
    {
        pinMode(p, OUTPUT);
        digitalWrite(p, HIGH);
        delay(500);

        // If pin number is equal to the maximum pin number we use (which is 10) and turn it off
        if (p == kMaxPinNum) 
        {
            for (int k = kMaxPinNum; k >= kMinPinNum; k--) 
            {
                digitalWrite(k, LOW);
                delay(500);
            }
        }
    }
}