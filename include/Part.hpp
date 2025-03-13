#pragma once
#include <SFML/Graphics.hpp>
#include "Game.hpp"

#include <iostream>


class Part: public sf::RectangleShape{

    public:
        Part(sf::Vector2f pos);
        Part(sf::Vector2f pos, sf::Color color);
};