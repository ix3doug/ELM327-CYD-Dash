#include <Arduino.h>

void setup() {
    // write your initialization code here

    Serial.begin(115200);
    Serial.println("ping");
}

void loop() {
    // write your code here

    Serial.println("pong");
    delay(1000);
}