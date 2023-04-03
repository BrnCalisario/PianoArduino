#include "values.hpp"
#include <LiquidCrystal.h>

int buzzerPin = 48;

String songs[]{"Natalina", "Ode to Joy", "Funk"};
int index = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
void setup()
{
  setupPins();
  lcd.begin(16, 2);
  lcd.clear();
}

void loop()
{
  // put your main code here, to run repeatedly:

  if (!digitalRead(BTN_BACK))
  {
    lcd.clear();
    lcd.print(songs[0]);
  }
  else if (!digitalRead(BTN_CONFIRM))
  {
    lcd.clear();
    lcd.print(songs[1]);
  } else if(!digitalRead(BTN_PROCEED))
  {
    lcd.clear();
    lcd.print(songs[2]);
  }
}
