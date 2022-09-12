#pragma once
class Loan
{
public:
	Loan();
	Loan(Bank bank, ID id, float amount, float rate, int term);
	void set();
	float payment();
	void display();
private:
	Bank bank;
	ID id; // assume an unique integer in three integer parts
	float amount; // $ amount of the loan
	float rate; // annual interest rate
	int term; // number of months, length of the loan
};

class Bank // Bank class definition
{
public:
	Bank();
	Bank(int bank_ID, Contact phone, Contact fax);
private:
	int bank_ID;   // 4 digit integer
	Contact phone; // object three integer pieces, # # #, # # #, # # # # Contact fax;
				   // object three integer pieces, # # #, # # #, # # # #
};

class Contact
{
public:
	Contact();
	Contact(int a, int b, int c);
private:

};