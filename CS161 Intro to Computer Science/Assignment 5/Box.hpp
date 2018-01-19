/****************************************************************************************
// Name: Khoa Phan
// Date: February 6, 2017
// Description: This is a header file for the Box class that defines the private and
// public as well as function prototypes and constructors
*****************************************************************************************/

// Box class specification file
#ifndef BOX_HPP
#define BOX_HPP

// Box class declaration
class Box
{
private:
	double height;
	double length;
	double width;
public:
	Box();
	Box(double height, double length, double width);
	void setHeight(double);
	void setLength(double);
	void setWidth(double);
	double getVolume();
	double getSurfaceArea();
};
#endif