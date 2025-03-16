#include "../include/Field.hpp"

Field::Field(std::string file){
    bgtx.loadFromFile(file);
    bg.setTexture(&(this->bgtx));
    bg.setPosition(0,0);
    bg.setSize(sf::Vector2f(x, y));
    bg.setOutlineColor(sf::Color::Black);

    borders.setSize(sf::Vector2f(x-4,y-4));
    borders.setFillColor(sf::Color(0x00000000));
    borders.setOrigin(sf::Vector2f(borders.getSize().x/2, borders.getSize().y/2));
    borders.setPosition(sf::Vector2f(bg.getSize().x/2, bg.getSize().y/2));
    borders.setOutlineColor(sf::Color(0x2f3832ff));
    borders.setOutlineThickness(10);
    
}

void Field::Draw(sf::RenderWindow& window, bool &transparenting){
    window.draw(bg);

    if(transparenting && (++steps%40 < 20)){

        window.draw(borders);
    }
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

