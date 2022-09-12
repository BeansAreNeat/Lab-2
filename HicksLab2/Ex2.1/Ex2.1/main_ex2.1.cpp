// Ex2.1.cpp - This program calculates amounts of paint needed 
//using the dimentions of a rectangle.
// Author: Joseph Hicks
// Date : September 9, 2022
#include<iostream>
#include"ex2.1.h"
using namespace std;

int main()
{
	double length, width; // dimension of a rectangle
	double A;			  // area of a rectangle

	cout << "Enter the length and the width of the field. \n";
	cout << "Assuming unit is meter \n";

	cin >> length >> width;
	{
		using namespace kilogram;
		A = amount(length, width);
		cout << "Amount of paint needed: " << A << " kg" << endl;
	}
	cout << endl;
	{
		using namespace milligram;
		A = amount(length, width);
		cout << "Amount of paint needed: " << A << " mg" << endl;
	}
	cout << endl;
	{
		using namespace ton;
		A = amount(length, width);
		cout << "Amount of paint needed: " << A << " T" << endl;
	}
	return 0;
}