#include <iostream>
using namespace std;

int main(){
	char karakter;
	int jumlah;
	
	cout << "Masukkan sejumlah karakter : ";
	cin >> karakter;
	
	while(karakter != '.'){
		jumlah = jumlah + 1;
		cin >> karakter;
	}
	
	cout << "Jumlah karakternya adalah " << jumlah << endl;
}
