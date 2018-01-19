/****************************************************************************************
// Name: Khoa Phan
// Date: January 23, 2017
// Description: This is a program written tto request a filename from the user and 
				to take the values within the file and add them all together. This
				data will then be written out to a new file called sum.txt.
*****************************************************************************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream
		inputFile;
	ofstream
		outputFile;
	string
		filename;			// Name of file input by user
	int
		number,				// Number from file
		total = 0;				// Sum total of input values

	// Get filename from user
	cout << "Please enter the filename.\n";
	cin >> filename;

	// Open input file
	inputFile.open(filename.c_str());

	// Open output file
	outputFile.open("sum.txt");

	// Process input file if opened or error it not
		if (inputFile)
		{
			while (inputFile >> number)
				total += number;
		}
		else
			cout << "Could not access the file.\n";

	// Write data out to new file
	outputFile << total;

	// Close input file and output file
	inputFile.close();
	outputFile.close();

	return 0;
}