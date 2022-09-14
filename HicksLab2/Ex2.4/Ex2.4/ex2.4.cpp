#include<iostream>
#include"ex2.4.h"
using namespace std;

AltMoney::AltMoney()
{

}

AltMoney::AltMoney(int d, int c)
{
	dollars = d;
	cents = c;
}

void AltMoney::display_money()
{
	// Fixed missing "cents" output
	cout << "$" << dollars << "." << cents;
	if (cents <= 9)
		cout << "0"; //to display a 0 in the left for numbers less than 10 cout << cents
	cout << endl;
}

// add is now a member function and there is no sum passed by reference
void AltMoney::add(AltMoney m1, AltMoney m2)
{
	int extra = 0;
	cents = m1.cents + m2.cents;
	if (cents >= 100)
	{
		cents = cents - 100;
		extra = 1;
	}
	dollars = m1.dollars + m2.dollars + extra;
}

void AltMoney::read_money(int& d, int& c)
{
	cout << "Enter dollar \n";
	cin >> d;
	cout << "Enter cents \n";
	cin >> c;
	if (d < 0 ||c < 0)
	{
		cout << "Invalid dollars and cents, negative values\n"; exit(1);
	}
}

// Same Process as the adder function but subracts
void subtract(AltMoney& m1, AltMoney m2)
{
	int extra = 0;
	// Subtracts
	m1.cents = m1.cents - m2.cents;
	if (m1.cents >= 100)
	{
		m1.cents = m1.cents - 100;
		extra = 1;
	}
	// Subtracts, minus extra
	m1.dollars = m1.dollars - m2.dollars - extra;
}