#include "Board.h"

void displayState(const Position& player,
                  const std::vector<Position>& obstacles,
                  int score,
                  int lives) {
    std::vector<std::string> grid(HEIGHT, std::string(WIDTH, ' '));

    for (const Position& obs : obstacles) {
        if (obs.x >= 0 && obs.x < WIDTH) {
            grid[obs.y][obs.x] = '#';
        }
    }
    grid[player.y][player.x] = '@';

    std::cout << "\n+" << std::string(WIDTH, '-') << "+\n";
    for (std::size_t i = 0; i < grid.size(); ++i) {
        std::cout << "|" << grid[i] << "|\n";
    }
    std::cout << "+" << std::string(WIDTH, '-') << "+\n";
    std::cout << "Score: " << score << "   Lives: " << lives << "\n";
}
