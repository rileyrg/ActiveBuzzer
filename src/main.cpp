#include <Arduino.h>
int buzzer=5; 
void setup()
{
pinMode(buzzer,OUTPUT);
}
void loop()
{
digitalWrite(buzzer, HIGH); // produce sound
}
