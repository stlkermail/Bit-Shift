#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int a, b;
	cout << "Введите 2 числа: "; cin >> a; cin >> b;
	cout << a << " " << b << endl;

	for (int i = 0; i < a; i++)
	{
		for (int i = 0; i < b; i++)
		{
			a ^= b;
			b ^= a;
			a ^= b;
		}
	}
	cout << a << " " << b;
}