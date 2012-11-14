// deneme1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "paired.h"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	// USING THE pair CLASS

	paired <double, double> pair2;
	pair2.first = 11;
	pair2.second = 32.0;
	pair2.printPaired();

	paired <int, double> pair1(1, 2.0);
	pair1.printPaired();

	int a [] = {20, 30};
	
	cout<<*a<<endl;
	//cout<<i<<endl;
	
	// Do not remove the the code below (keeps the console open)
	cin.get();
	
	return 0;
}

