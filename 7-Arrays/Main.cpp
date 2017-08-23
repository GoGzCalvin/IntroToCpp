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
int sumNumbers(int numbers[], int size)
{
	
}

int main()
{
	int array[]{ 12, 18, 4, 7, 5, 9};

	// Prints Numbers
	arrayNumbers(array, 6);

	system("pause");
	return 0;
}
