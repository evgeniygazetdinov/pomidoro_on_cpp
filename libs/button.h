#include <iostream>
#include <SFML/Graphics.hpp>


using namespace std;

class BaseButton {
    
};

class ActonButton: private BaseButton {
public:
    void conditionTimeHandler();
    ActonButton (string imageLocation,sf::Vector2f location);
    sf::Sprite sprite;
    int canStart = 0;
    

private:
    sf::Sprite normal;
    sf::Sprite clicked;
    sf::Sprite* currentSpr;
    sf::String String;
    bool current;
    sf::Texture texture;
    
};

class FifthenMinutes: private ActonButton{

};