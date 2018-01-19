/*************************************************************************
 * * Author: Vincent Kelly
 * * Date: 2/19/2017
 * * Description: Week 7 Assignment - Implement the findMode function.
 * **********************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

                   
/*************************************************************************
 * * findMode
 * * This function finds the mode in an array of ints and returns a vector
 * * containing the mode(s).   
 * ***********************************************************************/
 
vector<int> findMode(int array[], int arraySize)
{
    // create a sorted vector with the elements from the input array
    vector<int> numbers;
    
    for(int i = 0; i < arraySize; i++)
        numbers.push_back(array[i]);
    
    sort(numbers.begin(), numbers.end());

    int count = 1;
    int currentCount = 1;
    int number = numbers.at(0);
    
    // determine the highest number of occurrences of a number or numbers
    for(int j = 1; j < numbers.size(); j++)
    {
        if(numbers.at(j) == number)
            currentCount++;
        else
        {
            if(currentCount > count)
                count = currentCount;
            
            currentCount = 1;
            number = numbers.at(j);
        }
    }
    
    int finalMode = count;
    
    vector<int> mode;
    
    // deal with the case in which the original array had no duplicate numbers
    if(finalMode == 1)
        for(int y = 0; y < numbers.size(); y++)
            mode.push_back(numbers[y]);
            
    count = 1;
    currentCount = 1;
    number = numbers.at(0);
    
    // push the "highest" value mode elements into the return vector.
    
    // only the "last" value of each element will be pushed into the return vector,
    // so there won't be any duplicates.  
    
    // the "numbers" vector is already sorted so no need to sort the output vector.    
    
    for(int k = 1; k < numbers.size(); k++)
    {
        if(numbers.at(k) == number)
        {
            currentCount++;
            if(currentCount == finalMode)
                mode.push_back(numbers.at(k));
        }
            
        else
        {
            if(currentCount > count)
                count = currentCount;
            
            currentCount = 1;
            number = numbers.at(k);
        }
    }
    
    return mode;
}
/*
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
*/

/**************************

My Notes
***************************/
/*
My tests with repeated numbers, IE: a string of 1s repeated showed up all times.
*/