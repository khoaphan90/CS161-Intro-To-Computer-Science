/****************************************************************************************
// Name: Khoa Phan
// Date: February 28, 2017
// Description: This program is written to hold the functions of the Student class.
*****************************************************************************************/
#include <iostream>
#include <string>
#include "Student.hpp"

using std::cout;
using std::cin;
using std::endl;

//Function Prototypes
string getName();
double getScore();


/*
Student::Student()
Constructor that recieves two inputs
*/
Student::Student()
{
}

/*
Student::Student()
Constructor that recieves two inputs
*/
Student::Student(string n, double k)
{
	name = n;
	score = k;
}

/*
Student::getName()
This function returns name of student
*/
string Student::getName()
{
	return name;
}

/*
Student::getScore()
This function returns score of student
*/
double Student::getScore()
{
	return score;
}
