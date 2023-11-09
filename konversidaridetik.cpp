#include <iostream>
using namespace std;

int main()
{
	long int d,m,j,ja,da;
	
	cout << "Masukkan nilai detik: ";
	cin >> d;
	j = d/3600 ;
	cout << j << " Jam ";
	ja = d%3600;
	m = ja/60;
	cout << m << " Menit ";
	da = ja% 60;
	cout << da << " Detik ";\
}
