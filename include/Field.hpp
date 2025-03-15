#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"
#include <sstream>

class Field: public sf::RenderWindow{
    sf::Texture bgtx;
    sf::RectangleShape bg;

    int x = SCREENX;
    int y = SCREENY;

    public:
        Field(std::string);
        void Draw(sf::RenderWindow& window);

};

class Pause: public sf::RectangleShape{

    int x = SCREENX;
    int y = SCREENY;
    
    std::stringstream ss;
    sf::Text txt;

    public:
        Pause(sf::Font &font);
        void Draw(sf::RenderWindow &W);
        void Draw(sf::RenderWindow &W, std::string a);


};