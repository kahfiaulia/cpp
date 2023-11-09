#include <iostream>
using namespace std;

main()
{
	const float pi = 3.14;
	float r;
	float L;
	
	cout << "r = ";
	cin >> r;
	L = pi * r * r;
	cout << "Luas lingkaran = " << L << "cm^2";
}
