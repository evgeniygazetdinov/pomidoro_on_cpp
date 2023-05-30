#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

using namespace std;

int hours, seconds,minutes;

void timer(int secondsForCount) {
        if (secondsForCount == 10) {
            
            minutes++;

            if (minutes == 60) {
                hours++;
                minutes = 0;
            }

        }
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
    sf::Text TextSecond("00", font, 100);
    sf::Text TextMinutes("00", font, 100);
    sf::Text TextHours("00", font, 100);
    TextSecond.setPosition(400,200);
    TextHours.setPosition(200,250);
    TextMinutes.setPosition(300,300);
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
        
        TextSecond.setString(to_string(lastTime));
        TextMinutes.setString(to_string(minutes));
        TextHours.setString(to_string(hours));
        
        window.clear();
        timer(lastTime);
        window.draw(TextSecond);
        window.draw(TextMinutes);
        window.draw(TextHours);
        window.display();

        
        // if(currentTime!=lastTime)
        //     e
    }

    return 0;
}
