#include<iostream>
#include"ex2.5.h"
using namespace std;

Date::Date(int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
}

void Date::read_date(int& m, int& d, int& y)
{
	cout << "Enter dollar \n";
	cin >> d;
	cout << "Enter cents \n";
	cin >> c;
	if (d < 0 || c < 0)
	{
		cout << "Invalid dollars and cents, negative values\n"; exit(1);
	}
}