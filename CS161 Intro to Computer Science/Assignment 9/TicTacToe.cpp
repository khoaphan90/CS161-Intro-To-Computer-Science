/*************************************************************
// Name: Khoa Phan
// Date: March 6, 2017
// Description: This file contains the functions for the
//			TicTacToe class that is used to initiate 
//			the first player and take inputs that will
//			be received by the Board class to play the
//			game.
*************************************************************/

#include <iostream>
#include <stdio.h>
#include "Board.hpp"
#include "ticTacToe.hpp"
using namespace std;

int main()
{
	TicTacToe game;
	game.setPlayer();
	return 0;
}

/*************************************************************
//			TicTacToe::TicTacToe() 
// This is the default constructor.
*************************************************************/
TicTacToe::TicTacToe(){}

/*************************************************************
//			TicTacToe::setPlayer() 
// This function asks for input on which user will go first.
*************************************************************/
void TicTacToe::setPlayer()
{
	char fTurn;
	
	//Loops until valid input is received
	while (gameStart == false)
	{
		//Prompts user for first turn.
		cout << "Which player will go first: X or O?\n";
		cin >> fTurn;

		//Checks for valid input then starts game
		if (fTurn == 'x' || fTurn == 'X')
		{
			player = 'X';
			gameValid = true;
			gameStart = true;
			play();
		}
		if (fTurn == 'o' || fTurn == 'O')
		{
			player = 'O';
			gameValid = true;
			gameStart = true;
			play();
		}
	}
}



/*************************************************************
//			TicTacToe::play() 
// This function starts the game by calling the board class
// then prompting for input for user moves. It then receives
// if the game should continue based on the result returned.
*************************************************************/
void TicTacToe::play()
{	
	//Calls to start game
	Board game;
	int x = 0, y = 0;

	// Checks to see the game state
	while (gameValid == true)
	{
		//Ask for player Xs move
		if (player == 'X')
		{
			cout << "Please enter your move player "
				<< player << "." << endl;
			cin >> y >> x;
			if (x >= 0 && x < 4 && y >= 0 && y < 4)
			{
				cout << endl;
				game.makeMove(x, y, player);
			}
			else
				cout << "Invalid move." << endl << endl;
		}

		//Ask for player's Os move
		else if (player == 'O')
		{
			cout << "Please enter your move player "
				<< player << "." << endl;
			cin >> y >> x;
			if (x >= 0 && x < 4 || y >= 0 && y < 4)
			{
				cout << endl;
				game.makeMove(x, y, player);
			}
			else
				cout << "Invalid move." << endl << endl;
		}
		// Receive gameState result and checks to the state
		// of the game and if it should continue or not.
		result var = game.gameState();
		switch (var)
		{
		case X_WON: cout << "Player X has won the game!\n\n";
			gameValid = false;
			break;
		case O_WON: cout << "Player O has won the game!\n\n";
			gameValid = false;
			break;
		case DRAW:	cout << "Game is a draw.\n\n";
			gameValid = false;
			break;
		case UNFINISHED:
			break;
		}
	}
}