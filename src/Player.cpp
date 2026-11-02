#include "Player.h"

// Returns true if the player asks to quit the game.
bool handleInput(char command, Position& player) {
    if (command == 'q') {
        return true;
    }
    if (command == 's' && player.y == GROUND_Y) {
        player.y = TOP_Y;
    }
    return false;
}

bool checkCollision(const Position& player,
                    const std::vector<Position>& obstacles) {
    for (const Position& obs : obstacles) {
        if (obs.x == player.x && obs.y == player.y) {
            return true;
        }
    }
    return false;
}
