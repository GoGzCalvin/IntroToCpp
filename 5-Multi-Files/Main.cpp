#include <iostream>
#include <cstdlib>
#include "func.h"
#include "dtgreet.h"
#include "rng.h"

using namespace std;




int main()
{
	seedRng(50);
	int numA = 1;
	int numB = 2;
	int a = 0;
	bool CoinToss = rngb();

	cout << "Sum: " << sum(numA, numB) << endl;
	
	isLeapYear(2017);
	dayGreeting(22, 8, 2017);
	timeGreeting(12, 25);
	

	
	cout << rng(a) << endl;
	cout << rngRange(1, 6, a) << endl;
	cout << CoinToss << endl;
	cout << rngbChance(.1) << endl;

	system("pause");
}