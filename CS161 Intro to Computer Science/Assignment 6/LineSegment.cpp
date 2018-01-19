/****************************************************************************************
// Name: Khoa Phan
// Date: February 6, 2017
// Description: These are the functions for the LineSegment class. This class incorporates 
				the Point class to establish end points. These points are used to 
				calculate the length, which calls the distanceTo method within the Point 
				class, and slope using a formula. These values are returned back to the 
				program.
*****************************************************************************************/

#include "LineSegment.hpp"
#include <iostream>
#include <math.h>

using namespace std;

/******************************************************
*	 LineSegment::LineSegment						  *
* This function is the default constructor for the    *
* LineSegment class.								  *
*******************************************************/
LineSegment::LineSegment()
{
	end1 = Point();
	end2 = Point();
}

/******************************************************
*	 LineSegment::LineSegment						  *
* This function is the default constructor for the    *
* LineSegment class taking two values from the Point  *
* class.											  *
*******************************************************/
LineSegment::LineSegment(const Point &pt1In, const Point &pt2In)
{
	setEnd1(Point(pt1In));
	setEnd2(Point(pt2In));
}

/******************************************************
*	 LineSegment::setEnd1							  *
* This function sets the location of first line		  *
* segment as a Point.								  *
*******************************************************/
void LineSegment::setEnd1(const Point &pt1In)
{
	end1 = pt1In;
}

/******************************************************
*	 LineSegment::setEnd2							  *
* This function sets the location of second line	  *
* segment as a Point.								  *
*******************************************************/
void LineSegment::setEnd2(const Point &pt2In)
{
	end2 = pt2In;
}
/******************************************************
*	 LineSegment::getEnd1							  *
* This function retrieves the values of the first	  *
* Point object.										  *
*******************************************************/
Point LineSegment::getEnd1() const
{
	return end1;
}

/******************************************************
*	 LineSegment::getEnd2							  *
* This function retrieves the values of the second	  *
* Point object.										  *
*******************************************************/
Point LineSegment::getEnd2() const
{
	return end2;
}

/******************************************************
*	 LineSegment::length							  *
* This function calculates the length of line segment *
* created from the two Point values.				  *
*******************************************************/
double LineSegment::length()
{
	double length;

	length = end1.distanceTo(end2);

	return length;
}

/******************************************************
*	 LineSegment::slope								  *
* This function calculates the slope of line segment  *
* created from the two Point values.				  *
*******************************************************/
double LineSegment::slope()
{
	double slope;
	double y1, y2;
	double x1, x2;

	x1 = end1.getXCoord();
	x2 = end2.getXCoord();
	y1 = end1.getYCoord();
	y2 = end2.getYCoord();

	slope = ((y2 - y1) / (x2 - x1));

	return slope;
}