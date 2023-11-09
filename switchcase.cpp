#include <iostream>
using namespace std;

int main()
{
	int pilihan;
	string text;
	
	cout << "Daftar bahasa pemrograman: \n";
	cout << "1. Java \n2. C++ \n3. PHP \n";
	
	ulangi :
			cout << "Masukkan pilihan: ";
			cin >> pilihan;
			
	switch (pilihan)
	{
		case 1:
			cout << "Anda memilih Java";
			break;
		case 2:
			cout << "Anda memilih C++";
			break;
		case 3:
			cout << "Anda memilih PHP";
			break;
		default:
			cout << "Pilih dari angka 1-3\n";
			goto ulangi;
	}
}
