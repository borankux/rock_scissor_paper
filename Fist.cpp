
#include "Fist.h"

Fist::Fist(int fist) {
    this->value = fist;
}

std::string Fist::getName() {
    if (value == 1) {
        return STR_ROCK;
    }

    if (value == 2) {
        return STR_SCISSOR;
    }

    if(value == 3) {
        return STR_PAPER;
    }
}

int Fist::getVal() {
    return value;
}

int Fist::canWin(Fist *fist) {
    if(value == fist->getVal()) {
        return DRAW;
    }

    if(value == ROCK && fist->getVal() == PAPER) {
        return LOSE;
    }

    if(value == SCISSOR && fist->getVal() == ROCK) {
        return LOSE;
    }

    if(value == PAPER && fist->getVal() == SCISSOR) {
        return LOSE;
    }

    return true;
}
