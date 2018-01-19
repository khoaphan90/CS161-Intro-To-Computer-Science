/****************************************************************************************
// Name: Khoa Phan
// Date: January 29, 2017
// Description: This is a program written to create a function that takes time as an 
// input then displays the distance that is has fallen during that time.
*****************************************************************************************/

#include <iostream>
using namespace std;

// Function prototype
double fallDistance(double time);

/*
int main()
{
	double inTime;

	// Prompt user to input time in seconds
	cout << "Enter the time in seconds: " << endl;
		cin >> inTime;

	// Call the fallDistance function with user inputted time in seconds
	fallDistance(inTime);
	
	// Display results of function
	cout << fallDistance(inTime) << endl;

	return 0;
}
*/

/*
fallDistance
A function that takes the input of time in seconds and calculates the distance
in meters that it has traveled using a scientific formula
*/

double fallDistance(double time)
{
	// Set variables
	const double gravity = 9.8;
	double distance;

	// Formula used for calculation
	distance =  (0.5) * gravity * (time * time);

	// Returning the function callout back to main
	return distance;
}