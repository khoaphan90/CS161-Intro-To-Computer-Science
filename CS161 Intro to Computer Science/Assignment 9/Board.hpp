/*************************************************************
// Name: Khoa Phan
// Date: March 6, 2017
// Description: This is the class file for the Board class
//				that is needed to create the playing field
//				for this game and will be updated after each
//				valid move.
*************************************************************/
#ifndef BOARD
#define BOARD

#include <iostream>
#include <string>

//Declaring enum for the game state
enum result {UNFINISHED, X_WON, O_WON, DRAW};

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Board
{
private:
	int totalMoves = 0;

	// Creates a modifiable 4x4 board with
	// coordinates and empty locations
	string bArr[4][4] = {
	{ " ", "0", "1", "2" },
	{ "0", ".", ".", "." },
	{ "1", ".", ".", "." },
	{ "2", ".", ".", "." } };

public:
	Board();
	void makeMove(int, int, char&);
	result gameState();
	void print();
};
#endif // BOARD.HPP