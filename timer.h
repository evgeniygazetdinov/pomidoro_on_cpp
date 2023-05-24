#include <array>

class Timer{

    public:
        void runTime();
        void updateTimeVariables();
        std::array<int,3> getUpdatedTimeVariables();
    private:
        int second, minute, hour;

};