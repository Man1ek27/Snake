#include "../include/Part.hpp"

Part::Part(sf::Vector2f pos):RectangleShape() {
    this->setSize(sf::Vector2f(21, 21));
    this->setOrigin(sf::Vector2f(this->getSize().x/2, this->getSize().y/2));
    //this->setTexture(&tex);
    this->setPosition(pos);
    this->setFillColor(sf::Color(sf::Color::Green));
    this->setOutlineThickness(1);
    this->setOutlineColor(sf::Color::Black);
}

Part::Part(sf::Vector2f pos, sf::Color color): Part{pos}{
    this->setFillColor(color);
}
