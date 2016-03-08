#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
	reset();
}

void TicTacToe::reset(){
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++)
			grid[i][j] = '_';
	}
	numX = 0;
	numO = 0;
}

bool TicTacToe::move(int row, int col){
	bool valid = false;
	if (row < 3 && row >= 0 && col < 3 && col >= 0){
		if (grid[row][col] == '_'){
			if (numX == numO){
				grid[row][col] = 'X';
				numX++;
			}
			else{
				grid[row][col] = 'O';
				numO++;
			}
			valid = true;
		}
	}
	return valid;
}

void TicTacToe::print(){
	cout << endl;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
}

TicTacToe::~TicTacToe()
{
}
