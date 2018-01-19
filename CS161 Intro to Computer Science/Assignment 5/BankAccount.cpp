/****************************************************************************************
// Name: Khoa Phan
// Date: February 6, 2017
// Description: This is a program written to hold the functions of the Box class while
// including the Box class in the header to access it's variables.
*****************************************************************************************/

#include <iostream>
#include <string>
#include "BankAccount.hpp"

using namespace std;

/******************************************************
*			  BankAccount::BankAccount				  *
* This function is the default constructor for the    *
* Bankaccount class.								  *
*******************************************************/
BankAccount::BankAccount::BankAccount()
{}

/******************************************************
*			  BankAccount::BankAccount				  *
* This function is the default constructor for the    *
* Bankaccount class, receiving a two string inputs 	  *
* and a double input.								  *
*******************************************************/
BankAccount::BankAccount(string n, string i, double b)
{
	name = n;
	id = i;
	balance = b;
}

/******************************************************
*			 getCustomerID							  *
* This function returns the ID of the customer		  *
*******************************************************/
string BankAccount::getCustomerID()
{
	return id;
}

/******************************************************
*			 getCustomerName						  *
* This function returns the name of the customer	  *
*******************************************************/
string BankAccount::getCustomerName()
{
	return name;
}

/******************************************************
*			 getCustomerBalance						  *
* This function returns the current balance of the 	  *
* in the customer's account							  *
*******************************************************/
double BankAccount::getCustomerBalance()
{
	return balance;
}

/******************************************************
*			 withdraw								  *
* This function retrieves the value in balance and 	  *
* then is modified through information passed thru	  *
* when the withdraw function is called. Value is 	  *
* subtracted from the balance.						  *
*******************************************************/
void BankAccount::withdraw(double w)
{
	balance = getCustomerBalance();
	balance -= w;
}

/******************************************************
*			 deposit								  *
* This function retrieves the value in balance and 	  *
* then is modified through information passed thru	  *
* when the deposit function is called. Value is 	  *
* added from the balance.							  *
*******************************************************/
void BankAccount::deposit(double d)
{
	balance = getCustomerBalance();
	balance += d;
}
