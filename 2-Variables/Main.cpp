#include <iostream>
using namespace std;
int main()
{

	// Answers

	// A) 14

	// B) 9

	// C) 21

	// D) 3

	// E) 6 

	// F) 6.5


	// A)
	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	cout << "A) " << numberA << endl;

	// ...


	// B)
	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	cout << "B) " << numberB << endl;

	// ...


	// C)
	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	cout << "C) " << numberC << endl;

	// ...


	// D)
	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	cout << "D) " << somethingD << endl;

	// ...


	// E)
	int x = 13;

	x = x / 2;

	cout << "E) " << x << endl;

	// ...


	// F)
	float y = 13;

	y = y / 2;

	cout << "F)" << y << endl;

	// ...


	// Celsius to Fahrenheit

	float  degCelsius;
	cout << "Enter Celsius: ";
	cin >> degCelsius;

	float degFahrenheit = (degCelsius * 1.8) + 32; 

	cout << "Celsius to Fahrenheit" << endl;
	cout << "Celsius:    " << degCelsius << endl;
	cout << "Fahrenheit: " << degFahrenheit << endl;

	// ...


	// Area of a Rectangle

	double rectWidth; 
	cout << "Enter Rectangle Width: ";
	cin >> rectWidth;

	double rectHeight; 
	cout << "Enter Rectangle Height: ";
	cin >> rectHeight;

	double rectArea = (rectWidth * rectHeight);  
	
	cout << "Area of Rectangle: " << rectArea << endl;


	// ...


	// Average of Five

	//Variables
	float a, b, c, d, e;  
	cout << "Enter Number Value A: ";
	cin >> a;

	cout << "Enter Number Value B: ";
	cin >> b;

	cout << "Enter Number Value C: ";
	cin >> c;

	cout << "Enter Number Value D: ";
	cin >> d;

	cout << "Enter Number Value E: ";
	cin >> e;

	//Average
	float avg;              
	avg = (a + b + c + d + e) / 5; 

	cout << "Inputed Variables: ";
	cout << a << "," << b << "," << c << "," << d << "," << e << endl;
	cout << "Average: " << avg << endl;

	// ...


	// Number Swap)

	int xx = 13;
	int yy = 24;
	int temp = x;
	xx = yy;
	yy = temp;
	

	cout << "Number Swap" << endl;
	cout << "x is " << xx << endl;
	cout << "y is " << yy << endl;

	// ...


	// Fun Facts for Your Age

	int age;
	cout << "Enter your age: ";
	cin >> age;

	// <Your work can go here.>

	// <You must add more lines to output to the terminal>
	cout << "Wow! You are " << age << " years old!" << endl;

	if(age <= 17 )
	{
		cout << "You are a minor!" << endl;
		cout << "Thinking about college?" << endl;
	}
	
	if(age >= 18)
	{
		cout << "You're an adult!" << endl;
	}
	if (age >= 21)
	{
		cout << "You can drink alcohol!" << endl;
	}

	// ...


	// Conforming to Conventions

	int ages;
	int bullet_count;
	float dog_years;
	int qty;
	float shield_value;
	float defense_matrix_cooldown;
	int red_armor_value;
	float red_armor_ratio;
	int happiness;
	int gandhi_aggression;

	// ...


	// The Right Tool for the Job)

	int num;        // integer
	float num2;     // single precision floating point
	double num3;
	long double num4;
	char num5;
	bool num6;
	short int num7;
	long int num8;
	wchar_t num9;



	// ...


	// NumberSwap Difficulty Up
	int difficultyX = 13;
	difficultyX = 24;
	int difficultyY = 24;
	difficultyY = 13;
	cout << "x is " << difficultyX << endl;
	cout << "y is " << difficultyY << endl;



	// ...



	// Walkthrough

	int myAge = 17;
	int anotherAge = 18;
	int totalAge = age + anotherAge;

	cout << myAge << endl;
	cout << anotherAge << endl;
	cout << totalAge << endl;


	// ...


	system("pause");
}
