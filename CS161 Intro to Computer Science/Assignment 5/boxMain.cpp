#include <iostream>
#include "Box.hpp"

using namespace std;

int main()
{
//Box box1(2.4, 7.1, 5.0);
Box box1(10, 10, 10);
Box box2;

double volume1 = box1.getVolume();
cout << "volume 1: " << box1.getVolume() << endl;
double surfaceArea1 = box1.getSurfaceArea();
cout << "surface area 1: " << box1.getSurfaceArea() << endl;
double volume2 = box2.getVolume();
cout << "volume 2: " << box2.getVolume() << endl;
double surfaceArea2 = box2.getSurfaceArea();
cout << "surface area 2: " << box2.getSurfaceArea() << endl;

return 0;
}