#include <iostream>
#include <stdio.h>


#ifndef ROCK_FIST_H
#define ROCK_FIST_H


class Fist {

public:
    Fist();

    static const int ROCK = 1;
    static const int SCISSOR = 2;
    static const int PAPER = 3;

    static const int WIN = 1;
    static const int LOSE = -1;
    static const int DRAW = 0;

    const std::string STR_ROCK = "石头";
    const std::string STR_SCISSOR = "剪刀";
    const std::string STR_PAPER = "布";
    const std::string STR_UNKNOWN = "无效出拳";

    Fist(int fist);
    std::string getName();
    int getVal();
    int canWin(Fist *fist);

private:
    int value;
};


#endif //ROCK_FIST_H
