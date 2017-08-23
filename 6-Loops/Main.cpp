#include <iostream>

using namespace std;


// Prompts the user for a number of numbers and returns the largest of them all.
int promptLargest(int qtyRequested)
{
	int max = INT_MIN;
	int input;
	cout << "Enter how many numbers you wish to use. ";
	cin >> input;

	for (input; input <= qtyRequested; qtyRequested)
	if (input > max)
	{
		max = input;
	}

	return max;
}

// Prints all numbers from x to y, inclusive of both ends.
void printXY(int start, int end)
{
	cout << "Enter an 'x' value and a 'y' value. ";
	cin >> start >> end;

	for (start; start <= end; ++start)
	{
		cout << start << endl;
	}
}

int main()
{
	int l = 3;
	promptLargest(3);

	int x = 0;
	int y = 0;
	printXY(x, y);



	int i = 0;

	//While
	while (i <= 9)
	{
		cout << i << endl;
		++i;
	}

	// ... 


	//For
	for (int i = 0; i < 10; ++i)
	{
		cout << i << endl;
	}

	// ...


	// Do While
	int val = 0;
	do
	{
		cout << val << endl;
		++val;
	} 
	while (val < 10);

	// ... 


	//Custom Do While

	int custom;
	do
	{
		cout << "Enter a number between 1-10. ";
		cin >> custom;

		cout << custom << endl;
	} while (custom < 10 && custom >= 0);

	// ...
	

	// For 1 to 100
	for (int value = 1; value < 101; ++value)
	{
		cout << value << endl;
	} 

	// ... 


	// While 100 to 1
	int num = 100;
	while (num >= 1)
	{
		cout << num << endl;
		--num;
	}

	// ...

	// From 1995 to 2017
	int year = 1995;
	do 
	{
		cout << year << endl;
		++year;
	} 
	while (year < 2018);



	// 3 Favorite Positive Numbers
	{
		int number1;
		int number2;
		int number3;

		do
		{

			cout << "Hello! What are your three favorite postivive numbers? \n Please answer one at a time. \n What's the first number? ";
			cin >> number1;

			cout << "So your first number is " << number1 << " \n What's your second favorite number? " << endl;
			cin >> number2;

			cout << "So your numbers so far are " << number1 << " and " << number2 << " \n What's your third favorite number? " << endl;
			cin >> number3;

			cout << "Alright! So your favorite numbers are " << number1 << ", " << number2 << " and " << number3 << endl;

			break;
		} 
		while (number1 > 0, number2 > 0, number3 > 0);
		
		if (number1 > 0, number2 > 0, number3 > 0)
		{
			cout << "This number isn't positive." << endl;
		}

	}

	system("pause");
	return 0;
}

