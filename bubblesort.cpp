#include <iostream>
using namespace std;

int main(){
	int n, angka[12], temp;
	
	cout << "Masukkan jumlah data : ";
	cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Angka ke-[" << i + 1 << "] : ";
		cin >> angka[i];
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - 1; j++){
			if (angka[j] > angka[j + 1]){
				temp = angka[j];
				angka[j] = angka[j + 1];
				angka[j + 1] = temp;
			}
		}
	}
	
	cout << "Data yang telah diurutkan (ascending) adalah : \n";
	for (int i = 0; i < n; i++){
		cout << angka[i] << " ";
	}
	cout << endl;
	
	cout << "Data yang telah diurutkan (descending) adalah : \n";
	for (int i = n - 1; i >= 0; i--){
		cout << angka[i] << " ";
	}
	cout << endl;
}
