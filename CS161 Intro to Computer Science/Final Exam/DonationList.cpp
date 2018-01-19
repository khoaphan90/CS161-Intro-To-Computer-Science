#include <iostream>
#include <iomanip>
#include "DonationList.h"

using namespace std;

//int numDonations;
//double *donations;
//double **arrPtr;
//void selectSort();

DonationList::DonationList(int num, double gifts[])
{
	numDonations = num;
	if (num > 0)
	{
		// Allocate an array of doubles
		donations = new double[num];

		// Allocate an array of pointers to doubles
		arrPtr = new double*[num];

		//Initialize the arrays
		for (int count = 0; count < numDonations; count++)
		{
			donations[count] = gifts[count];
			arrPtr[count] = &donations[count];
		}
		// Now sort the array of pointers
		selectSort();
	}
}

DonationList::~DonationList()
{
	if (numDonations > 0)
	{
		delete[] donations;
		donations = 0;
		delete[] arrPtr;
		arrPtr = 0;
	}
}

void DonationList::selectSort()
{
	int minIndex;
	double *minElem;

	for (int scan = 0; scan < (numDonations - 1); scan++)
	{
		minIndex = scan;
		minElem = arrPtr[scan];
		for (int index = scan + 1; index < numDonations; index++)
		{
			if ((*arrPtr[index]) < *minElem)
			{
				minElem = arrPtr[index];
				minIndex = index;
			}
		}
		arrPtr[minIndex] = arrPtr[scan];
		arrPtr[scan] = minElem;
	}
}

void DonationList::show()
{
	for (int count = 0; count < numDonations; count++)
		cout << donations[count] << " ";
	cout << endl;
}

void DonationList::showSorted()
{
	for (int count = 0; count < numDonations; count++)
		cout << *(arrPtr[count]) << " ";
	cout << endl;
}



//
//The showSorted Member Function
//The showSorted function displays the values pointed to by the elements of the arrPtr
//array.Here is its pseudocode :
//For every element in the arrPtr array
//Dereference the element and display what it points to
//End For
//Here is the function’s C++ code :
//	void DonationList::showSorted()
//{
//	for (int count = 0; count < numDonations; count++)
//		cout << *(arrPtr[count]) << " ";
//	cout



//The show Member Function
//The show member function simply displays the contents of the donations array sequentially.
//Here is its pseudocode :
//For every element in donations Array
//Display the element's contents
//End For
//Here is the function’s actual C++ code :
//	void DonationList::show()
//{
//	for (int count = 0; count < numDonations; count++)
//		cout << donations[count] << " ";


//The selectSort Member Function
//The selectSort function is a modified version of the selection sort algorithm.The only
//difference is that this function sorts an array of pointers.Instead of sorting on the contents
//of the array’s elements, the array is sorted on the contents of what its elements point to.
//Here is the pseudocode.
	//For scan is set to the values 0 up to(but not including) the nextto -
	//last subscript in arrPtr
	//Set minIndex variable to scan
	//Set minElem pointer to arrPtr[scan]
	//For index variable is set to the values from(scan + 1) through
	//the next - to - last subscript in arrPtr
		//If *(arrPtr[index]) is less than *minElem
			//Set minElem to arrPtr[index]
			//Set minIndex to index
		//End If
	//End For
	//Set arrPtr[minIndex] to arrPtr[scan]
	//Set arrPtr[scan] to minElem
//End For
//Here is the C++ code for the function :
//void DonationList::selectSort()
//{
//	int minIndex;
//	double *minElem;
//	for (int scan = 0; scan < (numDonations - 1); scan++)
//	{
//		minIndex = scan;
//		minElem = arrPtr[scan];
//		for (int index = scan + 1; index < numDonations; index++)
//		{
//			if (*(arrPtr[index]) < *minElem)
//			{
//				minElem = arrPtr[index];
//				minIndex = index;
//			}
//		}
//		arrPtr[minIndex] = arrPtr[scan];
//		arrPtr[scan] = minElem;
//	}
//}


//The Constructor
//The constructor’s code is as follows :
//DonationList::DonationList(int num, double gifts[])
//{
//	numDonations = num;
//	if (num > 0)
//	{
//		// Allocate an array of doubles
//		donations = new double[num];
//		// Allocate an array of pointers-to-doubles.
//		arrPtr = new double*[num];
//		// Initialize the arrays
//		for (int count = 0; count < numDonations; count++)
//		{
//			donations[count] = gifts[count];
//			arrPtr[count] = &donations[count];
//		}
//		// Now sort the array of pointers
//		selectSort();
//	}
//}
//The num argument(which is copied to numDonations) holds the number of donations, and
//the gifts array contains the list of donation values.
//If the value in num is greater than 0, the constructor allocates and initializes the elements of
//the donations and arrPtr arrays.The elements of the gifts array are copied to the
//elements of the donations array, and the elements of the arrPtr array are set to point to
//the elements of the donations array.