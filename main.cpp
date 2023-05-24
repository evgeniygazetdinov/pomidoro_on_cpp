#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <SFML/Graphics.hpp>

#include <sys/types.h>
#include <sys/stat.h>
#include "timer.h"



using namespace std;

string pathname = "fonts/calibri.ttf";
int hour = 0;
int minut = 0;
int second = 0;
array<int,3> timeArray;



// add handle space for stop timer in thread!!!!

int main() {
	Timer myTimer;
	myTimer.runTime();
    sf::RenderWindow window(sf::VideoMode(600, 600), "15");
	window.setFramerateLimit(60);
	sf::Font font;
	sf::Text text("F2 new game/ ESC exit /Arrow keys for moving", font, 20);
	font.loadFromFile(pathname);
	sf::Text TextHour("00",font,20);
	sf::Text TextMinute("00", font, 20);
	sf::Text TextSecond("00", font, 20);
	
	text.setPosition(5.f, 5.f);
	TextHour.setPosition(5.f, 5.f);
	TextMinute.setPosition(7.f,7.f);
	TextSecond.setPosition(8.f,8.f);
	TextHour.setFillColor(sf::Color::Cyan);
	TextMinute.setFillColor(sf::Color::Cyan);
	TextSecond.setFillColor(sf::Color::Cyan);


	sf::Event event;

    while(window.isOpen())
	{
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed) window.close();
			if(event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape) window.close();
			// 	if (event.key.code == sf::Keyboard::Left) game.Move(Direction::Left);
			// 	if (event.key.code == sf::Keyboard::Right) game.Move(Direction::Right);
			// 	if (event.key.code == sf::Keyboard::Up) game.Move(Direction::Up);
			// 	if (event.key.code == sf::Keyboard::Down) game.Move(Direction::Down);

			// 	if(event.key.code == sf::Keyboard::F2)
			// 	{
			// 		game.Init();
			// 		move_counter = 100;
			// 	}
					// timer();

				
			}
		}
		window.clear();
		timeArray = myTimer.getUpdatedTimeVariables();
		int hours = timeArray[2];
		int minutes = timeArray[1];
		int seconds = timeArray[2];
		TextHour.setString(to_string(hours));
		TextMinute.setString(to_string(minutes));
		TextSecond.setString(to_string(seconds));
		window.draw(TextHour);
		window.draw(TextMinute);
		window.draw(TextSecond);
		window.display();
	}

	return 0;
}

void parseTimeAndDisplay(Timer myTimer, sf::RenderWindow window) {


}



