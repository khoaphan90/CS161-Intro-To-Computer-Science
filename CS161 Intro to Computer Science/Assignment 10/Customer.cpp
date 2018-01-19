/****************************************************************************************
// Name: Khoa Phan
// Date: March 14, 2017
// Description: This program is written to store the information of a member that can be
				returned. This also holds the cart of products for the member.
*****************************************************************************************/
#include <iostream>
#include "Product.hpp"
#include "Customer.hpp"
#include "Store.hpp"
#include <string>
#include <vector>

using namespace std;

/*****************************************************************
//			Customer::Customer
// This function takes string, and boolean argument and stores
// this information within the variables.
*****************************************************************/
Customer::Customer(string n, string a, bool pm)
{
	name = n;
	accountID = a;
	premiumMember = pm;
}
string Customer::getAccountID()
{
	return accountID;
}

vector<string> Customer::getCart()
{
	return cart;
}

void Customer::addProductToCart(string a)
{
	// write product id into cart
	cart.push_back(a);
}

/*****************************************************************
//			Product::isPremiumMember
// This function checks if the Customer is a premium member and
// returns true or false.
*****************************************************************/
bool Customer::isPremiumMember()
{
	// check member if premium
	if (premiumMember == true)
		return true;
	else
		return false;
}

/*****************************************************************
//			Product::emptyCart
// This function clears the cart vector.
*****************************************************************/
void Customer::emptyCart()
{
	//clears all items from cart
	cart.clear();
}