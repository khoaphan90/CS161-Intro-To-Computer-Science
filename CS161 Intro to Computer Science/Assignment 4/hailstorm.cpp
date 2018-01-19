/****************************************************************************************
// Name: Khoa Phan
// Date: January 29, 2017
// Description: This is a program written to create a function that takes an integer
// value, then goes through a series of steps until the result turns to 1. The function
// will calculate how many steps it takes to reach that value of 1 and return that
// information.
*****************************************************************************************/
#include <iostream>
using namespace std;

//Function proto
int hailstone(int input);

/*
int main()
{
int num;
char identifier = 'x';

while (true)
{
	cout << "Enter number: " << endl;
	cin >> num;
	hailstone(num);


	cout << hailstone(num) << " step(s).\n\n" << endl;
}
return 0;
}
*/


/* 
hailstone

This function is used to test the value of the input to determine how
many steps it will take until it reachs the value of 1. The steps are
determined by using a distinct formulas when they are either even or
odd.
*/

int hailstone(int input)
{

// Intialize the number of steps
int steps = 0;


// Checks to see if input is 1, if not it will go through loop
while (input != 1)
	if (input % 2 == 0)		// Check to see if number is even
	{
		input /= 2;
		steps++;
	}
	else					// If not even, must be odd, thus else statement
	{
		input = (input * 3) + 1;
		steps++;
	}
return steps;
}