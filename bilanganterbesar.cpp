#include <iostream>
using namespace std;

int main ()
{
	int a, b, c, max;
	
	cout << "Masukkan bilangan pertama: ";
	cin >> a;
	cout << "Masukkan bilangan kedua: ";
	cin >> b;
	cout << "Masukkan bilangan ketiga: ";
	cin >> c;
	
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	if (c > max)
		{
			max	= c;
		}
	cout << "Bilangan terbesar adalah " << max << "\n";
}
