//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#include "Computer.h"


Computer::Computer (){};

Fist *Computer::makeFist() {
    srand (time(NULL));
    int computer = 0;
    computer = rand() % 3 + 1;
    Fist *fist = new Fist(computer);
    return fist;
}
