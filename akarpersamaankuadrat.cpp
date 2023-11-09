#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a, b, c;
	float x1, x2, D, z, r;
	
	cout << "Masukkan nilai a: ";
	cin >> a;
	cout << "Masukkan nilai b: ";
	cin >> b;
	cout << "Masukkan nilai c: ";
	cin >> c;
	
	D = (b*b)-4*a*c;
	z = -b/(2*a);
	r = sqrt(-D)/(2*a);
	
	if (D > 0)
		{
			cout << "Akar-akarnya real dan berbeda  \n";
			x1 = (-b + sqrt(D))/2*a;
			cout << "Akar pertamanya adalah " << x1 << "\n";
			x2 = (-b - sqrt(D))/2*a;
			cout << "Akar keduanya adalah " << x2 << "\n";
		}
	else if (D == 0)
		{
		cout << "Akar-akarnya real dan sama  \n";
		x1 = -b/(2*a);
		cout << "Kedua akarnya adalah " << x1 << "\n";
		}
	else
		{
		cout << "Akar-akarnya imajiner  \n";
		x1 = z + r;
		cout << "Akar pertamanya adalah " << x1 << "i \n";
		x2 = z - r;
		cout << "Akar keduanya adalah " << x2 << "i \n";
		}
}
