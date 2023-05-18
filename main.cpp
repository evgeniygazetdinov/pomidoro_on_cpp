#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <SFML/Graphics.hpp>


using namespace std;

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