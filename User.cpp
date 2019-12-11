//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#include "User.h"

Fist *User::makeFist() {
    int val = 0;
    std::cout << "\n请输入拳头:\n";
    std::cin >> val;
    Fist *fist = new Fist(val);
    return fist;
}

User::User() {

}
