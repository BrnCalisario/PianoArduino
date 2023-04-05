#include "menu.hpp"

Song::Song(String name, uint8_t _notes[], int num_notes) : name(name), num_notes(num_notes)
{
    memcpy(this->notes, notes, num_notes * sizeof(uint8_t));
}

Menu::Menu(LiquidCrystal _lcd, Song *_songs[], int num_songs) 
    : lcd(_lcd), num_songs(num_songs)
{
    memcpy(songs, _songs, num_songs * sizeof(Song *));
}

void Menu::Forward()
{
    song_index++;
    if (song_index >= num_songs)
    {
        song_index = 0;
    }
    ShowMenu();
}

void Menu::Backward()
{
    song_index--;
    if (song_index < 0)
    {
        song_index = num_songs - 1;
    }
    ShowMenu();
}

void Menu::ShowMenu()
{   
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Selecione:");
    lcd.setCursor(0, 1);
    lcd.print(songs[song_index]->name);
}