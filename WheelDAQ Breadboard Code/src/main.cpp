#include <Arduino.h>

const int wheel_speed_pin = 36;

int wheel_speed_digital = 100;
int wheel_speed_analog = 100;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  wheel_speed_digital = digitalRead(wheel_speed_pin);
  wheel_speed_analog = analogRead(wheel_speed_pin);
  Serial.print("Digtial = ");
  Serial.println(wheel_speed_digital);
  Serial.print("Analog = ");
  Serial.println(wheel_speed_analog);
  delay(100);
}