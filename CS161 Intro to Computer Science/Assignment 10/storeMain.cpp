#include <iostream>
#include "Product.hpp"
#include "Customer.hpp"
#include "Store.hpp"
#include <string>
#include <vector>

using namespace std;

int main()
{
	Store a;

	// Internal, private store access only
	Product test("1500", "Nintendo Switch", "This is a description.", 299.99, 5);
	Product test1("2193", "Sony Playstation 4", "This is a description.", 229.99, 1);
	Product test2("1000", "Microsoft Xbox One S", "This is a description.", 249.99, 2);
	Customer mike("Mike Phan", "KP900", false);

	a.addProduct(&test);
	a.addProduct(&test1);
	a.addProduct(&test2);
	a.addMember(&mike);

	a.productSearch("Sony");
	
	a.addProductToMemberCart(test.getIdCode(), mike.getAccountID());
	a.addProductToMemberCart(test1.getIdCode(), mike.getAccountID());
	a.addProductToMemberCart(test1.getIdCode(), mike.getAccountID());
	a.addProductToMemberCart(test2.getIdCode(), mike.getAccountID());
	
	a.checkOutMember(mike.getAccountID());
	
}