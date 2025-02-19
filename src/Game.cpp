#include "../include/Game.hpp"

Game::Game(std::string title): _title{title}{}



void Game::Run(){
    sf::RenderWindow W;
    this->CreateWindow(W, _title);


    sf::Event e;
    while(W.isOpen()){
        while(W.pollEvent(e)){
            if(e.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) W.close();
        }

        W.display();
    }
    
}

void Game::CreateWindow(sf::RenderWindow &W, sf::String title){
    W.create(sf::VideoMode(SCREENX, SCREENY, CBITS), title);
    W.setActive(true);
    W.setFramerateLimit(FRAME_LIMIT);
    W.setPosition(sf::Vector2i(POSX, POSY));
    W.setKeyRepeatEnabled(false);

    sf::Image icon;
    if(!icon.loadFromFile("../images/snake.png")){
        std::cerr << "ERROR loading icon!" << std::endl;
    }
    W.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

