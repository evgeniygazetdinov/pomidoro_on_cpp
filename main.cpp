#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <conio.h>
#define KEY_UP    72
#define KEY_LEFT  75
#define KEY_RIGHT 77
#define KEY_DOWN  80




using namespace std;


void input()
{
    int c = 0;
    switch ((c = getch()))
    {
    case KEY_UP:
        cout << endl<< "Up" << endl; //key up
        break;
    case KEY_DOWN:
        cout << endl<< "Down" << endl; // key down
        break;
    case KEY_LEFT:
        cout << endl<< "Left" << endl; // key left
        break;
    case KEY_RIGHT:
        cout << endl<< "Right" << endl; // key right
        break;
    default:
        break;
    }
}


int hours = 0;
int minutes = 0;
int seconds = 0;




void displayClock() {
    cout <<setfill(' ') <<setw(55) <<"         TIMER         \n";
    cout <<setfill(' ') <<setw(55) <<" --------------------------\n";
    cout <<setfill(' ') <<setw(29);

    cout <<"| " <<setfill('0') <<setw(2) <<hours <<" hrs | ";
    cout <<setfill('0') <<setw(2) <<minutes <<" min | ";
    cout <<setfill('0') <<setw(2) <<seconds <<" sec |" <<endl;
    cout <<setfill(' ') <<setw(55) <<" --------------------------\n";
}

void timer() {

    while (true) {
        system("clear");
        string pressed_key;
        displayClock();
        sleep(1);
        seconds++;

        
        if (seconds == 60) {

            minutes++;

            if (minutes == 60) {
                hours++;
                minutes = 0;
            }

            seconds = 0;
        }
    }
}

// add handle space for stop timer in thread!!!!

int main() {
    timer();
    return 0;
}