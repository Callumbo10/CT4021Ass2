#pragma once
#include<iostream>
#include<conio.h>  
#include "stdafx.h"
using namespace std;

class sum
{
private: int a, b, c;

public:

	int choice;
	void MainMenu() 
	{
	cout << "Welcome to my Calculator" << endl;
	cout << "Please select the option you desire" << endl;

	cout << "1.   Calculator" << endl;
	cout << "2.   View History" << endl;
	cout << "3.   Decimal to Binary Calculator" << endl;
	cout << "4.   Binary to Decimal Calculator" << endl;

	cin >> choice;
	cout << endl;
	}

}; 