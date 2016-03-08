#include <string>
#pragma once

class TicTacToe
{
private:
	char grid[3][3];
	int numX;
	int numO;
public:
	TicTacToe();
	void reset();
	bool move(int row, int col);
	void print();
	std::string over();
	~TicTacToe();
};

