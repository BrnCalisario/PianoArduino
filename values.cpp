#include "values.hpp"

void setupPins()
{
    for(int i = 0; i < sizeof(ledPins) / sizeof(ledPins[0]); i++) {
        pinMode(ledPins[i], OUTPUT);
        pinMode(btnPins[i], INPUT_PULLUP);
    }

    pinMode(BTN_BACK, INPUT_PULLUP);
    pinMode(BTN_CONFIRM, INPUT_PULLUP);
    pinMode(BTN_PROCEED, INPUT_PULLUP);
}