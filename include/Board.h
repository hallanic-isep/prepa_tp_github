#ifndef BOARD_H
#define BOARD_H

#include <vector>

struct Position {
    int x;
    int y;
};

void displayState(const Position& player,
                  const std::vector<Position>& obstacles,
                  int score,
                  int lives);

#endif