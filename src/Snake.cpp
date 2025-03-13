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

void Snake::CatchEvent(sf::Event &e){
    if (e.type == sf::Event::KeyPressed) {
        switch (e.key.code) {
            case sf::Keyboard::Up:
            case sf::Keyboard::W:
                if(direction != "down") direction = "up";
                break;

            case sf::Keyboard::Down:
            case sf::Keyboard::S:
                if(direction != "up")direction = "down";
                break;

            case sf::Keyboard::Left:
            case sf::Keyboard::A:
                if(direction != "right") direction = "left";
                break;

            case sf::Keyboard::Right:
            case sf::Keyboard::D:
                if(direction != "left" )direction = "right";
                break;

            case sf::Keyboard::Space:
                std::cout << "Space pressed" << std::endl;
                speed = (speed == 0) ? 1 : 0;
                break;

            default:
                break;
        }
    }
    
}

void Snake::UpdatePos(){
    int x = (direction == "left"?-1:(direction == "right"?1:0));
    int y = (direction == "up"?-1:(direction == "down"?1:0));

    sf::Vector2f prev(parts[0].getPosition().x, parts[0].getPosition().y);
    parts[0].setPosition(sf::Vector2f(parts[0].getPosition().x + (21*speed * x), parts[0].getPosition().y + (21*speed * y)));
    if(speed){
        for(auto i = parts.begin()+1; i< parts.end(); i++){
            sf::Vector2f temp((*i).getPosition().x, (*i).getPosition().y);
            (*i).setPosition(prev);
            prev = temp;
        }
    }
}


