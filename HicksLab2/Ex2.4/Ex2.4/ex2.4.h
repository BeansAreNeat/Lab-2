#pragma once

class AltMoney
{
public:
	AltMoney();
	AltMoney(int d, int c);
	// Read_money is now a member function too
	void read_money(int& d, int& c);
	// Add is now a member function
	void add(AltMoney m1, AltMoney m2);
	// Subtract is a friend function
	friend void subtract(AltMoney& m1, AltMoney m2);
	// Out
	void display_money();
private:
	int dollars;
	int cents;
};