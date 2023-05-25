#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>

using namespace std;

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
    sf::Text TextSecond("00", font, 20);

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
        
        window.clear();
        window.draw(TextSecond);
        window.display();

        
        if(currentTime!=lastTime)
            cout << (int)dt << std::endl;
    }

    return 0;
}
