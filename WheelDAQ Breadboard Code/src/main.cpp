#include <Arduino.h>

const int wheel_speed_pin = 36;
//const int brake_temp_pin = 36;

// int wheel_speed_digital = 100;
int wheel_speed_analog = 100;
int brake_temp = 100;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // wheel_speed_digital = digitalRead(wheel_speed_pin);
  // wheel_speed_analog = analogRead(wheel_speed_pin);
  // Serial.print("Digtial = ");
  // Serial.println(wheel_speed_digital);
  // Serial.print("Analog = ");
  // Serial.println(wheel_speed_analog);
  // delay(100);
  //rake_temp = analogRead(brake_temp_pin) + 181;
  //Serial.print("Brake Temp = ");
  //int real_temp = map(brake_temp,410,3686,0,800);
  //float voltage = map(brake_temp,0,4096,0,500);
  //Serial.println(real_temp);
  wheel_speed_analog = analogRead(wheel_speed_pin);
  Serial.print("Wheel Speed = ");
  Serial.println(wheel_speed_analog);
  delay(300);
}