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



Pause::Pause(sf::Font &font){
    this->setPosition(0,0);
    this->setSize(sf::Vector2f(x,y));
    this->setFillColor(sf::Color(0x59545460));

    ss.str("PAUSE");
    this->txt.setCharacterSize(100);
    this->txt.setFillColor(sf::Color(0xffffffff));
    this->txt.setFont(font);
    this->txt.setString(ss.str());
    // this->txt.setOrigin(sf::Vector2f(this->txt.getGlobalBounds().width/2, this->txt.getGlobalBounds().height/2));
    // this->txt.setPosition(sf::Vector2f(SCREENX/2, SCREENY/2));
    this->txt.setOutlineThickness(1);
    this->txt.setOutlineColor(sf::Color(0x000000ff));

}

void Pause::Draw(sf::RenderWindow &W){
    W.draw(*this);
    this->txt.setOrigin(sf::Vector2f(this->txt.getGlobalBounds().width/2, this->txt.getGlobalBounds().height/2));
    this->txt.setPosition(sf::Vector2f(SCREENX/2, SCREENY/2));
    this->txt.setString(ss.str());
    W.draw(this->txt);
}

void Pause::Draw(sf::RenderWindow &W, std::string a){
    W.draw(*this);
    this->txt.setString(a);
    this->txt.setOrigin(sf::Vector2f(this->txt.getGlobalBounds().width/2, this->txt.getGlobalBounds().height/2));
    this->txt.setPosition(sf::Vector2f(SCREENX/2, SCREENY/2));
    W.draw(this->txt);
}

