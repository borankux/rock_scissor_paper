//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#ifndef ROCK_COMPUTER_H
#define ROCK_COMPUTER_H


#include "Fist.h"
#include "Player.h"

class Computer :Player {
public:
    Computer();
    Fist *makeFist() override;
};


#endif //ROCK_COMPUTER_H
