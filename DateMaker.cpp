#include "Date.h"
int main() {
	int x = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	cout << endl;
	cout << "Number of dates:";
	cin >> x;
	Date *mas = new Date[x];
	for (int i = 0; i < x; i++) {
		cout << "_______________" << endl;
		cout << i + 1 << " date" << endl;
		mas[i].Input();
	}
	system("cls");
	for (int j = 0; j < x; j++) {
		mas[j].Show();
	}
	cout << endl;
	cout << "\t\t\t>Select<" << endl;
	cout << "Number of days between dates - 1"<<endl;
	cout<<"Increase the date by a certain number of days - 2"<<endl;
	cout << "<>:";
	cin >> d;
	cout << endl;
	system("cls");
	for (int j = 0; j < x; j++) {
		mas[j].Show();
	}
	cout << endl;
	if (d == 1) {
		int g1 = 0;
		int g2 = 0;
		int df;
		cout << endl << "> Select two dates <" << endl;
		cout << "from:";
		cin >> g1;
		cout << endl;
		cout << "to:";
		cin >> g2;
		cout << endl;
		df = mas[g2-1] - mas[g1-1];
		cout << "number of days:" << df << endl;
	}
	else if (d == 2) {
		int v = 0;
		int u = 0;
		system("cls");
		for (int j = 0; j < x; j++) {
			mas[j].Show();
		}
		cout << endl;
		cout <<endl<< "> Select a date < " << endl;
		cout << "<>:";
		cin >> v;
		cout << endl;
		cout <<"> Enter the number of days to add < " << endl;
		cout << "<>:";
		cin >> u;
		mas[v-1] = mas[v-1] + u;
		system("cls");
		for (int j = 0; j < x; j++) {
			mas[j].Show();
		}
		cout << endl;
	}
	system("pause");
	return 0;
}