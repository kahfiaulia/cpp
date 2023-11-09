#include <iostream>
using namespace std;

main ()
{
	int A, B, C;
	
	cout << "Masukkan nilai A: ";
	cin >> A;
	cout << "Masukkan nilai B: ";
	cin >> B;
	
	cout << "Nilai A dan B sebelum pertukaran: \n";
	cout << "A = " << A << "\n";
	cout << "B = " << B << "\n";
	
	C = A;
	A = B;
	B = C;
	
	cout << "Nilai A dan B setelah pertukaran: \n";
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
}
