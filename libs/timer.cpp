#include <iostream>
#include <time.h>

using namespace std;


string TextTimer::isNeedAddZero(string timeElement){

    if (timeElement.length() == 1) {
        return "0" + timeElement;
    }
    else{
        return timeElement;
    }
}

string TextTimer::prepareTimeString(int secondsForCount) {    
        int minutes = secondsForCount / 60;
        int hours = minutes / 60;
        string myCurentTime = isNeedAddZero(std::to_string(hours)) + ":"
        + isNeedAddZero(std::to_string(minutes%60)) + ":"
        + isNeedAddZero(std::to_string(secondsForCount%60));
        return myCurentTime;
}