#include <iostream>
#include "timer.h"

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