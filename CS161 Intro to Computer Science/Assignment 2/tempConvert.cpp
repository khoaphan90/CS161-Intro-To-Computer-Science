/******************************************************************************************
** Name: Khoa Phan
** Date: January 16, 2017
** Description: A program that converts celcius temperatures into fahrenheit temperatures.
******************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	//define variables needed

	double	celcius,
			fahrenheit;

	//prompts user to input information
	cout << "Please enter a Celcius temperature." << endl;
	cin >> celcius;

	//converts celcius to fahrenheit using formula
	fahrenheit = ((9 / 5) * celcius) + 32;

	//outputs conversion in fahrenheit
	cout << "The equivalent Fahrenheit temperature is:" << endl;
	cout << fahrenheit << endl;
	
	return 0;
}
