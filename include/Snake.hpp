#pragma once 

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>

#include "Part.hpp"
#include "Field.hpp"
class Part;
class Pause;

class Snake: public sf::Sprite{
    float speed = 1;
    std::vector<Part> parts;
    std::string direction = "up";
    
    
    bool destroyed = false;
    
    public:
        Snake(int part_count);

        void Draw(sf::RenderWindow &W);
        void CatchEvent(sf::Event &e, Pause &pause, sf::RenderWindow &W);
        void UpdatePos();
        float getSpeed();
        void setSpeed(float sped);

};