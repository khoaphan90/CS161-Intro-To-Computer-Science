#ifndef STORE_HPP
#define STORE_HPP

#include <string>
#include <vector>
#include "Customer.hpp"
#include "Product.hpp"

using namespace std;

class Store
{
private:
	vector<Product*> inventory;
	vector<Customer*> members;
public:
    void addProduct(Product*);
    void addMember(Customer*);
    Product* getProductFromID(string);
    Customer* getMemberFromID(string);
    void productSearch(string);
    void addProductToMemberCart(string, string);
    void checkOutMember(string);
};

#endif
