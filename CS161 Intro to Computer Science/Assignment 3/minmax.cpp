/****************************************************************************************
// Name: Khoa Phan
// Date: January 22, 2017
// Description: This is a program written to obtain a number of integers from user input
//				and print out the minimum and maximum values based off user input.
*****************************************************************************************/
#include <iostream>

using namespace std;

int main()
{
	int
		min,				// Smallest integer inputted
		max,				// Largest integer inputted
		numInputs,			// Number of integers user wants to enter
		number;				// Value of the input the user enters

	// Get number of integers desired
	cout << "How many integers would you like to enter? \n";
	cin >> numInputs;

	// Prompts user to enter information
	if (numInputs >= 1)
	{
		cout << "Please enter " << numInputs << " integer(s).\n";
		cin >> number;				// Obtain first integer
		min = number;				// Sets first value as min
		max = number;				// Sets first value as max

		// Loop for additional user integer inputs
		for (int count = 1; count < (numInputs); ++count)
		{
			cin >> number;			// Gets next integer
			if (number <= min)		
				min = number;		// Sets minimum if true
			else if (number >= max)
			{
				max = number;		// Sets maximum if true
			}
		}
	}
	// Outputs final data
		cout << "Min: " << min << endl;
		cout << "Max: " << max << endl;

	return 0;
}
