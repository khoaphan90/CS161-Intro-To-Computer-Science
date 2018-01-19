/****************************************************************************************
// Name: Khoa Phan
// Date: February 28, 2017
// Description: This is a header file for the Student class
*****************************************************************************************/

#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
using std::string;

class Student{
private:
	string name;
	double score;
public:
	Student();
	Student(string, double);
	string getName();
	double getScore();
};
#endif // STUDENT_HPP