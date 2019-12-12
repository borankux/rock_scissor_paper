//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#include "Game.h"
#include "Colors.h"

Game::Game(Player *player1, Player *player2) {
    this->player1 = player1;
    this->player2 = player2;
}

void Game::init() {
    Colors c;
    std::cout<< c.OKBLUE + "\n"
                "                                                           \n"
                "                                                           \n"
                "RRRRRRRRRRRRRRRRR      SSSSSSSSSSSSSSS PPPPPPPPPPPPPPPPP   \n"
                "R::::::::::::::::R   SS:::::::::::::::SP::::::::::::::::P  \n"
                "R::::::RRRRRR:::::R S:::::SSSSSS::::::SP::::::PPPPPP:::::P \n"
                "RR:::::R     R:::::RS:::::S     SSSSSSSPP:::::P     P:::::P\n"
                "  R::::R     R:::::RS:::::S              P::::P     P:::::P\n"
                "  R::::R     R:::::RS:::::S              P::::P     P:::::P\n"
                "  R::::RRRRRR:::::R  S::::SSSS           P::::PPPPPP:::::P \n"
                "  R:::::::::::::RR    SS::::::SSSSS      P:::::::::::::PP  \n"
                "  R::::RRRRRR:::::R     SSS::::::::SS    P::::PPPPPPPPP    \n"
                "  R::::R     R:::::R       SSSSSS::::S   P::::P            \n"
                "  R::::R     R:::::R            S:::::S  P::::P            \n"
                "  R::::R     R:::::R            S:::::S  P::::P            \n"
                "RR:::::R     R:::::RSSSSSSS     S:::::SPP::::::PP          \n"
                "R::::::R     R:::::RS::::::SSSSSS:::::SP::::::::P          \n"
                "R::::::R     R:::::RS:::::::::::::::SS P::::::::P          \n"
                "RRRRRRRR     RRRRRRR SSSSSSSSSSSSSSS   PPPPPPPPPP          \n"
                + c.ENDC + c.OKGREEN +
                "                                                           \n"
                "                    石头剪刀布游戏                           \n"
                "                                                           " + c.ENDC;
}

void Game::play() {
    Colors c;

    Fist *fist1 = player1->makeFist();
    Fist *fist2 = player2->makeFist();
    std::cout<< "\n 你的出拳  :" + c.OKGREEN + fist1->getName() + c.ENDC;
    std::cout<< "\n 电脑出拳  :" + c.OKBLUE  + fist2->getName() + c.ENDC;

    int result = fist1->canWin(fist2);

    if(result == Fist::DRAW) {
        std::cout << "\n" + c.UNDERLINE + " 平手！" + c.ENDC;
    }

    if(result == Fist::WIN) {
        std::cout << "\n" + c.OKGREEN + " 你赢了！" + c.ENDC;
    }

    if(result == Fist::LOSE) {
        std::cout << "\n" + c.FAIL + " 你输了！" + c.ENDC;
    }

    std::cout << "\n\n\n";
}

void Game::hint() {
    Colors c;
    std::cout << "\n ------------------------- GAME START --------------------------------\n";

    std::cout<< c.OKGREEN + "\n 1) 石头" + c.ENDC;
    std::cout<< c.OKGREEN + "\n 2) 剪刀" + c.ENDC;
    std::cout<< c.OKGREEN + "\n 3) 布料" + c.ENDC;
}
