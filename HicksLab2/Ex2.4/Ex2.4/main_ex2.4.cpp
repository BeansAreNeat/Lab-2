// P2_4a.cpp - This program adds money of two different people
#include<iostream>
#include<cstdlib>
#include"ex2.4.h"
using namespace std;

int main()
{
	int d, c;
	AltMoney m1, m2, sum;
	// Constructor Sets to default
	sum = AltMoney(0, 0);
	sum.read_money(d, c);
	m1 = AltMoney(d, c);

	cout << "The first money is:";
	m1.display_money();
	sum.read_money(d, c);
	m2 = AltMoney(d, c);

	cout << "The second money is:";
	m2.display_money();
	sum.add(m1, m2);

	cout << "The sum is:" << endl;
	sum.display_money();

	cout << "\nSubtracted it is: " << endl;
	subtract(m1, m2);
	m1.display_money();
	return 0;
}