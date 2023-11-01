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
	cout << "Введіть a -->";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "Введіть c -->";
	cin >> c;
	cout << "c=" << c << endl;
	cout << "Введіть d -->";
	cin >> d;
	cout << "d=" << d << endl;
	if (d == 0)
		cout << "Ділення на 0 під коренем" << endl;
	else
		if ((c + a) == 1)
			cout << "Ділення на 0 всього виразу" << endl;
		else
			if (d < 0)
				cout << "Мінус під коренем" << endl;
			else
		{
			W = (2 * c - d * sqrt(42 / d)) / (c + a - 1);
			cout << "Результат=" << W << endl;
		}

	return 0;
}