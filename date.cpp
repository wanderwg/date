#include <iostream>
using namespace std;

class Date
{
public:
	void SecDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Display()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1, d2;
	d1.SecDate(2010, 1, 1);
	d1.Display();

	Date d2;
	d2.SecDate(2019, 6, 15);
	d2.Display();
	return 0;
}