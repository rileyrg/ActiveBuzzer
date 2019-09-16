#include <Arduino.h>
#define buzzerPin 5
#define togglePin 2

void toggleBuzzer();
boolean buzzerState=LOW;

void setup()
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(togglePin,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(togglePin), toggleBuzzer,RISING);
  digitalWrite(buzzerPin,buzzerState);
}
void loop()
{
  digitalWrite(buzzerPin,buzzerState); // produce sound
}

void toggleBuzzer(){
  buzzerState=!buzzerState;
}
