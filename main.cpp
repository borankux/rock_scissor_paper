#include <iostream>
#include "Fist.h"
#include "Player.h"
#include "User.h"
#include "Computer.h"

int main() {

    auto *user = new User();
    auto *computer = new Computer();

    int result = user->makeFist()->canWin(computer->makeFist());

    std::cout << result;

    return 0;
}
