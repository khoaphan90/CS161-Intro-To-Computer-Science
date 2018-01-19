/****************************************************************************************
// Name: Khoa Phan
// Date: February 6, 2017
// Description: These are the functions of the Point class.
//				This class establishes a specific locations of a multiple points based
//				on a X and Y coordinate received via a constructor. There also exists
//				a function that calls to measure the distance between two points
//				that were established with this class.
*****************************************************************************************/

#include "Point.hpp"
#include <iostream>
#include <math.h>

/******************************************************
*			  Point::Point							  *
* This function is the default constructor for the    *
* Point class.										  *
*******************************************************/
Point::Point()
{
	xCoord = 0.0;
	yCoord = 0.0;
}

/******************************************************
*			  Point::Point(double double)			  *
* This function is the default constructor for the    *
* Point class with two double inputs representing	  *
* the X and Y coordinates and calling the set methods *
*******************************************************/
Point::Point(double x, double y)
{
	setXCoord(x);
	setYCoord(y);
}

/******************************************************
*			  Point::setXCoord						  *
* This function takes an inputted value and sets it	  *
* the xCoord variable in the main class.			  *
*******************************************************/
void Point::setXCoord(double x)
{
	xCoord = x;
}

/******************************************************
*			  Point::setYCoord						  *
* This function takes an inputted value and sets it	  *
* the yCoord variable in the main class.			  *
*******************************************************/
void Point::setYCoord(double y)
{
	yCoord = y;
}

/******************************************************
*			  Point::getXCoord						  *
* This function returns the value of the xCoord		  * 
* variable											  *
*******************************************************/
double Point::getXCoord() const
{
	return xCoord;
}

/******************************************************
*			  Point::getYCoord						  *
* This function returns the value of the yCoord		  *
* variable											  *
*******************************************************/
double Point::getYCoord() const
{
	return yCoord;
}

double Point::distanceTo(const Point &input)
{
	// Define variables
	double X;
	double Y;
	double distance;

	// Call the constant referenced input value then 
	// subtract the set input value
	X = input.Point::getXCoord() - xCoord;
	Y = input.Point::getYCoord() - yCoord;

	// Calculate distance with Pythagorem Theorem
	distance = sqrt(pow(X, 2) + pow(Y, 2));

	return distance;
}