#include <iostream>
using namespace std;

int main()
{
	long double a, p, n, i;

	cout << "Masukkan bilangan: ";
	cin >> a;
	cout << "Masukkan pangkat: ";
	cin >> n;
	
	p=1;
	for (int i=0; i < n ; i++)
		{
			p = p*a;
		}
	cout << "Bilangan tersebut adalah: " << p << "\n";
}
