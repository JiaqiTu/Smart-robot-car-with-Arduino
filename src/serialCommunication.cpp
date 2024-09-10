#include <Arduino.h>
#include "calc_functions.h"
// #define LED_PIN 13

// put function declarations here:
// int myFunction(int, int);

// put function declarations here:


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("hello world! ");

//test my own template class function
int first = 5;
int second = 10;
Serial.println(do_a_calc(first, second));

double a1 = 3.124;
double b1 = 4.124;
Serial.println(do_a_calc(a1, b1));
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println(millis());
delay(1000);

}
