#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h>


#define FRAME_LIMIT 75

#define SCREENX 800
#define SCREENY 800
#include "Field.hpp"
#include "Snake.hpp"
#include "Fruit.hpp"

#define POSX sf::VideoMode::getDesktopMode().width/2 - SCREENX/2
#define POSY sf::VideoMode::getDesktopMode().height/2 - SCREENY/2

#define CBITS 32

class Game: public sf::RenderWindow{
    std::string _title;

    public:
        Game(std::string);

        static void CreateNewWindow(sf::RenderWindow &W, sf::String title);

        void Run();

};
