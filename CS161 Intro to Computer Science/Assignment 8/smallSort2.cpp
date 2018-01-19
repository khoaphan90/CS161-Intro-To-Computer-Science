/****************************************************************************************
// Name: Khoa Phan
// Date: February 28, 2017
// Description: This program is written to take a void function with referenced inputs,
//				sort them in ascending orderand then uses pointers to rewrite the value
//				in the main.
*****************************************************************************************/

#include <iostream>

using std::cout;
using std::endl;

//Function Proto
void smallSort2(int *, int *, int *);

//int main()
//{
//	int a = 14;
//	int b = -90;
//	int c = 2;
//	cout << "Original numbers:\n";
//	cout << a << ", " << b << ", " << c << endl;
//
//	cout << "\nNew Order:\n";
//	smallSort2(&a, &b, &c);
//	cout << a << ", " << b << ", " << c << endl;
//
//	return 0;
//}

/* FUNCTION

smallSort2

Function that takes 3 pointer values then take those values
and sorts them in ascending order. Values will be overwritten
to new values that correspond to the order.
*/

void smallSort2(int *x, int *y, int *z)
{
	// Sets temporary storage location
	int temp;

	// These if statements will cause the values to switch if they are true,
	// putting them in ascending order as a result
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	}
	if (*y > *z)
	{
		temp = *y;
		*y = *z;
		*z = temp;
	}
}