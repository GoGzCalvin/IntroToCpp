#include <iostream>
#include <random>

using namespace std;
// Prompts the user for one or more guesses for a generated number.
void guessTheNumber(int lower, int upper, int tryCount)
{
	int randomNumber = rand() % upper + lower;
	int rounds = tryCount;
	int input = 99;
	for (int i = 0; i < tryCount; i++)
	{
		cout << randomNumber;
		cout << "Hello! I'm going to generate a number between 1 and 10. \n You have "<< rounds << " tries to guess the number!";
		cin >> input;

		if (input < randomNumber )
		{
			cout << "Your guess was too low. " << endl;
		}

		else if (input > randomNumber)
		{
			cout << "Your guess was too high. " << endl;
		}

		else if (input == randomNumber)
		{
			cout << "You guessed the number! " << endl;
			break;
		}
		rounds--;
	}

}

// Prints out a grid of characters with the specified dimensions.
void gridGen(int width, int height)
{

	cout << "Enter a value for 'width' and 'height'. ";
	cin >> width >> height;

	for(int w = 0; w < width; ++w )
	{
		cout << endl;

		for(int h = 0; h < height; ++h)
		{
			cout << "x";
		}
	}

}


// Prints out �Fizz� when a multiple of three and �Buzz� when a multiple of five.
// If both are true, then both texts are printed.
void fizzBuzz(int start, int end)
{
	cout << " \n Enter a range for a 'start' value and a 'end' value. ";
	cin >> start >> end;

	for (start; start <= end; ++start)
	{
		if (start % 5 == 0 && start % 3 == 0)
		{

			cout << "FizzBuzz" << endl;
		}

		else if (start % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
		
		else if (start % 3 == 0)
		{
			cout << "Fizz" << endl;
		}

		else
		{
			cout << start << endl;
		}
	}
}


// Prints out �even� or �odd� for a given range of numbers.
void EvenOrOdd(int start, int end)
{
	cout << "Enter a range for a 'start' value and a 'end' value. ";
	cin >> start >> end;

	for (start; start <= end; ++start)
	{
		if (start % 2 == 0)
		{

			cout << "Even" << endl;
		}

		else if (start % 2 != 0)
		{
			cout << "Odd" << endl;
		}
	}
}


// Prompts the user for a number of numbers and returns the largest of them all.
int promptLargest(int qtyRequested)
{
	int max = INT_MIN;
	int input = 0;
	

	for (int i = 0; i < qtyRequested; i++)
	{
		cout << "Enter the numbers you wish to use. ";
		cin >> input;
	if (input > max)
	{
		max = input;
	}
	}

	

	return max;
}

// Prompts the user for a number of numbers and returns the smallest of them all.
int promptSmallest(int qtyRequested)
{
	int min = INT_MAX;
	int input = 0;


	for (int i = 0; i < qtyRequested; i++)
	{
		cout << "Enter how many numbers you wish to use. ";
		cin >> input;
		if (input < min)
		{
			min = input;
		}
	}



	return min;
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
	guessTheNumber(1, 10, 3);
	gridGen(1, 8);
	fizzBuzz(0, 0);
	EvenOrOdd(0, 0);

	cout << "MIN: " << promptSmallest(3) << endl;
	cout << "MAX: " << promptLargest(3) << endl;

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

