// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <array>

using namespace std;

void add();
void subtract();
void multiply();
void divide();
void exponent();
void matrixAddition();
void matrixSubtraction();
void matrixMultiplication();
void matrixDivision();
void root();
void displayMenu();
int getChoice();

int main()
{
	char first;
	int choice; 
	while (1 == 1) {
		cout << "\nDo you want to make a calculation? Y for yes and N for N: ";
		cin >> first;
		if (first == 'N')
			break;
		else if (first == 'Y') {
			displayMenu();
			choice = getChoice();
			if (choice == 1) {
				add();
			}
			else if (choice == 2) {
				subtract();
			}
			else if (choice == 3) {
				multiply();
			}
			else if (choice == 4) {
				divide();
			}
			else if (choice == 5) {
				exponent();
			}
			else if (choice == 6) {
				root();
			}
		}
		else {
			cout << "Enter a valid option";
		}
	}
    return 0;
}

void multiply() {
	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << "\n";
}
void exponent() {
	double num1, num2;
	cout << "Enter the number you wish to power: ";
	cin >> num1;
	cout << "Enter the exponent: ";
	cin >> num2;
	cout << "The value of " << num1 << " to the power of " << num2 << " is " << pow(num1,num2) << "\n";
}
void root() {
	double num1;
	cout << "Enter the number you want to square root: ";
	cin >> num1;
	cout << "The square root of " <<  " is " << sqrt(num1) << "\n";
}
void displayMenu() {
	cout << "Do you want to: \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exponent\n6. Square Root\n";
}
void add() {
	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2;
}
void subtract() {
	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2;
}
void divide() {
	double num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "The divedend of " << num1 << " and " << num2 << " is " << num1 / num2;
}
void matrixAddition() {
	int rows, cols;
	cout << "Enter the dimensions of the matrix:  ";
	cin >> rows >> cols;
	cout << "Enter the first row of data: ";
}
void matrixSubtraction() {

}
void matrixMultiplication() {

}
void matrixDivision() {

}
int getChoice() {
	int choice;
	cin >> choice;
	return choice;
}