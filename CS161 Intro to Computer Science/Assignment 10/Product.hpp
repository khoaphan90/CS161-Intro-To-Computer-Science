#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <string>

using namespace std;

class Product
{
private:
	string idCode;
	string title;
	string description;
    double price;
    int quantityAvailable;
public:
    Product(string, string, string , double, int);
	string getIdCode();
	string getTitle();
	string getDescription();
    double getPrice();
    int getQuantityAvailable();
    void decreaseQuantity();
};

#endif
