#include <iostream>
using namespace std;

int main()
{
	const float phi = 3.14;
	float r,v;
	
	cout << "Masukkan nilai r: ";
	cin >> r;
	v = phi*r*r*r*4/3;
	cout << "Nilai v adalah: " << v << endl;
}
