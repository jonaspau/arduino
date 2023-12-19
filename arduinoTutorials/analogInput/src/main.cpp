// A simple script to control the blinking of the 
// onboard LED if the Arduino with a potentiometer
#include <Arduino.h>

int pot = A0; // pin for potentiometer
int led = 13; // pin for led
int potVal = 0; // initalize the pot value

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  potVal = analogRead(pot); // read the value of the potentiometer
  digitalWrite(led, HIGH); // turn the led on
  delay(potVal); // wait for the set amount of ms
  digitalWrite(led, LOW); // turn off
  delay(potVal);
}
