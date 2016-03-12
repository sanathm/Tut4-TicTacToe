#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main(){
	TicTacToe t = TicTacToe();
	int row, col;
	for (int i = 0; i < 9; i++){
		t.print();
		cout << endl << "Enter row and col: ";
		cin >> row;
		cin >> col;
		t.move(--row, --col);
	}
}