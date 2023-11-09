#include <iostream>
using namespace std;

int main()
{
	int alas,tinggi;
	float luas;
	cout << "Masukkan alas: ";
	cin >> alas;
	cout << "Masukkan tinggi: ";
	cin >> tinggi;
	luas = sqrt tinggi*tinggi+alas*alas;
	cout <<"Luas segitiga: " <<luas;
}
