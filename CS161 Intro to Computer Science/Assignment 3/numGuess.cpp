/****************************************************************************************
// Name: Khoa Phan
// Date: January 23, 2017
// Description: This is a program written to play a game where there user tries to guess
//				a random number that has been randomly generated. It will inform the user
//				whether their guess is too high or too low and will output the amount of 
//				tries once the number has been guessed.
*****************************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int randomNum,
		guess,
		numTries = 0;

	//Prompt user to enter a number to guess
	cout << "Please enter a number for the player to guess.\n";
	cin >> randomNum;
	
	//Prompt user to enter a number
	cout << "Please enter a number you would like to guess.\n";
	numTries += 1;
	cin >> guess;

	do
	{
		if (guess > randomNum)
		{
			cout << "Too high - try again.\n";
			numTries += 1;
			cin >> guess;

		}
		else if (guess < randomNum)
		{
			cout << "Too low - try again.\n";
			numTries += 1;
			cin >> guess;
		}

	} while (!(guess == randomNum));

	if (guess == randomNum)
		cout << "You've guessed it in " << numTries << " tries.\n";

	return 0;
}