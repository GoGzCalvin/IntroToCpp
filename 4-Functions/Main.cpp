#include <iostream>
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
	int con1;
	int con2;

	cout << ""
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


	system("pause");
	return 0;
}