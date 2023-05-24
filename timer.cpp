#include "timer.h"
#include <iostream>
#include <unistd.h>
#include <array>

using namespace std;


array<int,3> Timer::getUpdatedTimeVariables(){
    array<int,3> timeVariables;
    timeVariables[0], timeVariables[1], timeVariables[2] = hour, minute, second;
    return timeVariables;
}

void Timer::runTime(){
        sleep(1);
        second++;
        
        if (second == 60) {

            minute++;

            if (minute == 60) {
                hour++;
                minute = 0;
            }

            second = 0;
        }
        
}
