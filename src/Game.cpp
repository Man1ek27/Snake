#include "../include/Game.hpp"

Game::Game(std::string title): _title{title}{
    this->font.loadFromFile(("../fonts/OpenSans-Semibold.ttf"));
}



void Game::Run(){
    sf::RenderWindow W;
    this->CreateNewWindow(W, _title);

    Field board("../images/background.jpg");
    Snake snake(4);

    sf::Event e;
    int steps=1;
    Fruit fruit;


    //Pause
    Pause pause(font);

    bool spacePressed = false;
    while(W.isOpen()){
        while(W.pollEvent(e)){
            if(e.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) W.close();
            snake.CatchEvent(e, pause , W);
            if(e.type == sf::Event::KeyPressed && e.key.code == sf::Keyboard::Space && !spacePressed){
                std::cout << "Space pressed" << std::endl; 
                spacePressed = true;
                if(snake.getSpeed()){
                    snake.setSpeed(0);
                    spacePressed = false;
                }
                else{
                    for(int i=3; i>=0; i--){
                        board.Draw(W);
                        W.draw(fruit);
                        snake.Draw(W);
                        pause.Draw(W, std::to_string(i));
                        sf::sleep(sf::seconds(1));
                        e = sf::Event();
                
                        W.display();
                        spacePressed = false;
                    }

                    snake.setSpeed(1);
                }
            }
            sf::Event tempEvent;
            while (W.pollEvent(tempEvent)) {}
                
        }
        

        //std::cout << steps << std::endl;
        
        if((++steps)%10 == 0){
            snake.UpdatePos();
            //std::cout << snake.direction << std::endl;
            steps =1;
        }
        
        
        board.Draw(W);
        W.draw(fruit);
        snake.Draw(W);

        if(snake.getSpeed() == 0){
            pause.Draw(W);
        }
        W.display();
    }
    
}

void Game::CreateNewWindow(sf::RenderWindow &W, sf::String title){
    W.create(sf::VideoMode(SCREENX, SCREENY, CBITS), title);
    W.setActive(true);
    W.setFramerateLimit(FRAME_LIMIT);
    W.setPosition(sf::Vector2i(POSX, POSY));
    W.setKeyRepeatEnabled(false);
    W.setKeyRepeatEnabled(false);
    

    sf::Image icon;
    if(!icon.loadFromFile("../images/snake.png")){
        std::cerr << "ERROR loading icon!" << std::endl;
    }
    W.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());
}

