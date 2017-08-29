#include "wallet.h"
#include <iostream>
using namespace std;

// Returns the total monetary value of all dollar bills.
float calcPiggybankNotes(piggybank piggy)
{
	  cout << "PiggyBank" << endl;
      cout << "Dollar Bills:" << piggy.oneDollarBills << endl;
      cout << "Two Dollar Bills:" << piggy.twoDollarBills << endl;
      cout << "Five Dollar Bills: " << piggy.fiveDollarBills << endl;

	  return 0;
}
// Returns the total monetary value of all coins.
float calcPiggybankCoins(piggybank piggy)
{
	cout << "PiggyBank" << endl;
    cout << "Quarters:" << piggy.quarters << endl;
    cout << "Dimes:" << piggy.dimes << endl;
    cout << "Nickels: " << piggy.nickels << endl;
	cout << "Pennies: " << piggy.pennies << endl;

	return 0;
}

// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(piggybank piggy)
{
	cout << "PiggyBank" << endl;
	cout << "Dollar Bills:" << piggy.oneDollarBills << endl;
    cout << "Two Dollar Bills:" << piggy.twoDollarBills << endl;
    cout << "Five Dollar Bills: " << piggy.fiveDollarBills << endl;
    cout << "Quarters:" << piggy.quarters << endl;
    cout << "Dimes:" << piggy.dimes << endl;
    cout << "Nickels: " << piggy.nickels << endl;
	cout << "Pennies: " << piggy.pennies << endl;

	return 0;
}