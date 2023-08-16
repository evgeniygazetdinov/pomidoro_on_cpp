#include <iostream>
#include <map>

using namespace std;

class TextTimer{

    public:
        string isNeedAddZero(string timeElement);
        string prepareTimeString(int seconds);
        int countBySpecificPeriod(int periodForCount);
        int needToStopCount = 0;
        string lastEqulizedTime = "00:00:00";
        int getSpecificSecondByPeriod(int minutes);
        int lastTimerValue;
};
