#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>

#define FRAME_LIMIT 75

#define SCREENX 800
#define SCREENY 800

#define POSX 800
#define POSY 300

#define CBITS 32

class Game: public sf::RenderWindow{
    std::string _title;

    public:
        Game(std::string);

        static void CreateWindow(sf::RenderWindow &W, sf::String title);

        void Run();

};
