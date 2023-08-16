#include <iostream>
#include <SFML/Graphics.hpp>
#include "button.h"


using namespace std;


ActonButton::ActonButton(string pathToImage,sf::Vector2f location)
{
    if (!texture.loadFromFile(pathToImage))
        std::cout << "cant find image" << std::endl;

    sprite.setTexture(texture);
    sprite.setPosition(location);
};

void ActonButton::conditionTimeHandler()
{
        if(canStart == 3){
            canStart = 0;
        }
        else{
            canStart+=1;
        }
}

