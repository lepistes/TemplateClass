
#pragma once

/*****************************************************************************

Module Name:
	paired.h

Description:
	Header file for the paired template class.

Author: 
	lepistes
	e-mail: ...

Derived Classes: NONE

Attributes:
	first : first member of the template class
	second: second member of the template class

Public Methods: 
	printPaired: print the attributes of the template class
******************************************************************************/


template <typename T1, typename T2>
class paired{
public:
	T1 first;
	T2 second;
	paired():first(T1()), second(T2()){}		// Constructor
	paired(const T1 &x, const T2 &y): first(x), second(y){}  // Overloaded constructor

	void printPaired();
};

// Print the elements of the template class
template <typename T1, typename T2>
void paired<T1, T2>::printPaired(){
	cout<< first << endl;
	cout<< second << endl;
}