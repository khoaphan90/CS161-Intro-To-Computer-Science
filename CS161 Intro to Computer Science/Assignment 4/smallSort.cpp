/****************************************************************************************
// Name: Khoa Phan
// Date: January 29, 2017
// Description: This is a program written to create a void function that 
// takes a set of three integers and sort them in ascending order.
*****************************************************************************************/

#include <iostream>
using namespace std;

// Function prototype
void smallSort(int& a, int& b, int& c);

/*
int main()
{
	// Set variables
	int num1, num2, num3;

	// Obtain user inputs
	cout << "Please enter three numbers and I will sort them: ";
	cin >> num1 >> num2 >> num3;

	// Call the smallSort function
	smallSort(num1, num2, num3);

	// Display results
	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
}
*/

/* 

smallSort

This function takes three integers and sorts them in ascending order 
*/ 

void smallSort(int& a, int& b, int& c)
{
	// Sets temporary storage location
	int temp;

	// These if statements will cause the values to switch if they are true,
	// putting them in ascending order as a result
	if (a > b)
	{
		temp = a;			// Stores 'a' as a temporary value
		a = b;				// Takes 'b' and sets it as 'a' new value
		b = temp;			// Takes stored value and sets as the new 'b'
	}
	if (a > c)
	{
		temp = a;			// Stores 'a' as a temporary value
		a = c;				// Takes 'c' and sets it as 'a' new value
		c = temp;			// Takes stored value and sets as the new 'c'
	}
	if (b > c)
	{
		temp = b;			// Stores 'b' as a temporary value
		b = c;				// Takes 'c' and sets it as 'b' new value
		c = temp;			// Takes stored value and sets as the new 'c'
	}
}