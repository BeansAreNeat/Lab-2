#include <iostream>s
using namespace std;

namespace kilogram
{
	double amount(double length, double width)
	{
		cout << "From namespace 'kilogram', I am sending 0.2kg/m^2 back" << endl;
		return (length * width) * 0.2;
	}
}

namespace milligram
{
	double amount(double length, double width)
	{
		cout << "From namespace 'milligram', I am sending 20 mg/cm^2 back" << endl;
		// Divided by 100 in order to correct units to meters^2
		return ((length) * (width)) * 20;
	}
}

namespace ton
{
	double amount(double length, double width)
	{
		cout << "From namespace 'ton', I am sending 200 T/km^2 back" << endl;
		return ((length) * (width)) * 200;
	}
}