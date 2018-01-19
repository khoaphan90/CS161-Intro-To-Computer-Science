/*************************************************************
// Name: Khoa Phan
// Date: March 6, 2017
// Description: This file contains the functions for the
//			board class that is used to initiate and
//			take user input and apply it to the 
//			game board.
*************************************************************/


#include <iostream>
#include "Board.hpp"
#include "ticTacToe.hpp"
using namespace std;


/*************************************************************
//			Board::Board() 
// This is the default constructor that prints out the 
// gameboard.
*************************************************************/
Board::Board()
{	
	//Print out game board
	for (int i = 0; i < 4;i++)
	{
		cout << endl;
		for (int j = 0; j < 4;j++)
			cout << bArr[i][j] << " ";
	}

	cout << endl << endl;
}


/*************************************************************
//			Board::makeMove() 
// This function recieves user input for their move choice
// and checks to see if that space is occupied. If open, it
// will write the user's move or reject their move if it
// is occupied. Depending on outcome, it returns the next
// player.
*************************************************************/
void Board::makeMove(int x, int y, char &p)
{
	// Check to see whose move it is
	if (p == 'X')
	{
		// Checks to valid moves
		if ((bArr[y + 1][x + 1] == "X") ||
			(bArr[y + 1][x + 1] == "O"))
		{
			cout << "Location taken. Try again.\n";
			p = 'X';
		}
		else
		{
			bArr[y + 1][x + 1] = 'X';
			totalMoves++;
			p = 'O';
		}
	}
	else if (p == 'O')
	{
		// Checks to valid moves
		if ((bArr[y + 1][x + 1] == "X") ||
			(bArr[y + 1][x + 1] == "O"))
		{
			cout << "Location taken. Try again.\n";
			p = 'O';
		}
		else
		{
			bArr[y + 1][x + 1] = 'O';
			totalMoves++;
			p = 'X';
		}
	}
	cout << endl;

	// Call print of the board after moves
	print();
}

/*************************************************************
//			Board::gameState() 
// This function checks to see what the state of the game is
// by checking the board and see if any of the conditions are
// met. If not, results are returned default to UNFINISHED.
*************************************************************/
result Board::gameState()
{
	// Checks if max amt of moves have been achieved.
	if (totalMoves == 9)
		return DRAW;

	//Checks if X has won, all possible winning combos
	for (int i = 1; i < 4; i++)
	{
		if (bArr[1][i] == "X" && bArr[2][i] == "X" && bArr[3][i] == "X")
			return X_WON;
		if (bArr[i][1] == "X" && bArr[i][2] == "X" && bArr[i][3] == "X")
			return X_WON;
		if (bArr[1][1] == "X" && bArr[2][2] == "X" && bArr[3][3] == "X")
			return X_WON;
		if (bArr[3][1] == "X" && bArr[2][2] == "X" && bArr[1][3] == "X")
			return X_WON;
	}
	//Checks if Y has won, all possible winning combos
	for (int i = 1; i < 4; i++)
	{
		if (bArr[1][i] == "O" && bArr[2][i] == "O" && bArr[3][i] == "O")
			return O_WON;
		if (bArr[i][1] == "O" && bArr[i][2] == "O" && bArr[i][3] == "O")
			return O_WON;
		if (bArr[1][1] == "O" && bArr[2][2] == "O" && bArr[3][3] == "O")
			return O_WON;
		if (bArr[3][1] == "O" && bArr[2][2] == "O" && bArr[1][3] == "O")
			return O_WON;
	}
	
	//If not draw or winner declared
	return UNFINISHED;
}


/*************************************************************
//			Board::print() 
// This function prints the board with the updated inputs.
*************************************************************/
void Board::print()
{
	//Prints board array
	for (int i = 0; i < 4;i++)
	{
		cout << endl;
		for (int j = 0; j < 4;j++)
			cout << bArr[i][j] << " ";
	}
	cout << endl << endl;
}