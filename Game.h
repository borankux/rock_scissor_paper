//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#ifndef ROCK_GAME_H
#define ROCK_GAME_H


#include "User.h"

class Game {
private:
    Player *player1, *player2;

public:
    Game(Player *player1, Player *player2);

    void init();
    void play();
    void hint();
};


#endif //ROCK_GAME_H
