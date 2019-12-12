
#ifndef ROCK_PLAYER_H
#define ROCK_PLAYER_H


#include "Fist.h"

class Player {
public:
    virtual ~Player() {};
    virtual Fist *makeFist() {};
};


#endif //ROCK_PLAYER_H
