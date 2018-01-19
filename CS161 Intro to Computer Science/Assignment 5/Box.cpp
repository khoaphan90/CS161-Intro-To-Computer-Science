/****************************************************************************************
// Name: Khoa Phan
// Date: February 6, 2017
// Description: This is a program written to hold the functions of the Box class while
// including the Box class in the header to access it's variables.
*****************************************************************************************/

#include <iostream>
#include "Box.hpp"
using namespace std;

/******************************************************
*					  Box::Box						  *
* This function is the default constructor for the    *
* Box class. It initializes the value to 1.			  *
*******************************************************/
Box::Box()
{
	height = 1.0;
	length = 1.0;
	width = 1.0;
}

/******************************************************
*					  Box::Box(h, l, w)				  *
* This function is a Box constructor for the          *
* Box class if input values are provided with the 	  *
* valud format										  *
*******************************************************/
Box::Box(double h, double l, double w)
{
	setHeight(h);
	setLength(l);
	setWidth(w);
}

/******************************************************
*					  setHeight						  *
* This function sets value of the height, if the	  *
* value passed through is less than 1, it is		  *
* defaulted to a value of 1.						  *
*******************************************************/
void Box::setHeight(double h)
{
	 height = h;
}

/******************************************************
*					  setLength 					  *
* This function sets value of the length, if the	  *
* value passed through is less than 1, it is		  *
* defaulted to a value of 1.						  *
*******************************************************/
void Box::setLength(double l)
{
		length = l;
}

/******************************************************
*					  setWidth						  *
* This function sets value of the width, if the		  *
* value passed through is less than 1, it is		  *
* defaulted to a value of 1.						  *
*******************************************************/
void Box::setWidth(double w)
{
		width = w;
}

/******************************************************
*				   	getVolume						  *
* This function sets calculates the volume of the 	  *
* user inputted data.								  *
*******************************************************/
double Box::getVolume()
{
	return height * length * width;
}

/******************************************************
*					getSurfaceArea					  *
* This function sets value of the height, if the	  *
* value passed through is less than 1, it is		  *
* defaulted to a value of 1.						  *
*******************************************************/
double Box::getSurfaceArea()
{
	return (2 * height) + (2 * length) + (2 * width);
}
