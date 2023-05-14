#include <Arduino.h>
#include <math.h>
#define PWMPIN 5
int step = 5;

void setup() {
  pinMode(PWMPIN, OUTPUT); //it's not even necessary
}

void loop() {
  int val = 0;  
  float temp;
  int inc;
  temp = 255 / step;
  inc = (int)floor(temp); //floor() function takes a floating-point number as input and returns the largest integer that is less than or equal to the input
  
    while (val<=255){
    //Serial.println(val);
    analogWrite(PWMPIN, val);
    val = val+inc;
    delay(1000);
  }  
}