#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"

class Field: public sf::RenderWindow{
    sf::Texture bgtx;
    sf::RectangleShape bg;

    int x = SCREENX;
    int y = SCREENY;

    public:
        Field(std::string);
        void Draw(sf::RenderWindow& window);
};