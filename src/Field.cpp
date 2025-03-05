#include "../include/Field.hpp"

Field::Field(std::string file){
    bgtx.loadFromFile(file);
    bg.setTexture(&(this->bgtx));
    bg.setPosition(0,0);
    bg.setSize(sf::Vector2f(x, y));
}

void Field::Draw(sf::RenderWindow& window){
    window.draw(bg);
}
