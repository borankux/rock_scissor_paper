#include <iostream>
#include "Fist.h"
#include "Player.h"
#include "User.h"
#include "Computer.h"
#include "Game.h"

int main() {

    Computer *computer = new Computer();
    User     *user     = new User();

    Game *game = new Game((Player *)user, (Player *)computer);
    game->init();

    while (true) {
        game->hint();
        game->play();
    }

    return 0;
}
