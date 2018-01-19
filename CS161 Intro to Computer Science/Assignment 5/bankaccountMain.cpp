#include <iostream>
#include "BankAccount.hpp"
#include <string>

using namespace std;

int main()
{

BankAccount account1("Harry Potter", "K4637", 8032.78);
account1.withdraw(203.40);
account1.withdraw(3012.58);
account1.deposit(37.54);
account1.withdraw(1807.12);
account1.deposit(500.00);
double finalBalance = account1.getCustomerBalance();

cout << "Name: " << account1.getCustomerName() << endl;
cout << "ID: " << account1.getCustomerID() << endl;
cout << "Balance: " << finalBalance << endl;

return 0;
}
