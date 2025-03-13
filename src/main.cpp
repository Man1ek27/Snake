#include <iostream>
#include "../include/Game.hpp"

int main(){
    srand(time(NULL));
    Game Gra("Snake");
    Gra.Run();
return 0;
}