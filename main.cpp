#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string>
#include <SFML/Graphics.hpp>

#include <sys/types.h>
#include <sys/stat.h>



using namespace std;

string pathname = "fonts/calibri.ttf";
int hours = 0;
int minutes = 0;
int seconds = 0;

void displayClock() {
    cout <<setfill(' ') <<setw(55) <<"         TIMER         \n";
    cout <<setfill(' ') <<setw(55) <<" --------------------------\n";
    cout <<setfill(' ') <<setw(29);

    cout <<"| " <<setfill('0') <<setw(2) <<hours <<" hrs | ";
    cout <<setfill('0') <<setw(2) <<minutes <<" min | ";
    cout <<setfill('0') <<setw(2) <<seconds <<" sec |" <<endl;
    cout <<setfill(' ') <<setw(55) <<" --------------------------\n";
}

void timer() {

    while (true) {
        system("clear");
        displayClock();
        sleep(1);
        seconds++;
        
        if (seconds == 60) {

            minutes++;

            if (minutes == 60) {
                hours++;
                minutes = 0;
            }

            seconds = 0;
        }
        
    }
}






// add handle space for stop timer in thread!!!!

int main() {
    sf::RenderWindow window(sf::VideoMode(600, 600), "15");
	window.setFramerateLimit(60);
	sf::Font font;
	font.loadFromFile(pathname);
	sf::Text text("F2 new game/ ESC exit /Arrow keys for moving", font, 20);
	text.setFillColor(sf::Color::Cyan);
	text.setPosition(5.f, 5.f);

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


			}
		}

		window.clear();
		window.draw(text);
		window.display();
	}

	return 0;
}