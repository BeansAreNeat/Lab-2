// P2_4a.cpp - This program adds money of two different people
#include<iostream>
#include<cstdlib>
using namespace std;

class AltMoney
{
public:
	AltMoney();
	AltMoney(int d, int c);
	friend void add(AltMoney m1, AltMoney m2, AltMoney& sum);
	void display_money();
private:
	int dollars;
	int cents;
};

void read_money(int& d, int& c);

int main()
{
	int d, c;
	AltMoney m1, m2, sum;
	sum = AltMoney(0, 0);
	read_money(d, c);
	m1 = AltMoney(d, c);

	cout << "The first money is:";
	m1.display_money();
	read_money(d, c);
	m2 = AltMoney(d, c);

	cout << "The second money is:";
	m2.display_money();
	add(m1, m2, sum);

	cout << "The sum is:";
	sum.display_money();
	return 0;
}

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
	cout << "$" << dollars << ".";
	if (cents <= 9)
		cout << "0"; //to display a 0 in the left for numbers less than 10 cout << cents
	cout << endl;
}

void add(AltMoney m1, AltMoney m2, AltMoney& sum)
{
	int extra = 0;
	sum.cents = m1.cents + m2.cents;

	if (sum.cents >= 100)
	{
		sum.cents = sum.cents - 100;
		extra = 1;
	}

	sum.dollars = m1.dollars + m2.dollars + extra;
}

void read_money(int& d, int& c)
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