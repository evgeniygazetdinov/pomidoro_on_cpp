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
    ActonButton sampleBut2("sprites/startButton.png", sf::Vector2f(SCRWIDTH/10.0f,SCRHEIGHT/2.0f));

    while (window.isOpen())
    {
        

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
        // move that into timer implement TDO make one more class with timer button with 2 logic inside
        if(sampleBut.canStart == 1){
            std::cout<< "button pushed"<<std::endl;
            lastTime = timer.countBySpecificPeriod(15);
            auto stringTime = timer.prepareTimeString(lastTime);
            if(timer.needToStopCount){
                stringTime = "00:00:00";
            } 
            timeWidget.setString(stringTime);
        }
        else if(sampleBut.canStart == 2){
            // clock.restart();
            sampleBut.canStart = 1;
            timer.needToStopCount=0;
            timer.lastTimerValue=0;
            
        }

        
        window.clear();
                

        window.draw(timeWidget);
        window.draw(sampleBut.sprite);
        window.draw(sampleBut2.sprite);
        window.display();

    }

    return 0;
}
// try to make it native
