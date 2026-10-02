#include <Arduino.h>

const uint8_t BUTTON_PIN = 23;
const uint8_t LED1_PIN = 18;
const uint8_t LED2_PIN = 2;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);

  // Button starts released
  digitalWrite(LED1_PIN, LOW);
  digitalWrite(LED2_PIN, HIGH);
}

void loop() {
  const bool pressed = (digitalRead(BUTTON_PIN) == LOW);

  // LED 1: ON when button is pressed
  digitalWrite(LED1_PIN, pressed ? HIGH : LOW);

  // LED 2: opposite of LED 1
  digitalWrite(LED2_PIN, pressed ? LOW : HIGH);
}