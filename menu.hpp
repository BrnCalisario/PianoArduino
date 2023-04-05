#include <Arduino.h>
#include <LiquidCrystal.h>

class Song
{
public:
    Song(String name, uint8_t notes[], int num_notes);
    String name = "";
    uint8_t notes[10];
    int num_notes;
};

class Menu
{
public:
    Menu(LiquidCrystal lcd, Song* _songs[], int num_songs);

    Song *songs[10];
    int num_songs;
    int song_index = 0;

    void ConfirmSong(uint8_t index);
    void Forward();
    void Backward();
    void AddSong(Song song);

    void ShowMenu();

    LiquidCrystal lcd;
};


