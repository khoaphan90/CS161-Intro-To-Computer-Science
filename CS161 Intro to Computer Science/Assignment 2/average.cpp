/******************************************************************************************
** Name: Khoa Phan
** Date: January 16, 2017
** Description: A program that calculates the average of a set a numbers from user input.
******************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	//defines input variables and 
	double  num1,
		num2,
		num3,
		num4,
		num5,
		average;

	//prompts user to enter information and receive inputs for the corresponding variables
	cout << "Please enter five numbers." << endl;
	cin >> num1 >> num2 >> num3 >> num4 >> num5;

	//adds all the 5 input variables then divides them by 5, all the inputs
	average = (num1 + num2 + num3 + num4 + num5) / 5;

	//displays the average to the user in a sentence
	cout << "The average of these five numbers is " << average << "." << endl;

	return 0;
}
