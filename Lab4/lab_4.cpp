#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
	int c;
	float a;
	short d;
	double W;
	SetConsoleOutputCP(1251);
	cout << "������ a -->";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "������ c -->";
	cin >> c;
	cout << "c=" << c << endl;
	cout << "������ d -->";
	cin >> d;
	cout << "d=" << d << endl;
	if (d == 0)
		cout << "ĳ����� �� 0 �� �������" << endl;
	else
		if ((c + a) == 1)
			cout << "ĳ����� �� 0 ������ ������" << endl;
		else
			if (d < 0)
				cout << "̳��� �� �������" << endl;
			else
		{
			W = (2 * c - d * sqrt(42 / d)) / (c + a - 1);
			cout << "���������=" << W << endl;
		}

	return 0;
}