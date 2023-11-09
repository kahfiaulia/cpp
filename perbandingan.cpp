#include <iostream>
using namespace std;

int perbandingan(int x, int y)
{
	cout << "Masukkan nilai pertama: ";
	cin >> x;
	cout << "Masukkan nilai kedua: ";
	cin >> y;
	
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	cout << perbandingan;
}
