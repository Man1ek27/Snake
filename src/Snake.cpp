#include "../include/Snake.hpp"

Snake::Snake(int part_count){
    for(int i=0; i<part_count; i++){
        parts.push_back(Part(sf::Vector2f(SCREENX/2,(SCREENY/2)+i*23)));
    }
}

void Snake::Draw(sf::RenderWindow &W){
    for(const Part i: parts){
        W.draw(i);
    }
}

void Snake::CatchEvent(sf::Event &e){
    if(e.type == sf::Event::KeyPressed && (e.key.code == sf::Keyboard::Up || e.key.code == sf::Keyboard::W)) direction = "up";
    if(e.type == sf::Event::KeyPressed && (e.key.code == sf::Keyboard::Down || e.key.code == sf::Keyboard::S)) direction = "down";
    if(e.type == sf::Event::KeyPressed && (e.key.code == sf::Keyboard::Left || e.key.code == sf::Keyboard::A)) direction = "left";
    if(e.type == sf::Event::KeyPressed && (e.key.code == sf::Keyboard::Right || e.key.code == sf::Keyboard::D)) direction = "right";
    
    if(e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Space){
        if(speed != 0) speed =0;
        else speed =0;
    }
}

void Snake::UpdatePos(){
    sf::Vector2f prev(parts[0].getPosition().x, parts[0].getPosition().y);
    parts[0].setPosition(sf::Vector2f(parts[0].getPosition().x + (21*speed), parts[0].getPosition().y));
    for(auto i = parts.begin()+1; i< parts.end(); i++){
        sf::Vector2f temp((*i).getPosition().x, (*i).getPosition().y);
        (*i).setPosition(prev);
        prev = temp;
    }
}


