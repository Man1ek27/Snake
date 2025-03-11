#pragma once 

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Part.hpp"
class Part;

class Snake: public sf::Sprite{
    float speed = 0;
    std::vector<Part> parts;


    bool destroyed = false;

    public:
        Snake(int part_count);

        void Draw(sf::RenderWindow &W);


};