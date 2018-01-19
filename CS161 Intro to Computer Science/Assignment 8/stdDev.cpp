/****************************************************************************************
// Name: Khoa Phan
// Date: February 28, 2017
// Description: This program is written to get the standard deviation, using a math
//				formula, for the scores from an array of pointers to the Student class.
*****************************************************************************************/
#include <iostream>
#include <string>
#include "Student.hpp"
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

//Function prototype
double stdDev(Student *, int);

//int main()
//{
//	const int SIZE = 4;
//	Student sArr[SIZE] = {
//		Student("Kai", 90),
//		Student("Bear", 88),
//		Student("Linda", 99),
//		Student("Mike", 95) };
//	double mySd;
//	//int size;
//	//string name;
//	//double score;
//
//	//Student *testArr;
//
//	//testArr = new Student;
//
//	//cout << "How how many students?\n";
//	//cin >> size;
//
//	//for (int i = 0; i < size;i++)
//	//{
//	//	cout << "What is the name of the student?\n";
//	//	cin >> name;
//	//	cout << "What is the score?\n";
//	//	cin >> score;
//	//	Student{}
//	//}
//
//		
//	/*Student *myArr[SIZE];
//	for (int i = 0; i < SIZE; i++)
//	{
//		myArr[i] = &sArr[i];
//	}*/
//
//
//
//	mySd = stdDev(sArr, SIZE);
//
//	//cout << mySd << endl;
//	return 0;
//}

/*
stdDev
This function takes a class input and int
to calculate the standard deviations of the
scores that are within score value of the
Student class.
*/

double stdDev(Student *n, int s)
{
	Student *temp;
	double
		results, total, total2, var;
	double
		score, mean, diff, tempNum;

	results = total = total2 = var = 0;

	// Retrieve scores from Student, add together
	for (int i = 0; i < s; i++)
	{
		temp = (n + i);
		score = temp->getScore();
		total += score;
	}
	// Mean of Student scores
	mean = total / s;

	// Squares mean, gets mean2
	for (int i = 0; i < s; i++)
	{
		temp = (n + i);
		score = temp->getScore();
		diff = score - mean;
		tempNum = pow(diff, 2);
		total2 += tempNum;
	}

	var = total2 / s;

	// Take square root of mean2
	results = sqrt(var);
	//cout << "Results " << results << endl;

	return results;
}