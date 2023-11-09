#include <iostream>
using namespace std;

int fak(int n);
float kom(int n, int r);

int main()
{
	int n, r, hasil;
	cout << "Masukkan nilai n: ";
	cin >> n;
	cout << "Masukkan nilai r: ";
	cin >> r;
	hasil = kom(n, r);
	cout << "Hasil kombinasinya adalah: " << hasil << endl;
	
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

float kom(int n, int r)
{
	if (n <= 1)
	{
		return 0;
	}
	else
	{
		return (fak(n)/fak(r)*fak(n-r));
	}
}
