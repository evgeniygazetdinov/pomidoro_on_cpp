#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class TextTimer{

    public:
        string isNeedAddZero(string timeElement);
        string prepareTimeString(int seconds);
};
