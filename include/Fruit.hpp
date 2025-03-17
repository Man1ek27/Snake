#pragma once 

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Game.hpp"

class Fruit: public sf::Sprite{
      sf::Image skin;
      sf::Texture skinTx;

      sf::Texture bananaTx;
      bool isBanana = false;

      public:
        Fruit();
        void eaten(bool &banana);

};