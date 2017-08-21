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
	cout << "How spicy should your food be?\n";
	cin >> thaiSpiceRating;
	if (thaiSpiceRating > 5) { thaiSpiceRating = 5; }
	else if (thaiSpiceRating < 0) { thaiSpiceRating = 0; }
	cout << "You ordered with a spiciness rating of " << thaiSpiceRating << "!\n";

	// ... 


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


	int orderSketch;
	cout << "How many Sketchbooks are you buying?  ";
	cin >> orderSketch;

	if (orderSketch > 30)
	{
		cout << "You entered ";
		cout << orderSketch << endl;
		cout << "We're sorry but your order is too high. " << endl;
	}

	else if (orderSketch < 9)
	{
		cout << "You entered ";
		cout << orderSketch << endl;
		cout << "We're sorry but your order is too low. " << endl;
	}

	else
	{
		cout << "You entered ";
		cout << orderSketch << endl;
		cout << "Thanks for shopping with us!" << endl;
	}

	// ... 



	// Field:       Enable Motion Blur
	// Constraints: Must be a 'y' or 'n' value.
	//
	//              Provide an error message if any other value.
	char answer;
	char yes = 'y';
	char no = 'n';

	cout << "Would you like to enable Motion Blur? [y/n] ";
	cin >> answer;

	if (answer == yes )
	{
		cout << "You answered " << yes << endl;
		cout << "Motion Blur is now enabled" << endl;
	}
	
	else if (answer == no)
	{
		cout << "You answered " << no << endl;
		cout << "Motion Blur is not enabled" << endl;
	}

	else
	{
		cout << "Error" << endl;
	}

	// ... 

	//Four Function Disposable Calculator
	float value1, value2;
	char operation;
	char multi = 'x';		
	char div = '/';
	char add = '+';
	char sub = '-';

	cout << "Please input two numbers. ";
	cin >> value1 >> value2;

	cout << "Multiply, Divide, Add, or Subtract? [+, -, x, /] ";
	cin >> operation;

	if (operation == 'x')
	{
		cout << (value1 * value2) << endl;
	}
	
	else if (operation == '/')
	{
		cout << (value1 / value2) << endl;
	}

	else if (operation == '+')
	{
		cout << (value1 + value2) << endl;
	}

	else if (operation == '-')
	{
		cout << (value1 - value2) << endl;
	}


	// ...


	// Battle of Prehistoric Proportions
	int playerScore = 0;
	int dinoScore = 0;
	int rateStrength;
	cout << "How would you rate your strenth on a a scale of 1 to 10? ";
	cin >> rateStrength;

	if (rateStrength < 4)
	{
		cout << "Your strength is no match for the Dino." << endl;
		dinoScore + 1;
	}

	else if (rateStrength > 4)
	{
		cout << "Your're stronger than the Dino." << endl;
			playerScore + 1;
	}

	else if (rateStrength = 4)
	{
		cout << "You and the dino equal in strength." << endl;
		playerScore + 0;
		dinoScore + 0;
	}
	
	//RPS Dino
	int playerChoice;
	cout << "Which of the following do you take into battle? \n 1.) A sack of potatoes \n 2.) An invisibility cape \n 3.) The Mango Blade \n";
	cin >> playerChoice;

	if (playerChoice == 1)
	{
		cout << "You've been beaten by the dino's invisibility cape." << endl;
		dinoScore + 1;
	}

	else if (playerChoice == 2)
	{
		cout << "You both went invisible, nothing happens..." << endl;
		dinoScore + 0;
		playerScore + 0;
	}

	else if (playerChoice == 3)
	{
		cout << "You've beaten the dino's invisibility cape." << endl;
		playerScore + 1;
	}

	//Battles Fought

	int playerBattles;
	int dinoBattles = 2;
	cout << "How many battles have you fought?";
	cin >> playerBattles;

	if (playerBattles < dinoBattles)
	{
		cout << "You're not as experienced as the dino." << endl;
		dinoScore + 1;
	}

	else if (playerBattles = dinoBattles)
	{
		cout << "You both have equal experience" << endl;
		dinoScore + 0;
		playerScore + 0;
	}

	else if (playerBattles > dinoBattles)
	{
		cout << "You're more experienced than the dino." << endl;
		playerScore + 1;
	}

	// Enough Sleep?
	char playerSleep;
	cout << "Did you get enough sleep? [y/n]?";
	cin >> playerSleep;

	if (playerSleep == 'y')
	{
		cout << "You both got enough sleep 1 point for each of you!" << endl;
		dinoScore + 1;
		playerScore + 1;
	}

	else if (playerSleep == 'n')
	{
		cout << "The dino got more sleep than you." << endl;
		dinoScore + 1;
	}

	// Vitamin C
	int playerVitamin;
	cout << "How much Vitamin C do you get everyday? (mg)";
	cin >> playerVitamin;

	if (playerVitamin < 75)
	{
		cout << "You need more Vitamin C!" << endl;
		dinoScore + 1;
	}

	else if (playerVitamin >= 75)
	{
		cout << "You consume enough Vitamin C!" << endl;
		playerScore + 1;
	}
	
	if (playerVitamin > 75 && playerChoice == 3)
	{
		cout << "You are the legendary Vitamin C warrior you gain a point!" << endl;
		playerScore + 1;
	}

	// Gamer?
	char playerGamer;
	cout << "Are you a gamer? [y/n]";
	cin >> playerGamer;

	if (playerGamer == 'y')
	{
		cout << "You're just straight up cool, have a point." << endl;
		playerScore + 1;
	}

	if (playerGamer == 'n')
	{
		cout << "You're just plain boring..." << endl;
		dinoScore + 1;
	}

	// Solar Eclipse
	char playerOpinion;
	cout << "Did you think the solar eclipse was beautiful? [y/n]";
	cin >> playerOpinion;

	if (playerOpinion == 'y')
	{
		cout << "You know what beauty is." << endl;
		playerScore + 1;
	}

	if (playerOpinion == 'n')
	{
		cout << "How did you not..." << endl;
		dinoScore + 1;
	}
	// ... 

	//View Score?
	char scoreTotal;
	cout << "Would you like to see who won? [y/n]";
	cin >> scoreTotal;

	if (scoreTotal == 'y')
	{
		cout << "Player Score: " << playerScore  << "Dino Score: " << dinoScore  << endl;
	}

	if (scoreTotal == 'n')
	{
		cout << "This was pointless..." << endl;
	}



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