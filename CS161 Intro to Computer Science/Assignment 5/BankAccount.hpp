/****************************************************************************************
// Name: Khoa Phan
// Date: February 6, 2017
// Description: This is a header file for the BankAccount class that defines the private and
// public as well as function prototypes and constructors
*****************************************************************************************/

// BankAccount class specification file
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP

using namespace std;

// BankAccount class declaration
class BankAccount
{
private:
	string name;
	string id;
	double balance;
public:
	BankAccount();
	BankAccount(string, string, double);
	string getCustomerName();
	string getCustomerID();
	double getCustomerBalance();
	void withdraw(double);
	void deposit(double);
};
#endif