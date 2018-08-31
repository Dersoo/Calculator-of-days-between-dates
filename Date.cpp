#include "Date.h"

int Date::points = 0;

Date::Date()
{
	points++;
	point = points;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
	points++;
	point = points;
}

void Date::Show()
{
	cout << endl;
	cout << point << " point:" << endl;
	cout << day << "." << month << "." << year << endl;
}

int Date::operator-(Date op2)
{
	points--;
	Date res;
	res.day = day - op2.day;
	res.month = month - op2.month ;
	res.year = year - op2.year;
	int k;
	k = res.year * 365 + res.month * 31 + res.day;
	return k;
}


Date::~Date()
{
}
