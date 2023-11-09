#include <iostream>
using namespace std;

int fak(int n);

int main()
{
	int angka, hasil;
	cout << "Masukkan nilai: ";
	cin >> angka;
	hasil = fak(angka);
	cout << "Nilai faktorialnya adalah: " << hasil << endl;
	
	cin.get();
	return 0;
}

int fak (int n)
{
	if ( n <= 1 )
	{
		return n;
	}
	else
	{
		return n * fak(n-1);
	}
}
