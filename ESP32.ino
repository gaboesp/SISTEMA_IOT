//codigo para esp 32

#include "Arduino.h"
 
void setup() {
  Serial.begin(9600);
  delay(500);
 
  Serial.println("Hi, I'm going to send message!");
 
  Serial2.begin(9600);
  Serial2.println("Hello, world?");
}
 
void loop() {
  if (Serial2.available()) {
    Serial.write(Serial2.read());
  }
  if (Serial.available()) {
    Serial2.write(Serial.read());

  }
}
