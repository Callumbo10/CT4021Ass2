#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include "CalculatorLogic.h" // include the header file which contains the methods, public and private declerations for the calculator
// class
using namespace std; // using namespace std to avoid having to write std:: infront of cout, cins, etc.

// this file holds all of the bodys/ logic for the calculator, adding the funcitonality and coding behind the declared methods that 
// were created in the header file and then called upon in the main calculator file. 

CalculatorClass::CalculatorClass()
{
}

double CalculatorClass::add(double a, double b) //this method was defined in the header file 
{

	double answer = a + b; // it defines the answer and being equal to the values or variable a and b addeded together
	return answer; // the answer is then returned and will be called and shown on the main body file of the code
} // this method was setup as a test in order to see if the encapsulation worked and can be removed in the future

double CalculatorClass::calculate(double a, char opr, double b) // this is the main calculator method for checking and executing the 
	// appropiate operation to the users input values and returning a value to be called upon and displayed on the main file 
{  
	ofstream outputFile; // this line setups a link with the text file in order to be able to write to it
	outputFile.open("example.txt", ios_base::app); // the file is then opened

	double result = 0; // the result by default is set to zero

	switch (opr) // this switch case acts an if else to detect what operator the user entered and then what should then happen with the
		// values after
	{
	case '+': // for example if the users input operator was a "+" then the following code will trigger, successfully adding the users 2 
		// input values together, outputing the calculation into the text file and saving the variable result as the new answer
		result = a + b;
		outputFile << a << " + " << b << " = " << result;
		break; // before breaking the switch case
	case '-': // where as if the user entered "-" then the values would be subtracted from eachother and so on. 
		result = a - b;
		outputFile << a << " - " << b << " = " << result;
		break;
	case '*':
		result = a * b;
		outputFile << a << " * " << b << " = " << result;
		break;
	case '/':
		result = a / b;
		outputFile << a << " / " << b << " = " << result;
		break;
	default: // the default response if none of these criterias/ cases are met is to return nothing and break the switch case
		break;
	}

	return result; // once a break is met, the result is returned and output to the user
}


