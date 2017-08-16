#include <iostream>
using namespace std;
int main()
{

	// Answers


	// A) 30

	// B) 15

	// C) 24

	// D) 0

	// E) 56

	// F) 6

	// G) 3

	// ...


	// A)
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}

	std::cout << "A) " << numberA << std::endl;

	// ...


	// B)
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}

	std::cout << "B) " << numberB << std::endl;

	// ...


	// C)
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}

	std::cout << "C) " << numberC << std::endl;

	// ...


	// D)
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}

	std::cout << "D) " << numberD << std::endl;


	// ...


	// E)
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}

	std::cout << "E) " << numberE << std::endl;

	// ...


	// F)
	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}

	std::cout << "F) " << numberF << std::endl;

	// ...


	// G)
	int numberG = 6;
	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << std::endl;

	// ...

	// Number Judging 
	int numberJudge;
	cout << "Enter a number ranging between 1 and 100:  ";
	cin >> numberJudge;

	if (numberJudge > 50)
	{
		cout << "You entered ";
		cout << numberJudge << endl;
		cout <<  "This number is a big number!" <<  endl;
	}

	else if (numberJudge < 50)
	{
		cout << "You entered ";
		cout << numberJudge << endl;
		cout << "This is a small number!" << endl;
	}

	else if (numberJudge = 50)
	{
		cout << "You entered ";
		cout << numberJudge << endl;
		cout << "This is a balanced number!" << endl;
	}

	// ...

	
	//Age Gate
	int age;
	cout << "Enter your age: ";
	cin >> age;

	if (age <= 17)
	{
		cout << "You are a minor!" << endl;
	}

	else if (age >= 18)
	{
		cout << "You're an adult!" << endl;
	}

	else if (age >= 50)
	{
		cout << "You are eligible to join AARP!" << endl;
	}

	else if (age >= 65)
	{
		cout << "You are eligible for retirement benefits!" << endl;
	}

	// ...


	// The Smallest of Three Numbers


	float numberOne;
	cout << "Enter a number: ";
	cin >> numberOne;

	float numberTwo;
	cout << "Enter a number: ";
	cin >> numberTwo;

	float numberThree;
	cout << "Enter a number: ";
	cin >> numberThree;

	if (numberOne < numberTwo && numberThree)
	{
		cout << "Your smallest number is ";
		cout << numberOne << endl;
	}

	else if (numberTwo < numberOne && numberThree)
	{
		cout << "Your smallest number is ";
		cout << numberTwo << endl;
	}

	else if (numberThree < numberOne && numberTwo)
	{
		cout << "Your smallest number is ";
		cout << numberThree << endl;
	}

	// ...


	// Even or Odd
	int evenOdd;
	cout << "Enter any whole number: ";
	cin >> evenOdd;

	if (evenOdd % 2 == 0)
	{

		cout << "Your number is even" << endl;
	}
	
	else if (evenOdd % 2 != 0) 
	{
		cout << "Your number is odd" << endl;
	}


	// ... 


	// Clamp the Number
	int clamp;
	cout << "Enter a number between 15 and 30: ";
	cin >> clamp;

	if(clamp <= 15)
	{
		clamp = 15;
		cout << clamp << endl;
	}

	else if (clamp >= 30)
	{
		clamp = 30;
		cout << clamp << endl;
	}

	else
	{
		cout << clamp << endl;
	}

	// ... 


	// Input Validation

	// Field:       Thai Spiciness Rating
	// Constraints: Any number from 0 to 5, inclusive of both ends.
	int thaiSpiceRating = 0;
	std::cout << "How spicy should your food be?\n";
	std::cin >> thaiSpiceRating;
	if (thaiSpiceRating > 5) { thaiSpiceRating = 5; }
	else if (thaiSpiceRating < 0) { thaiSpiceRating = 0; }
	std::cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";

	// Field:       Purchase Order for Cookies
	// Constraints: Must be ordered in multiples of 23. Only whole numbers.
	//              Round down to the nearest multiple if not a multiple of 23.
	//
	//              If nearest multiple is zero, provide an error message.

	// Field:       Purchase Order for Sketchbooks (3pk)
	// Constraints: Must order at least 9 sketchbooks total.
	//              The total may not exceed 30 sketchbooks ordered.
	//
	//              If the total number of sketchbooks ordered does not meet
	//              the minimum order count or exceeds the maximum order count,
	//              provide an error message.

	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.

	// ...



	// ... 


	// Walkthrough
	float num;
	cout << "Enter a number: ";
	cin >> num;

	bool luckyNumber = true;

	if (num == 12)
	{
		cout << "That's my favorite and lucky number." << endl;
	}
	else
	{
		cout << "This number means nothing to me." << endl;
	}


	system("pause");
}