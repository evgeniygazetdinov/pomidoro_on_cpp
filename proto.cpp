#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

#include <ctime>
#include "libs/timer.h"
#include "libs/button.h"

using namespace std;

//TODO move separated file


int hours, seconds, minutes;
const int SCRWIDTH = 1280;
const int SCRHEIGHT = 720;

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

    sf::Texture background;
    sf::Sprite backgroundImage;

    if (!background.loadFromFile("sprites/startButton.png"))
        std::cout << "Error: Could not display Alaskan Wilderness image" << std::endl;

    backgroundImage.setTexture(background);
    backgroundImage.setPosition(sf::Vector2f(SCRWIDTH/2.0f,SCRHEIGHT/2.0f));


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
            if (event.type == sf::Event::MouseButtonPressed)
{
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    std::cout << "the right button was pressed" << std::endl;
                    std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                    std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    if(event.mouseButton.x > 600 && event.mouseButton.x < 884 || event.mouseButton.y >482 && event.mouseButton.y <510 ){
                                         std::cout << "button presed" std::endl;
   
                    // TODO HANDLE push without handcode 
                    }
                }
        }
        }
        timeWidget.setString(timer.prepareTimeString(lastTime));
        window.clear();
                

        window.draw(timeWidget);
        window.draw(backgroundImage);
        window.display();

    }

    return 0;
}
