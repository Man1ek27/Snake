#pragma once
#include <SFML/Graphics.hpp>
#include "Game.hpp"

#include <iostream>


class Part: public sf::RectangleShape{

    public:
        Part(sf::Vector2f pos);
};