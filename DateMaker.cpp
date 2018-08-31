#include "Date.h"
int main() {
	Date point1(1,7,1995);
	point1.Show();
	Date point2(9,3,2002);
	point2.Show();
	int z = 0;
	z = point2 - point1;
	cout <<endl<< "Number of days(between point1 and point 2): " << z << endl;
	system("pause");
	return 0;
}