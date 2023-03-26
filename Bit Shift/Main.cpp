#include <iostream>

using namespace  std;

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "Введите два числа: ";
	cin >> a >> b;
	cout << endl;
			a ^= b;
			b ^= a;
			a ^= b;
			cout << "Вывод: ";
	cout << a << " " << b;
}