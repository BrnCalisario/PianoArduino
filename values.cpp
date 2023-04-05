#include "values.hpp"

void setupPins()
{
    for (int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++)
    {
        pinMode(ledPins[i], OUTPUT);
        pinMode(btnPins[i], INPUT_PULLUP);
    }

    pinMode(BTN_BACK, INPUT_PULLUP);
    pinMode(BTN_CONFIRM, INPUT_PULLUP);
    pinMode(BTN_PROCEED, INPUT_PULLUP);
}

void handleNotes()
{
    for (int i = 0; i < 8; i++)
    {
        if (!digitalRead(btnPins[i]))
        {
            play(i);
            break;
        }
    }
}

void turnLED(uint8_t ledPin, int stamp)
{
    digitalWrite(ledPin, HIGH);
    delay(stamp);
    digitalWrite(ledPin, LOW);
}

void play(uint8_t noteIndex)
{
    tone(BUZZER_PIN, noteScales[selectedScale][noteIndex], 150);
    // turnLED(ledPins[noteIndex], 100);
}

void playNote(uint16_t note)
{
    tone(BUZZER_PIN, note, 100);
}