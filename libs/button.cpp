#include <SFML/Graphics.hpp>
#include "button.h"

using namespace sf;

// StartStopButton StartStopButton::Button(sf::Image* normal,sf::Image* clicked,std::string words,sf::Vector2f location) {
    // this->normal.SetImage(*normal);
    // this->clicked.SetImage(*clicked);
    // this->currentSpr=&this->normal;
    // bool current =false;
    // this->normal.SetPosition(location);
    // this->clicked.SetPosition(location);
    // String.SetText(words);
    // String.SetPosition(location.x+3,location.y+3);
    // String.SetSize(14);
// }
// void StartStopButton::checkClick (sf::Vector2f mousePos) {
//     if (mousePos.x>currentSpr->sf::getPosition().x && mousePos.x<(currentSpr->getPosition().x + currentSpr->GetSize().x)) {
//         if(mousePos.y>currentSpr->getPosition().y && mousePos.y<(currentSpr->getPosition().y + currentSpr->GetSize().y)) {
//             // setState(!current);
//         }
//     }
// }
// void StartStopButton::setState(bool which) {
//     current = which;
//     if (current) {
//         currentSpr=&clicked;
//         return;
//     }
//     currentSpr=&normal;
// }
// void StartStopButton::setText(std::string words) {
//     String.SetText(words);
// }
// bool StartStopButton::getVar() {
//     return current;
// }
// sf::Sprite* StartStopButton::getSprite() {
//     return currentSpr;
// }

// sf::String* StartStopButton::getText() {
//     return &String;
// }