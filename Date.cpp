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
}

void Date::Input()
{
	cout << "day:";
	cin >> day; cout << endl;
	cout << "month:";
	cin >> month; cout << endl;
	cout << "year:";
	cin >> year; cout << endl;
}

void Date::Show()
{
	cout << endl;
	cout<< " point " << point << endl;
	cout << "___________" << endl;
	cout<<"<"<< day << "." << month << "." << year <<">"<< endl;
	cout << "___________" << endl;
}

int Date::operator-(Date op2)
{
	int num = 0;
	int d1 = 0;
	int m1 = 0;
	int m2 = 0;
	int y1 = 0;
	int y2 = 0;
	if ((year - op2.year)!=0) {
		y1 = (year - op2.year) - 1;
		d1 = 31 - op2.day;
		m1 = 12 - op2.month;
		m2 = month - 1;
		num = (365 * y1) + (31 * m1) + d1 + (m2 * 31) + day;
	}
	else {
		y2 = (month - op2.month)-1;
		d1 = 31 - op2.day;
		num = (y2 * 31) + d1 + day;
	}
	return num;
}

Date Date::operator+(int op3)
{
	int d = 0;
	d = day + op3;
	if (d > 31) {
		while (d > 31) {
			d = d - 31;
			month++;
		}
	}
	if (month > 12) {
		while (month > 12) {
			month = month - 12;
			year++;
		}
	}
	day = d;
	Date temp(day, month, year);
	return temp;
}

void Date::operator=(Date op4)
{
	day = op4.day;
	month = op4.month;
	year = op4.year;
}


Date::~Date()
{
}
