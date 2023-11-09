#include <iostream>
using namespace std;

int main()
{
	const float phi = 3.14;
	float r,t;
	float v;
	
	cout << "Masukkan nilai r: ";
	cin >> r;
	cout << "Masukkan nilai t: ";
	cin >> t;
	v = phi *r*r*t/3;
	cout << "Nilai v adalah: " << v << endl;
}
