#include <iostream>
using namespace std;

int main ()
{
	int fak, n, i;
	
	cout << "Masukkan bilangan: ";
	cin >> n;
	
	fak = 1;
	for (i=n; i >= 1; i--)
		{
			fak = fak*i;
		}
	cout << "Hasilnya adalah: " << fak << "\n";
}
