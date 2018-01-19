/*************************************************************
// Name: Khoa Phan
// Date: March 6, 2017
// Description: This is the class file for the TicTacToe class
//				that is needed to play this game.
*************************************************************/

#ifndef TICTACTOE
#define TICTACTOE
#include "Board.hpp"

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class TicTacToe
{
private:
	char player;
	bool gameValid = false;
	bool gameStart = false;
public:
	TicTacToe();
	void play();
	void setPlayer();
};
#endif // TICTACTOE