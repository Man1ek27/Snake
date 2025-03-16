#include "../include/Snake.hpp"

Snake::Snake(int part_count){
    parts.push_back(Part(sf::Vector2f(SCREENX/2,(SCREENY/2)+1*23),sf::Color(0xffff00ff)));
    for(int i=1; i<part_count; i++){
        parts.push_back(Part(sf::Vector2f(SCREENX/2,(SCREENY/2)+i*23)));
    }
}

void Snake::Draw(sf::RenderWindow &W){
    for(const Part i: parts){
        W.draw(i);
    }
}

void Snake::CatchEvent(sf::Event &e, Pause &pause, sf::RenderWindow &W){
    if (e.type == sf::Event::KeyPressed) {
        switch (e.key.code) {
            case sf::Keyboard::Up:
            case sf::Keyboard::W:
                if(direction != "down" && speed) direction = "up";
                break;

            case sf::Keyboard::Down:
            case sf::Keyboard::S:
                if(direction != "up" && speed)direction = "down";
                break;

            case sf::Keyboard::Left:
            case sf::Keyboard::A:
                if(direction != "right" && speed) direction = "left";
                break;

            case sf::Keyboard::Right:
            case sf::Keyboard::D:
                if(direction != "left" && speed )direction = "right";
                break;
            default:
                break;
        }
    }
    
}

void Snake::UpdatePos(){
    int x = (direction == "left"?-1:(direction == "right"?1:0));
    int y = (direction == "up"?-1:(direction == "down"?1:0));

    if(speed){
        sf::Vector2f prev(parts[0].getPosition().x, parts[0].getPosition().y);
        parts[0].setPosition(sf::Vector2f(parts[0].getPosition().x + (21*speed * x), parts[0].getPosition().y + (21*speed * y)));

        //wyjscie boki
        if(parts[0].getPosition().x > SCREENX ) parts[0].setPosition(sf::Vector2f(0, parts[0].getPosition().y));
        if(parts[0].getPosition().x < 0 ) parts[0].setPosition(sf::Vector2f(SCREENX, parts[0].getPosition().y));

        //wyjscie gora dol
        if(parts[0].getPosition().y > SCREENY ) parts[0].setPosition(sf::Vector2f(parts[0].getPosition().x, 0));
        if(parts[0].getPosition().y < 0 ) parts[0].setPosition(sf::Vector2f(parts[0].getPosition().x, SCREENY));

        for(auto i = parts.begin()+1; i< parts.end(); i++){
            sf::Vector2f temp((*i).getPosition().x, (*i).getPosition().y);
            (*i).setPosition(prev);
            prev = temp;
        }
    }
}


float Snake::getSpeed(){
    return speed;
}

void Snake::setSpeed(float sped){
    speed = sped;
}

