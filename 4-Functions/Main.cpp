#include <iostream>
#include <cmath>
using namespace std;

// Gives a squared number
void Squared()
{
	int number;

	cout << "Enter a number value. ";
	cin >> number;

	cout << "This is your number squared: " << (number * number) << endl;
}

// Prints Hello World
void HelloWorld()
{
	cout << "Hello World!" << endl;
}

// Prints decimal value of fraction
void Decimal()
{
	float num;
	float denom;

	cout << "Enter a Numerator. ";
	cin >> num;

	cout << "Enter a Denominator. ";
	cin >> denom;

	cout << "This is your decimal value: " << (num / denom) << endl;
}

// Prints larger number
void Largest()
{
	int num1;
	int num2;
	int num3;

	cout << "Enter 3 number values. ";
	cin >> num1 >> num2 >> num3;

}

// Spaces two values with a comma
void Comma()
{
	float comm1;
	float comm2;
	cout << "Enter 2 numbers. ";
	cin >> comm1 >> comm2;
	cout << comm1 << "," << comm2 << endl;
}

// Prints sum of two values
void Sum()
{
	int val1;
	int val2;
	int val3;

	cout << "Enter 3 numbers. ";
	cin >> val1 >> val2 >> val3;
	cout << "This is your sum. " << (val1 + val2 + val3) << endl;
}

// Prints lower of two numbers
void Lesser()
{
	int less1;
	int less2;

	cout << "Enter 2 numbers. ";
	cin >> less1 >> less2;

	if (less1 > less2)
	{
		cout << "This is your lower number. " << less2;
	}

	else if (less1 < less2)
	{
		cout << "This is your lower number. " << less1;
	}

	else if (less1 = less2)
	{
		cout << "The numbers are equal, your number is " << less1 << endl;
	}
}

// Prints larger of two numbers
void Greater()
{
	int great1;
	int great2;

	cout << "Enter 2 numbers. ";
	cin >> great1 >> great2;

	if (great1 > great2)
	{
		cout << "This is your larger number " << great1 << endl;
	}

	else if (great1 < great2)
	{
		cout << "This is your larger number " << great2 << endl;
	}

	else if (great1 = great2)
	{
		cout << "The numbers are equal, your number is " << great1 << endl;
	}
}

// Clamp
void Clamp()
{
	int clamp;
	int clamp2;
	int restricted;

	cout << "Choose two numbers and create a range. ";
	cin >> clamp >> clamp2;

	cout << "Choose a number that ranges between the two chosen numbers. ";
	cin >> restricted;

	if (restricted < clamp)
	{
		cout << " Your number is: " << clamp << endl;
	}

	else if (restricted > clamp2)
	{
		cout << " Your number is: " << clamp2 << endl;
	}

	else
	{
		cout << " Your number is: " << restricted << endl;
	}

}

// Distance
void Distance()
{
	float x1;
	float x2;
	float y1;
	float y2;
	cout << "Choose a point on a graph. ";
	cin >> x1 >> y1;

	cout << "Choose a second point on a graph. ";
	cin >> x2 >> y2;

	cout << "Your distance is: " << sqrtf((powf(x2 - x1, 2.0)) + (powf(y2 - y1, 2.0))) << endl;
}

// Estimated Time of Arrival
void Estimate()
{
	float x1;
	float x2;
	float y1;
	float y2;
	float speed;
	cout << "Choose a point on a graph. ";
	cin >> x1 >> y1;

	cout << "Choose a second point on a graph. ";
	cin >> x2 >> y2;

	float distance = sqrtf((powf(x2 - x1, 2.0)) + (powf(y2 - y1, 2.0)));
	
	cout << "Input speed to determine the time from one point to another. ";
	cin >> speed;

	cout << "Seconds it takes to get from Point A to Point B: " << (distance / speed) << endl;


}



int main()
{
	HelloWorld();
	Squared();
	Decimal();
	Comma();
	Sum();
	Lesser();
	Greater();
	Distance();
	Clamp();
	Estimate();

	system("pause");
	return 0;
}