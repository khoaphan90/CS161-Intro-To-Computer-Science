/****************************************************************************************
// Name: Khoa Phan
// Date: March 14, 2017
// Description: This file is written to hold the functions for the Store class that has
				many different operations. It can add members, products, do a product
				search, add products to member carts and check out those carts.
*****************************************************************************************/
#include <iostream>
#include "Product.hpp"
#include "Customer.hpp"
#include "Store.hpp"
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

/*****************************************************************
//			Store::addProduct
// This function takes a Product with information that is then 
// added into the inventory vector.
*****************************************************************/
void Store::addProduct(Product* p)
{
	// write product into inventory vector
	inventory.push_back(p);
}

/*****************************************************************
//			Store::addMember
// This function takes a Customer with information that is then 
// added into the members vector.
*****************************************************************/
void Store::addMember(Customer* c)
{
	// write customer into members vector
	members.push_back(c);
}

/*****************************************************************
//			Store::getProductFromID
// This function takes a string argument that is then compared
// with the IDcodes in the products that are stored in the 
// inventory vector.
*****************************************************************/
Product* Store::getProductFromID(std::string pID)
{
	// check pID with inventory and return
	for (int i = 0; i < inventory.size(); i++)
		if (inventory.at(i)->getIdCode() == pID)
			return inventory.at(i);
		else
			return NULL;
}

/*****************************************************************
//			Store::getMemberFromID
// This function takes a string argument that is then compared
// with the memberIDs in the members that are stored in the
// inventory vector..
*****************************************************************/
Customer* Store::getMemberFromID(string mID)
{
	// check mID with members and return
	for (int i = 0; i < members.size(); i++)
		if (members.at(i)->getAccountID() == mID)
			return members.at(i);
		else
			return NULL;
}

/*****************************************************************
//			Store::productSearch
// This function takes in a string argument that is then used to
// search the title and description for matching strings. This
// information will be returned with the information if it
// is found.
*****************************************************************/
void Store::productSearch(string str)
{
	// transform search input to uppercase
	for (size_t i = 0; i < str.size(); ++i)
		str[i] = toupper(str[i]);
	
	// variables to be searched
	string searchT;
	string searchD;
	string ID;

	// checks description and titles for matching str
	for (int i = 0; i < inventory.size(); i++)
	{
		searchD = inventory.at(i)->getDescription();
		searchT = inventory.at(i)->getTitle();
		ID = inventory.at(i)->getIdCode();
		for (size_t k = 0; k < searchD.size(); ++k)
			searchD[k] = toupper(searchD[k]);
		for (size_t j = 0; j < searchT.size(); ++j)
			searchT[j] = toupper(searchT[j]);
		if (searchD.find(str) != string::npos ||
			searchT.find(str) != string::npos)
		{
			cout << "Item: " <<
				inventory.at(i)->getTitle() << endl;
			cout << "ID: " <<
				inventory.at(i)->getIdCode() << endl;
			cout << "Description: " <<
				inventory.at(i)->getDescription() << endl;
			cout << "Price: " <<
				inventory.at(i)->getPrice() << endl;
		}
	}
}

/*****************************************************************
//			Store::addProductToMemberCart
// This function takes string arguments to be used to compare
// products and members within the inventory and members vectors
// that validate if they exist. The product is then added to the
// member cart if that exist.
*****************************************************************/
void Store::addProductToMemberCart(string pID, string mID)
{
	int item = 0;
	bool vProd = false;
	bool vMemb = false;
	string account;
	string search;


	// validates member ID
	for (int k = 0; k < members.size(); k++)
	{
		search = members.at(k)->getAccountID();
		if (search.find(mID) != string::npos)
			vMemb = true;
	}
	if (vMemb == false)
		cout << "Member #" << mID << " not found." << endl;

	// validates product ID
	for (int k = 0; k < inventory.size(); k++)
	{
		search = inventory.at(k)->getIdCode();
		if (search.find(pID) != string::npos)
			vProd = true;
	}
	if (vProd == false)
		cout << "Product #" << pID << " not found." << endl;

	// changes case for product ID for search
	for (size_t i = 0; i < pID.size(); ++i)
		pID[i] = toupper(pID[i]);
	
	// check inventory for availability
	if (vMemb == true && vProd == true)
	{
		for (int k = 0; k < inventory.size(); k++)
		{
			search = inventory.at(k)->getIdCode();
			if (search == pID)
			{
				item = inventory.at(k)->getQuantityAvailable();
				if (item == 0)
					cout << "Sorry, product #" <<
					inventory.at(k)->getIdCode()
					<< " is current out of stock." << endl;
				if (item >= 1)
				{
					getMemberFromID(mID)->addProductToCart(pID);
					cout << "Product #" << pID
						<< " has been added to your cart." << endl;
				}
			}
		}
	}
}

/*****************************************************************
//			Store::checkOutMember
// This function retrieves the Customer cart and adds all items
// together if the cart is not empty. It checks for premium status
// to determine the total cost of the cart.
*****************************************************************/
void Store::checkOutMember(string mID)
{
	cout << endl;
	// initialize variables
	double subtotal = 0;
	double total = 0;
	double shipping;
	double price = 0;
	bool cEmpty = true;

	// prompt cart empty
	if (getMemberFromID(mID)->getCart().empty())
		cout << "There are no items in the cart." << endl;

	if (getMemberFromID(mID)->getCart().size() > 0)
	{
		// get prices of items in member cart and total
		vector<string> cart = getMemberFromID(mID)->getCart();
		for (int i = 0; i < cart.size(); i++)
		{
			for (int k = 0; k < inventory.size(); k++)
				if (cart.at(i) == inventory.at(k)->getIdCode())
				{
					if (inventory.at(k)->getQuantityAvailable() == 0)
						cout << "Sorry, product #" <<
						inventory.at(k)->getIdCode() << ", "
						<< "'" << inventory.at(k)->getTitle() << "'"
						<< " is no longer available." << endl;
					else
					{
						price = inventory.at(k)->getPrice();
						cout << inventory.at(k)->getTitle() << " - $"
							<< price << endl;
						subtotal += price;
						inventory.at(k)->decreaseQuantity();
					}
				}
		}
		// check to see if premium, if not, add 7%
		if (getMemberFromID(mID)->isPremiumMember() == true)
		{
			cout << fixed << showpoint << setprecision(2);
			shipping = 0;
			total = subtotal;
		}
		else
		{
			cout << fixed << showpoint << setprecision(2);
			shipping = subtotal * 0.07;
			total = subtotal + shipping;
		}

		// checkout numbers
		cout << endl;
		cout << "Subtotal: $" << subtotal << endl;
		cout << "Shipping Cost: $" << shipping << endl;
		cout << "Total: $ " << total << endl;
	}
}