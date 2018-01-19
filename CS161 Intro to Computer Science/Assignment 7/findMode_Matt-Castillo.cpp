/***************************************************************
* Author: Matthew Castillo
* Date: 02/22/2017
* Description: The program contains a function that finds the
* mode in an array and returns a vector that is sorted by
* ascending order containing the mode(s).
****************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::sort;


/****************************************************************
*                   findMode
* Description: This function has 2 parameters, an array and the 
* size of the array. It sorts the array by ascending order
* then calculates the mode(s) and returns it in a vector. 
****************************************************************/
vector<int> findMode(int arrayData[], int arrayLength)
{
	vector<int> result;
	int count = 0;           // Counter
	int maxFrequency = 1;    // Highest frequency of a number        
	int temp;				 // Holds a temporary array number

	// Sort array by ascending order.
	sort(arrayData, arrayData + arrayLength);

	// Locate highest frequency of any number in the array
	for (int i = 0; i < arrayLength; i++)
	{
		temp = arrayData[i];

		for (int j = 0; j < arrayLength; j++)
		{
			if (temp == arrayData[j])
			{
				count++;
			}
		}

		if (count > maxFrequency)
			maxFrequency = count;

		count = 0;
	}

	if (maxFrequency == 1) // If all numbers appear once, place in the vector. 
	{
		for (int i = 0; i < arrayLength; i++)
		{
			int num = arrayData[i];
			result.push_back(num);
		}
	}
	else // If mode(s) place into vector
	{
		for (int i = 0; i < arrayLength; i++)
		{
			temp = arrayData[i];
			for (int j = 0; j < arrayLength; j++)
			{
				if (temp == arrayData[j])
					count++;
			}

			if (count == maxFrequency)
			{
				if (i != 0)
				{
					if (arrayData[i] != arrayData[i - 1])
						result.push_back(arrayData[i]);
				}
				else
					result.push_back(arrayData[i]);
			}
			count = 0;
		}
	}

	return result;
}

int main() {
	int i;

	int test[6] = { 1,1,1,1,1,1 };
	vector<int> final = findMode(test, 6);
	for (i = 0; i < final.size(); i++)
		cout << final[i] << " ";
	cout << "\nYou wanted to see 1";
	cout << "\n\n";
	int test2[6] = { 1,2,3,4,5,6 };
	vector<int> final2 = findMode(test2, 6);
	for (i = 0; i < final2.size(); i++)
		cout << final2[i] << " ";
	cout << "\nYou wanted to see 1 2 3 4 5 6";
	cout << "\n\n";
	int test3[9] = { 1,1,1,2,2,2,3,3,3 };
	vector<int> final3 = findMode(test3, 9);
	for (i = 0; i < final3.size(); i++)
		cout << final3[i] << " ";
	cout << "\nYou wanted to see 1 2 3";
	cout << "\n\n";
	int test4[9] = { 1,2,3,1,2,3,1,2,3 };
	vector<int> final4 = findMode(test4, 9);
	for (i = 0; i < final4.size(); i++)
		cout << final4[i] << " ";
	cout << "\nYou wanted to see 1 2 3";
	cout << "\n\n";
	int test5[9] = { 3,3,3,1,1,1,2,2,2 };
	vector<int> final5 = findMode(test5, 9);
	for (i = 0; i < final5.size(); i++)
		cout << final5[i] << " ";
	cout << "\nYou wanted to see 1 2 3";
	cout << "\n\n";
	int test6[15] = { 3,3,3,1,1,1,2,2,2,4,4,4,4 };
	vector<int> final6 = findMode(test6, 15);
	for (i = 0; i < final6.size(); i++)
		cout << final6[i] << " ";
	cout << "\nYou wanted to see 4";
	cout << "\n\n";
	int test7[1] = { 1 };
	vector<int> final7 = findMode(test7, 1);
	for (i = 0; i < final7.size(); i++)
		cout << final7[i] << " ";
	cout << "\nYou wanted to see 1";
	cout << "\n\n";
	int test8[25] = { 3,3,3,1,11,1,2,2,2,4,4,4,4,4,5,3,7,8,9,4,3,5,7,4,5 };
	vector<int> final8 = findMode(test8, 25);
	for (i = 0; i < final8.size(); i++)
		cout << final8[i] << " ";
	cout << "\nYou wanted to see 4";
	cout << "\n\n";
	int test9[5] = { 0,0,0,0,0 };
	vector<int> final9 = findMode(test9, 5);
	for (i = 0; i < final9.size(); i++)
		cout << final9[i] << " ";
	cout << "\nYou wanted to see 0";
	cout << "\n\n";
	int test11[8] = { 2,2,1,1,3,3,4,4 };
	vector<int> final11 = findMode(test11, 8);
	for (i = 0; i < final11.size(); i++)
		cout << final11[i] << " ";
	cout << "\nYou wanted to see 1 2 3 4";
	cout << "\n\n";
	int test12[1] = { 2 };
	vector<int> final12 = findMode(test12, 1);
	for (i = 0; i < final12.size(); i++)
		cout << final12[i] << " ";
	cout << "\nYou wanted to see 2";
	cout << "\n\n";
	int test13[6] = { 1,0,3,2,2,1 };
	vector<int> final13 = findMode(test13, 6);
	for (i = 0; i < final13.size(); i++)
		cout << final13[i] << " ";
	cout << "\nYou wanted to see 1 2";
	cout << "\n\n";
	int test14[6] = { -1,0,3,2,2,-1 };
	vector<int> final14 = findMode(test14, 6);
	for (i = 0; i < final14.size(); i++)
		cout << final14[i] << " ";
	cout << "\nYou wanted to see -1 2";
	cout << "\n\n";
	int test15[6] = { -1,-4,-3,-2,-2,-1 };
	vector<int> final15 = findMode(test15, 6);
	for (i = 0; i < final15.size(); i++)
		cout << final15[i] << " ";
	cout << "\nYou wanted to see -2 -1\n\n";


	return 0;
}