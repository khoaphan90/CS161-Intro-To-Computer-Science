/****************************************************************************************
// Name: Khoa Phan
// Date: February 10, 2017
// Description: These are the function prototypes of the Point class.
//				This class establishes a specific locations of a multiple points based
//				on a X and Y coordinate received via a constructor. There also exists
//				a function that calls to measure the distance between two points
//				that were established with this class.
*****************************************************************************************/
#ifndef POINT_HPP
#define POINT_HPP

// Class declaration
class Point
{
private:
	double xCoord;
	double yCoord;
public:
	Point();
	Point(double, double);
	void setXCoord(double);
	void setYCoord(double);
	double getXCoord() const;
	double getYCoord() const;
	double distanceTo(const Point&);
};

#endif // POINT_HPP
