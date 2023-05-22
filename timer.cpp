#include "timer.h"
#include <iostream>

void Timer::updateTimeVariables(){

}

void Timer::runTime(){
		updateTimeVariables();
        sleep(1);
        second++;
        
        if (second == 60) {

            minut++;

            if (minut == 60) {
                hour++;
                minut = 0;
            }

            second = 0;
        }
        
}

}