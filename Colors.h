//
// Created by Ablat, Frank(AWF) on 2019/12/12.
//

#ifndef ROCK_COLORS_H
#define ROCK_COLORS_H


#include <string>

class Colors {
public:
    const std::string  HEADER    = "\033[95m";
    const std::string  OKBLUE    = "\033[94m";
    const std::string  OKGREEN   = "\033[92m";
    const std::string  WARNING   = "\033[93m";
    const std::string  FAIL      = "\033[91m";
    const std::string  ENDC      = "\033[0m";
    const std::string  BOLD      = "\033[1m";
    const std::string  UNDERLINE = "\033[4m";
};


#endif //ROCK_COLORS_H
