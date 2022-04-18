#include <iostream>
using std::cout;
using std::cin;

char board[3][3];
enum { EMPTY = ' ', CROSS = 'X', ZERO = 'O' };

char player_char;
char computer_char;

void init() {
	setlocale(LC_ALL, "russian");
	do {
		cout << "�������� ���� ����� [X | O]: ";
		cin >> player_char;
		player_char = toupper(player_char); // ������ ��������� ����� � ������� 'x' -> 'X'
	} while (player_char != 'X' && player_char != 'O');

	computer_char = (player_char == 'X' ? 'O' : 'X');
}



void print(const char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		cout << ' ' << board[i][0];
		for (int j = 1; j < 3; j++) {
			cout << " | " << board[i][j];
		}
		cout << '\n';
		if (i == 2)
		for (int j = 0; j < 3; j++) {
			cout << "---" << ((j == 2) ? '\n' : '+');
		}
	}
}

bool is_full(const char board[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j < 3; j++)
			if (board[i][j] == EMPTY)
				return false;
	}

	return true;
}