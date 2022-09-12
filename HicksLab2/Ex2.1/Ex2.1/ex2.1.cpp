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
		return ((length / 100) * (width / 100)) * 20;
	}
}

namespace ton
{
	double amount(double length, double width)
	{
		cout << "From namespace 'ton', I am sending 200 T/km^2 back" << endl;
		return ((length / 1000) / (width / 1000)) * 200;
	}
}