#include <iostream>
#include "TicTacToe.h"
using std::cout;

int main()
{
	init();

	while (!is_game_over()) {
		print();
		get_coords();
	}
}