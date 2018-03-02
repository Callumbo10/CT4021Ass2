#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include "CalculatorLogic.h"
using namespace std;


CalculatorClass::CalculatorClass()
{
}

double CalculatorClass::add(double a, double b)
{

	double answer = a + b;
	return answer;
}

double CalculatorClass::calculate(double a, char opr, double b)
{  
	ofstream outputFile;
	outputFile.open("example.txt", ios_base::app);

	double result = 0; 

	switch (opr)
	{
	case '+':
		result = a + b;
		outputFile << a << " + " << b << " = " << result;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	default: 
		break;
	}

	return result;
}

int CalculatorClass::choice(int choice)
{  
	int result;
	switch (choice) { // the switch case operator reads the users input/ choice and if the input value is equal to any of the defined cases
						// below, then the respective output is executed. Otherwise, nothing happens and the user is made aware of the mistake
	case 1:
		result = 1; //if the user enters "1" then the calculator function/ method is triggered
		break;
	} 

	return result;
}
