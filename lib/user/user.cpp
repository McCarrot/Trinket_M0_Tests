/*
 * Created on: 17.02.2019
 * Author:     Robin Gjølstad
 * 
 * This source file should contain user created function definitions.
 * 
 */

#include "user.h"


void user_setup()
{
    //
    pinMode(13, OUTPUT);
}

void user_loop()
{ 
    //
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);              // wait for a second
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);              // wait for a second
}