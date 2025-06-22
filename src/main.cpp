#include <Arduino.h>
#include <HWCDC.h>
enum {
    LED_GREEN = 5,
    LED_RED = 4
};

HWCDC cdcSerial;
void setup() {
  Serial.begin(115200);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
 Serial.println("Hello Computer Engineering!");
 digitalWrite(LED_GREEN, HIGH);
 digitalWrite(LED_RED, LOW);
 delay(1000);
 digitalWrite(LED_GREEN, LOW);
 digitalWrite(LED_RED, HIGH);
 delay(1000);
}
