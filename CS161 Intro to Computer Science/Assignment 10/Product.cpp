/****************************************************************************************
// Name: Khoa Phan
// Date: March 14, 2017
// Description: This program is written store product infomation and return this
				information and manages quantities.
*****************************************************************************************/
#include <iostream>
#include "Product.hpp"
#include "Customer.hpp"
#include "Store.hpp"
#include <string>
#include <vector>

using namespace std;

/*****************************************************************
//			Product::Product
// This function takes string, double and int arguments to be
// stored as information for a product.
*****************************************************************/
Product::Product(string id, string t, 
	string d, double p, int qa)
{
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}

string Product::getIdCode()
{
	return idCode;
}

string Product::getTitle()
{
	return title;
}

string Product::getDescription()
{
	return description;
}

double Product::getPrice()
{
	return price;
}

int Product::getQuantityAvailable()
{
	return quantityAvailable;
}

/*****************************************************************
//			Product::decreaseQuantity
// This function reduces the quantity available of a product
*****************************************************************/
void Product::decreaseQuantity()
{
	quantityAvailable--;
}