#include <iostream>
using namespace std;

int main()
{
	const float phi = 3.14;
	float r,s,L;
	
	cout << "Masukkan nilai r: ";
	cin >> r;
	cout << "Masukkan nilai s: ";
	cin >> s;
	L = phi*r*r+phi*r*s;
	cout << "Nilai L adalah: " << L << "\n";
}
