#pragma once 

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Part.hpp"
class Part;

class Snake: public sf::Sprite{
    float speed = 1;
    std::vector<Part> parts;
    
    
    bool destroyed = false;
    
    public:
    std::string direction = "up";
        Snake(int part_count);

        void Draw(sf::RenderWindow &W);
        void CatchEvent(sf::Event &e);
        void UpdatePos();

};