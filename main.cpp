#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
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




// add handle space for stop timer in thread!!!!

int main() {
	Timer myTimer;
	myTimer.runTime();
    sf::RenderWindow window(sf::VideoMode(600, 600), "15");
	window.setFramerateLimit(60);
	sf::Font font;
	sf::Text text("F2 new game/ ESC exit /Arrow keys for moving", font, 20);
	font.loadFromFile(pathname);
	sf::Text hours("00",font,20);
	sf::Text minutes("00", font, 20);
	sf::Text seconds("00", font, 20);
	text.setFillColor(sf::Color::Cyan);
	text.setPosition(5.f, 5.f);
	hours.setPosition(20,20);
	minutes.setPosition(7.f,7.f);
	seconds.setPosition(8.f,8.f);

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
		window.draw(text);
		window.draw(hours);
		window.draw(minutes);
		window.draw(seconds);
		window.display();
	}

	return 0;
}

// void displayClock() {
// 	hours.setString(to_string(hour));
// 	minutes.setString(to_string(minut));
// 	seconds.setString(to_string(second));
// }


// void timer() {
//         system("clear");
// 		displayClock();
//         sleep(1);
//         second++;
        
//         if (second == 60) {

//             minut++;

//             if (minut == 60) {
//                 hour++;
//                 minut = 0;
//             }

//             second = 0;
//         }
        
// }

