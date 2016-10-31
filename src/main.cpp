#include "Arduino.h"

#define gndpin 0
#define ledpin 2

void setup()
{
    pinMode(gndpin, OUTPUT);
    pinMode(gndpin, LOW);

    pinMode(ledpin, OUTPUT);
}

void loop()
{
    digitalWrite(ledpin, HIGH);
    delay(1000);
    digitalWrite(ledpin, LOW);
    delay(1000);
}
