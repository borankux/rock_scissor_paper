//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#include "Game.h"

Game::Game(Player *player1, Player *player2) {
    this->player1 = player1;
    this->player2 = player2;
}

void Game::init() {
    std::cout<<"------------------------------------";
    std::cout<< "\n"
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
                "                                                           \n"
                "                                                           \n"
                "                                                           \n"
                "                                                           \n"
                "                                                           \n"
                "                                                           \n"
                "                                                           ";
}

void Game::play() {

}

void Game::hint() {

}
