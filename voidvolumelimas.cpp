#include <iostream>
using namespace std;

void volume_limas()
{
	int p, l, t, v;
	cout << "Masukkan panjang: ";
	cin >> p;
	cout << "Masukkan lebar: ";
	cin >> l;
	cout << "Masukkan tinggi: ";
	cin >> t;
	
	v = (p*l*t)/3;
	cout << "Volume limas segi empat: " << v << endl;
}

int main()
{
	volume_limas();
}
