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
    sf::Text timeWidget("00:00:00", font, 100);
    timeWidget.setPosition(400,200);
    TextTimer timer;

    ActonButton sampleBut("sprites/startButton.png", sf::Vector2f(SCRWIDTH/2.0f,SCRHEIGHT/2.0f));
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
                    if(event.mouseButton.x > 600 && event.mouseButton.x < 884 || event.mouseButton.y >482 && event.mouseButton.y <510 ){
                        std::cout<<sampleBut.canStart<<std::endl;
                        sampleBut.conditionTimeHandler();
                    }
                }
        }
        }
        auto stringTime = timer.prepareTimeString(lastTime);
        if(sampleBut.canStart == 1){
            timeWidget.setString(stringTime);
        }
        else if(sampleBut.canStart > 1){
            std::cout<<sampleBut.canStart<<std::endl;
            
        }

        
        window.clear();
                

        window.draw(timeWidget);
        window.draw(sampleBut.sprite);
        window.display();

    }

    return 0;
}
