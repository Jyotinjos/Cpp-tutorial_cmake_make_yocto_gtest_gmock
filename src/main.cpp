#include<iostream>
#include "../include/Game.h"
#include "../include/Board.h" 

int main()
{
	Board board;
	Game game(board);
	game.run();

	return 0;
}
