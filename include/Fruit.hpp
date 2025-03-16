#pragma once 

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.hpp"

class Fruit: public sf::Sprite{
      sf::Image skin;
      sf::Texture skinTx;

      public:
        Fruit();
        void eaten();

};