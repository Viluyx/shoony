#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int c;
	float a;
	short d;
	double W;
	cout << "Input a -->";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "Input c -->";
	cin >> c;
	cout << "c=" << c << endl;
	cout << "Input d -->";
	cin >> d;
	cout << "d=" << d << endl;
	W = (2*c - d * sqrt(42 / d)) / (c + a - 1);
	cout << "Result=" << W << endl;
	return 0;
}