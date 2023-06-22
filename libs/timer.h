#include <iostream>

using namespace std;

class TextTimer{

    public:
        string isNeedAddZero(string timeElement);
        string prepareTimeString(int seconds);
        int needToStopCount = 0;
        string lastEqulizedTime = "00:00:00";
};
