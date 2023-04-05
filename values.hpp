#include <Arduino.h>
#define TONE_USE_INT
#define TONE_PITCH 440

#include <TonePitch.h>
const int LED_C = 23;
const int LED_D = 25;
const int LED_E = 27;
const int LED_F = 29;
const int LED_G = 31;
const int LED_A = 33;
const int LED_B = 35;
const int LED_C5 = 37;

const int BTN_C = 22;
const int BTN_D = 24;
const int BTN_E = 26;
const int BTN_F = 28;
const int BTN_G = 30;
const int BTN_A = 32;
const int BTN_B = 34;
const int BTN_C5 =  36;

const int BUZZER_PIN = 48;

const int BTN_BACK = 40;
const int BTN_CONFIRM = 42;
const int BTN_PROCEED = 44;

const uint8_t ledPins[]{LED_C, LED_D, LED_E, LED_F, LED_G, LED_A, LED_B, LED_C5};
const uint8_t btnPins[]{BTN_C, BTN_D, BTN_E, BTN_F, BTN_G, BTN_A, BTN_B, BTN_C5};
const uint16_t noteScales[3][8] 
{
    {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5},
    {NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_FS5, NOTE_G5},
    {NOTE_D4, NOTE_E4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_CS5, NOTE_D5}
};

const uint8_t selectedScale = 0;

void setupPins();
void handleNotes();
void turnLED(uint8_t ledPin, int stamp);
void play(uint8_t noteIndex);
void playNote(uint16_t note);