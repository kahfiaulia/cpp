#include <iostream>
using namespace std;

int main()
{
	long harga=0;
	char kodebaju, ukuran;
	string merk;
	
	cout << "Masukkan kode baju (1. IMP/2. Prada/3. Gucci) : ";
	cin >> kodebaju;
	
	cout << "Masukkan ukuran baju (S/M/L) : ";
	cin >> ukuran;
	
	if (kodebaju=='1')
	{
		merk="IMP";
		if (ukuran == 'S' || ukuran == 's')
		{
			harga=200000;
		}
		else if (ukuran == 'M' || ukuran == 'm' )
		{
			harga=220000;
		}
		else
		{
			harga=250000;
		}
	}
	else if (kodebaju=='2')
	{
		merk="Prada";
		if (ukuran == 'S' || ukuran == 's')
		{
			harga=150000;
		}
		else if (ukuran == 'M' || ukuran == 'm')
		{
			harga=160000;
		}
		else
		{
			harga=170000;
		}
	}
	else if (kodebaju=='3')
	{
		merk="Gucci";
		if (ukuran == 'S' || ukuran == 's')
		{
			harga=200000;
		}
		else if (ukuran == 'M' || ukuran == 'm')
		{
			harga=220000;
		}
		else
		{
			harga=260000;
		}
	}
	cout << "Mereknya adalah: " << merk; "\n";
	cout << "\nHarganya adalah: " << harga; "\n";
}
