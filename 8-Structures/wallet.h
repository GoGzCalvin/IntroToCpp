#pragma once

// wallet.h

struct piggybank
{
	int oneDollarBills;
	int twoDollarBills;
	int fiveDollarBills;
	int quarters;
	int dimes;
	int nickels;
	int pennies;
};

// Returns the total monetary value of all dollar bills.
float calcPiggybankNotes(piggybank piggy);

// Returns the total monetary value of all coins.
float calcPiggybankCoins(piggybank piggy);

// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(piggybank piggy);
// ...