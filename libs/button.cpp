#include <iostream>
#include <SFML/Graphics.hpp>
#include "button.h"


using namespace std;


void ActonButton::myMethod(){
    std::cout<<"here"<<std::endl;
}


ActonButton::ActonButton(string pathToImage,sf::Vector2f location){
    if (!texture.loadFromFile(pathToImage))
        std::cout << "cant find image" << std::endl;

    sprite.setTexture(texture);
    sprite.setPosition(location);
};