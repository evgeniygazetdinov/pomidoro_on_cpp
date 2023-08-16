#include <iostream>
#include "timer.h"
#include <thread>
#include <chrono>

using namespace std;

string TextTimer::isNeedAddZero(string timeElement){

    if (timeElement.length() == 1) {
        timeElement = "0" + timeElement;
    }
    return timeElement;
}

string TextTimer::prepareTimeString(int secondsForCount) {
        if (!needToStopCount){
            int minutes = secondsForCount / 60;
            int hours = minutes / 60;
            string myCurentTime = isNeedAddZero(std::to_string(hours)) + ":"
            + isNeedAddZero(std::to_string(minutes%60)) + ":"
            + isNeedAddZero(std::to_string(secondsForCount%60));
            lastEqulizedTime = myCurentTime;
            return myCurentTime;
        }
        else{
            return lastEqulizedTime;
        }    
        
}


int TextTimer::countBySpecificPeriod(int periodForCount)
{
    int periodForLoop = 900;
    for(int i=periodForLoop-1; i>=0; i--)
    {
        lastTimerValue=i;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        return lastTimerValue;

    }
}