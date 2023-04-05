#include <Arduino.h>
#include "values.hpp"
#include <LiquidCrystal.h>
#include "menu.hpp"

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

Song song1("Do re mi fa", (uint8_t[]){
  0, 1, 2, 3, 3, 3,
  0, 1, 0, 1, 1, 1,
  0, 4, 3, 2, 2, 2,
  0, 1, 2, 3, 3, 3
}, 24);

Song song2("Ode to Joy", (uint8_t[]) {1, 2, 3, 4}, 4);
Song song3("Parabens", (uint8_t[]) {1, 2, 3, 4}, 4);

Song *songs[] = {&song1, &song2, &song3};
int num_songs = sizeof(songs) / sizeof(Song*);

Menu menu(lcd, songs, 3);

void setup()
{
  setupPins();
  menu.lcd.begin(16, 2);
  menu.ShowMenu();
}

void loop()
{
  if (!digitalRead(BTN_BACK)) {
    menu.Backward();
    delay(300);
  } 

  if(!digitalRead(BTN_PROCEED)) {
    menu.Forward();
    delay(300);
  }

  
  // if(actualNote >= sizeof(song) / int(song[0])) {
  //   return;
  // }
  // turnLED(ledPins[song[actualNote]], 1);

  // if (!digitalRead(btnPins[song[actualNote]])) {
  //   play(song[actualNote]);
  //   delay(250);
  //   actualNote++;
  // }
}
