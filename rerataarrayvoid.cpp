#include <iostream>
using namespace std;

const int nMaks = 100;
typedef int larikInt[nMaks + 1];

void bacaLarik(larikInt a, int n){
	for (int i = 1; i <= n; i++){
		cout << "Masukkan nilai A[" << i << "] : ";
		cin >> a[i]; 
	}
}

void cetakLarik1(larikInt a, int n){
	for (int i = 1; i <= n; i++){
		cout << "A[" << i << "] = " << a[i] << endl;
	}
}

void hitungRerata(larikInt a, int n, float *u){
	int i;
	float jumlah;
	
	i = 1;
	jumlah = 0;
	
	for (int i = 1; i <= n; i++){
		jumlah = jumlah + a[i];
	}
	*u = jumlah/n;
}

int main(){
	larikInt a;
	int k;
	int n;
	float u;
	
	cout << "Masukkan jumlah data : ";
	cin >> n;
	cout << "Baca data : " << endl;
	bacaLarik(a, n);
	cout << "Cetak data : " << endl;
	cetakLarik1(a, n);
	cout << "Hitung rata-rata : ";
	hitungRerata(a, n, &u);
	cout << "Rata-rata data adalah " << u << endl;
}
