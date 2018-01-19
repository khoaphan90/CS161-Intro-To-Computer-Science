#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <vector>
#include "Product.hpp"

using namespace std;

class Customer
{
private:
	vector<string> cart;
	string name;
	string accountID;
	bool premiumMember;
public:
	Customer(string, string, bool);
	string getAccountID();
	vector<string> getCart();
	void addProductToCart(string);
	bool isPremiumMember();
	void emptyCart();
};

#endif
