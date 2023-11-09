#include <iostream>
using namespace std;

int fibonacci (int n);

int main()
{
	int angka, hasil;
	cout << "Masukkan bilangan Fibonacci: ";
	cin >> angka;
	hasil = fibonacci (angka);
	
	cout << "Nilainya adalah: " << hasil << endl;
}

int fibonacci (int n)
{
	if ((n == 0) || (n == 1))
		{
			return n;
		}
	else
		{
			return fibonacci(n-1) + fibonacci (n-2);	
		}	
}
