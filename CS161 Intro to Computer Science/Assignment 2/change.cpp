/******************************************************************************************
** Name: Khoa Phan
** Date: January 16, 2017
** Description: A program that calculates change for the user input value between .01-.99
******************************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	//define variables needed
	const int	Q = 25,	//quarter value
				D = 10,	//dime value
				N = 5,	//nickel value
				P = 1;	//penny value

	int		qChange,	//total number of quarters needed
			dChange,	//total number of dimes needed
			nChange,	//total number of nickels needed
			pChange,	//total number of pennies needed
			userAmt,	//user inputed value to be determined
			remainder;	//variable to determine remaining amount in calculations


	//prompts and converts user's input into cents
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> userAmt;

	//formula to determine the max amount of quarters, dimes, nickels, or pannies needed
	remainder = userAmt % Q;	//takes out the largest amount of quarters and results in left over for the rest of the formula
	qChange = userAmt / Q;		//determines the amount of quarters that can be taken out of the user inputted amount
	
	dChange = remainder / D;
	remainder %= D;
	
	nChange = remainder / N;
	remainder %= N;

	pChange = remainder / P;
	remainder %= P;

	//outputs information for the amount of coins based on user input
	cout << "Your change will be :" << endl;
	cout << "Q: " << qChange << endl;
	cout << "D: " << dChange << endl;
	cout << "N: " << nChange << endl;
	cout << "P: " << pChange << endl;

	return 0;
}
