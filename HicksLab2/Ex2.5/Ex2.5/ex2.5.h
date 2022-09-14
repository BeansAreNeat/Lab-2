class Date
{
public:
	Date();
	Date(int m, int d, int y);
	void read_date(int& m, int& d, int& y);
	void display_date();
private:
	int month;
	int day;
	int year;
};