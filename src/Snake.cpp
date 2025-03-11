#include "../include/Snake.hpp"

Snake::Snake(int part_count){
    for(int i=0; i<part_count; i++){
        parts.push_back(Part(sf::Vector2f(SCREENX/2, SCREENY/2)));
    }
}

void Snake::Draw(sf::RenderWindow &W){
    for(const Part i: parts){
        W.draw(i);
    }
}
