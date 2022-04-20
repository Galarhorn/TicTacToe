#include <iostream>
#include "TicTacToe.h"
using std::cout;

int main()
{
	init();

	while (!is_game_over()) {
		make_next_move();
	}
	print();
}