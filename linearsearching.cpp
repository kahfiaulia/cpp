#include<iostream>
using namespace std;

int main(){
	int arr[10], i, num, n, c=0, pos;
	cout <<"Masukkan jumlah data: ";
	cin >> n;
	cout << "Masukkan " << n << " angka : ";
	
	for (i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	lup:
	cout << "Masukkan data yang akan dicari: ";
	cin >> num;
	
	for (i = 0; i < n; i++){
		if (arr[i] == num){
			pos = i + 1;
			cout << num << " ditemukan di posisi " << pos << endl;
			c++;
		}
	}
	
	cout << "Jumlah data yang ditemukan: " << c << endl;
	if (c == 0){
		cout << "Data tidak ditemukan.\n";
		goto lup;
	}
}
