#include<iostream>
#include "dtgreet.h"

using namespace std;

// Date Greeting
void dayGreeting(int day, int month, int year)
{
	cout << "Today is the "  << day  << " of "  << month  << " in the year "  << year  << " Good Morning!"  << endl;
}

// Time Greeting
void timeGreeting(int hour, int minutes)
{
	cout << "It is "  << hour  << ":"  << minutes  << " Good Afternoon!"  << endl;
}

// Leap Year?
void isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		cout << "This is a leap year." << endl;
	}

	else if (year % 100 && 400 == 0)
	{
		cout << "This is a leap year." << endl;
	}

	else
	{
		cout << "This is not a leap year." << endl;
	}
}