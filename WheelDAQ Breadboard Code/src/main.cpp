#include <Arduino.h>

const int wheel_speed_pin = 34;

int wheel_speed = 99;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  wheel_speed = analogRead(wheel_speed_pin);
  Serial.println(wheel_speed);
  delay(100);
}