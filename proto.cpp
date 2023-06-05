#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

#include <ctime>
using namespace std;

int hours, seconds,minutes;

string timer(int secondsForCount) {
    
        //TODO ADD FUNC for add or not add additional zero to each number
        minutes = secondsForCount / 60;
        hours = minutes / 60;
        string myCurentTime = std::to_string(hours) + ":" + std::to_string(minutes%60) + ":" + std::to_string(secondsForCount%60);
        return myCurentTime;
    }


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
