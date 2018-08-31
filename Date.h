#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
	int point;
    static int points;
public:
	Date();
	Date(int d, int m, int y);
	void Show();
	int operator-(Date op2);
	~Date();
};

