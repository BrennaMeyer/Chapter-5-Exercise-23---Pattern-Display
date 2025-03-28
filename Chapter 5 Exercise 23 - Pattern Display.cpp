// Chapter 5 Exercise 23 - Pattern Display.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer: Brenna Meyer
//Date: March 27th,2025
//Requirements: Write a program that uses a loop to display Pattern A below, followed by another loop that displays Pattern B.

#include <iostream>
using namespace std;

//Prototypes 
void patternA(int min, int max, char symbol);
void patternB(int min, int max, char symbol);

int main()
{
	const int min = 0,
		max = 10;
	char symbol = '+';

	cout << "Pattern A:\n" << endl;
	patternA(min, max, symbol);

	cout << "Pattern B:\n" << endl;
	patternB(min, max, symbol);

	return 0;
}

void patternA(int min, int max, char symbol) {
	for (int i = min; i < max;i++)
	{
		for (int j = min;j <= i; j++)
		{
			cout << symbol;
		}
		cout << endl;
	}
}

void patternB(int min, int max, char symbol) {
	for (int i = min; i < max;i++)
	{
		for (int j = max;j > i; j--)
		{
			cout << symbol;
		}
		cout << endl;
	}
}