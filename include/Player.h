
// Returns true if the player asks to quit the game.
bool handleInput(char command, Position& player);

bool checkCollision(const Position& player,
                    const std::vector<Position>& obstacles);
