#ifndef _GAME_H_
#define _GAME_H_

#include "../include/Board.h"

class Game
{
public:
    Game(const Board& board);
    ~Game() = default;
    void run();

private:
    Board board_;
};




#endif
