#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Game.hpp"
#include <sstream>

class Field: public sf::RenderWindow{
    sf::Texture bgtx;
    sf::RectangleShape bg;

    sf::RectangleShape borders;

    int x = SCREENX;
    int y = SCREENY;
    int steps =0;

    public:
        Field(std::string);
        void Draw(sf::RenderWindow& window, bool &transparenting);

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

class GameOver: public sf::RectangleShape{
    std::stringstream ss;
    sf::Text txt;
    sf::Texture bg;
    sf::RectangleShape grey;

    public:
        GameOver(sf::Font &font);
        void Draw(sf::RenderWindow &W);
};