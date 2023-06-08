#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

#include <ctime>
using namespace std;

int hours, seconds,minutes;

string isNeedAddZero(string timeElement){

    if (timeElement.length() == 1) {
        cout<<"string < 1"<<endl;
        return "0" + timeElement;
    }
    else{
        return timeElement;
    }
}

string timer(int secondsForCount) {    
        minutes = secondsForCount / 60;
        hours = minutes / 60;
        string myCurentTime = isNeedAddZero(std::to_string(hours)) + ":" + isNeedAddZero(std::to_string(minutes%60)) + ":" + isNeedAddZero(std::to_string(secondsForCount%60));
        return myCurentTime;
}
// TODO Implement button for stop and start time

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");
    sf::Clock clock;
    float dt = 0.f;
    int lastTime = 0;
    int currentTime = 0;
    string pathname = "fonts/calibri.ttf";

    sf::Font font;
	font.loadFromFile(pathname);
    sf::Text timeWidget("00", font, 100);
    timeWidget.setPosition(400,200);
    while (window.isOpen())
    {
        dt = clock.getElapsedTime().asSeconds();
        lastTime = (int)dt;
        currentTime = lastTime;

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        timeWidget.setString(timer(lastTime));
        window.clear();
        window.draw(timeWidget);
        window.display();

        
        // if(currentTime!=lastTime)
    }

    return 0;
}
