/*****************************************************************
// Name: Khoa Phan
// Date: February 18, 2017
// Description: This program is written to help identify the mode, 
//				the value which appears	the most in a set of data. 
//				It retrives data from an array and returns
//				the infomation in a vector.
*****************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Function Prototype
vector<int> findMode(int arr[], int size);

/*
int main()
{
	int size;										
	int* array;										
	int arraycount;									 
	vector<int> findMode(int array[], int size);	 
	int i;

	cout << "Enter the number to be compared: " << endl;
	cin >> size;

	cout << "Enter the numbers: " << endl;

	array = new int[size];

	for (arraycount = 0; arraycount < size; arraycount++)
		cin >> array[arraycount];

	vector<int> mode = findMode(array, size);
	for (i = 0; i < mode.size(); i++)
		cout << "Mode: " << mode[i] << endl;

	return 0;
}
*/

/******************************************************
				 findMode						  
 This function receives an array and its size		  
 then finds the highest value(s) and returns those   
 values as a vector.								 
*******************************************************/
vector<int> findMode(int arr[], int size)
{
	//Variable declaration
	vector<int> results;		// Vector to return modes
	int count = 0;			// Declare count value
	int highCount = 0;		// Declare highest count value

	//Analyzes array for duplicate values and counts them
	for (int i = 0; i < size; i++)		// Loops array set
	{							// value compared
		for (int j = i; j < size; j++)
			if (arr[i] == arr[j])		// If number repeated
				count++;			// adds count 
		if (count == highCount)			// Sets counter as highest
			results.push_back(arr[i]);	// freq, push to vector
		if (count > highCount)			
		{					
			highCount = count;		// Set new high count
			results.clear();			// Clear vector
			results.push_back(arr[i]);	// Write current number to vector
		}
		count = 0;					// Resets count for next main
	}
	sort(results.begin(), results.end());
	return results;
}
