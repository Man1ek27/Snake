#include "../include/Fruit.hpp"


Fruit::Fruit(){
    this->setPosition(sf::Vector2f(rand()%(SCREENX-3)+3, rand()%(SCREENY-3)+3));
    this->skin.loadFromFile("../images/fruit.png");
    this->skinTx.loadFromImage(this->skin, sf::IntRect(0,0, this->skin.getSize().x, this->skin.getSize().y));
    this->setOrigin(this->skin.getSize().x/2, this->skin.getSize().x/2);
    this->setTexture(skinTx);
}

void Fruit::eaten(){
    this->setPosition(sf::Vector2f(rand()%(SCREENX-3)+3, rand()%(SCREENY-3)+3));

}
