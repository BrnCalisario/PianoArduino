#include <Arduino.h>

const int LED_C = 23;
const int LED_D = 25;
const int LED_E = 27;
const int LED_F = 29;
const int LED_G = 31;
const int LED_A = 33;
const int LED_B = 35;

const int BTN_C = 22;
const int BTN_D = 24;
const int BTN_E = 26;
const int BTN_F = 28;
const int BTN_G = 30;
const int BTN_A = 32;
const int BTN_B = 34;

const int BUZZER_PIN = 48;

const int BTN_BACK = 40;
const int BTN_CONFIRM = 42;
const int BTN_PROCEED = 44;

const uint8_t ledPins[] {LED_C, LED_D, LED_E, LED_F, LED_G, LED_A, LED_B};
const uint8_t btnPins[] {BTN_C, BTN_D, BTN_E, BTN_F, BTN_G, BTN_A, BTN_B};

void setupPins();
