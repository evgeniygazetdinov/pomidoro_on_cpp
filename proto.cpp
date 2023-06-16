#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

#include <ctime>
#include "libs/timer.h"
#include "libs/button.h"

using namespace std;

//TODO move separated file


int hours, seconds, minutes;

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
    TextTimer timer;

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
        timeWidget.setString(timer.prepareTimeString(lastTime));
        window.clear();
        window.draw(timeWidget);
        window.display();

    }

    return 0;
}
