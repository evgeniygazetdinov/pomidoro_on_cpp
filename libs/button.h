#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

class StartStopButton {
public:
    StartStopButton (sf::Image* normal,sf::Image* clicked,std::string,sf::Vector2f location);
    // void checkClick (sf::Vector2f);
    // void setState(bool);
    // void setText(std::string);
    // bool getVar();
    // sf::Sprite* getSprite();
    // sf::String * getText();
private:
    sf::Sprite normal;
    sf::Sprite clicked;
    sf::Sprite* currentSpr;
    sf::String String;
    bool current;
};