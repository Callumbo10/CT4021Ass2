#include "stdafx.h"
#include<iostream>
#include<conio.h>  
#include <stdlib.h>
#include "CalculatorLogic.h" // Self Created Header file 
using namespace std;


 

int BasicCalc() 
{
	CalculatorClass callogic; 
	double a, b; 
	char opr; 
	char Continue = 'y';

	while (Continue == 'y') {
		system("CLS");
		cout << "================= BASIC CALCULATOR PROGRAM SELECTED =================="<< endl;
		cout << "" << endl;
		cout << "Enter any two numbers (seperated by a space): ";
		cin >> a >> b;
		cout << "Enter the operator: ";
		cin >> opr;


		cout << callogic.calculate(a,opr,b) << endl;
	
		cout << "Do you want to continue (y/n)?" << endl;
		cin >> Continue;

	} 

	return 0;
}


int main()
{
	CalculatorClass mainmenu;
	int choice;
	int selection;

	cout << "================ Welcome to my Calculator =====================" << endl;
	cout << "============ Please select the option you desire ===========" << endl; 
	cout << "" << endl;

	cout << "1.   Calculator" << endl;
	cout << "2.   View History" << endl;
	cout << "3.   Decimal to Binary Calculator" << endl;
	cout << "4.   Binary to Decimal Calculator" << endl;

	cin >> choice;
	selection = mainmenu.choice(choice);

	if (selection = 1) {
		BasicCalc();

	}

	else {
		cout << "Error" << endl;
		system("Pause");
	}



}
