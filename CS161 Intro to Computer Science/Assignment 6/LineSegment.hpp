/****************************************************************************************
// Name: Khoa Phan
// Date: February 10, 2017
// Description: These are the functions prototypes for the LineSegment class. This class 
				incorporates the Point class to establish end points. These points are used 
				to  calculate the length, which calls the distanceTo method within the Point 
				class, and slope using a formula. These values are returned back to the 
				program.
*****************************************************************************************/
#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

// Class declaration
class LineSegment
{
private:
	Point end1;
	Point end2;
public:
	LineSegment();
	LineSegment(const Point&, const Point&);
	void setEnd1(const Point&);
	void setEnd2(const Point&);
	Point getEnd1() const;
	Point getEnd2() const;
	double length();
	double slope();
};
#endif // LINESEGMENT_HPP