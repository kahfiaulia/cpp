#include <iostream>
using namespace std;

int main(){
	char nama[100][100];
	int nilai[100], no;
	
	cout << "Masukkan jumlah mahasiswa : ";
	cin >> no;
	
	for (int i = 1; i <= no; i++){
		cout << "\nMasukkan nama mahasiswa : ";
		cin >> nama[i];
		cout << "Masukkan nilai mahasiswa: ";
		cin >> nilai[i];
	}
	
	cout << "\nTampilkan data" << endl;
	for (int i = 1; i <= no; i++){
		cout << "Nama " << nama[i] << " dengan nilai " << nilai[i] <<endl;
	}
	
	return 0;
}
