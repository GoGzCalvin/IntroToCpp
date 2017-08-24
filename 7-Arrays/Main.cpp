#include <iostream>

using namespace std;

//Array Numbers
void arrayNumbers(int numbers[], int quantity)
{
	for (int i = 0; i < quantity; ++i)
	{
		cout << numbers[i] << endl;
	}
}

// Returns the sum of all numbers in the array.
//  - numbers is the array of integers
//  - size is the number of elements in the array
int sumNumbers(int sumArray[], int size)
{
	int a, sum;

	int sumArray[] = {1, 2, 3, 4, 5};

	for (a = 0; a < size; a++)
	{
		sum = 0;

		sum += sumArray[a];
	}

	cout << sum << endl;
}


// Returns the smallest number of the entire array.
//  - numbers is the array of integers to print from
//  - size is the number of elements in the array
int smallestValue(int numbers[], int size)
{
	int numbers[] = {1, 2, 3, 4, 5};

	int smallest = INT_MAX;
	for (int i = 0; i < size; i++) 
	{
		if (numbers[i] < smallest) 
		{
			smallest = numbers[i];
		}
	}
	cout << smallest << endl;
}

// Returns the largest number of the entire array.
//  - numbers is the array of integers
//  - size is the number of elements in the array
int largestValue(int numbers[], int size); 
{
	int numbers[] = {1, 2, 3, 4, 5};

	int largest = INT_MIN;
	for (int i = 0; i < size; i++) 
	{
		if (numbers[i] > largest) 
		{
			largest = numbers[i];
		}
	}
	cout << largest << endl;
}


int main
{
	int array[]{ 12, 18, 4, 7, 5, 9};

	// Prints Numbers
	sumNumbers(sumArray, 5);

	system("pause");
	return 0;
}