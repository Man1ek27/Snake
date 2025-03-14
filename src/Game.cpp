#include "../include/Game.hpp"

Game::Game(std::string title): _title{title}{}



void Game::Run(){
    sf::RenderWindow W;
    this->CreateNewWindow(W, _title);

    Field board("../images/background.jpg");
    Snake snake(4);

    sf::Event e;
    int steps=1;
    Fruit fruit;

    while(W.isOpen()){
        while(W.pollEvent(e)){
            if(e.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) W.close();
            snake.CatchEvent(e);
        }
        

        //std::cout << steps << std::endl;
        
        if((++steps)%10 == 0){
            snake.UpdatePos();
            std::cout << snake.direction << std::endl;
            steps =1;
        }
        board.Draw(W);
        W.draw(fruit);
        snake.Draw(W);
        W.display();
    }
    
}

void Game::CreateNewWindow(sf::RenderWindow &W, sf::String title){
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

