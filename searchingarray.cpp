#include <iostream>
using namespace std;

const int nMax = 100;
typedef int larikInt[nMax + 1];

void bacaLarik(larikInt L, int n){
	for (int i = 1; i <= n; i++){
		cout << "Masukkan nilai L[" << i << "] : ";
		cin >> L[i];
	}	
}

void cari(larikInt L, int n, int x, int *idx){
	int i = 1;
	
	while ( i < n && L[i] != x){
		i++;
	}
	
	if (L[i] == x){
		*idx = i;
	}
	else{
		*idx = -1;
	}
}


int main(){
	larikInt L;
	int n, x, idx;
	
	cout << "Masukkan jumlah data : ";
	cin >> n;
	
	cout << "Baca data : " << endl;
	bacaLarik(L, n);
	
	cout << "Masukkan nilai yang dicari : ";
	cin >> x;
	cari(L, n, x, &idx);
	
	if (idx == -1){
		cout << "Data tidak ditemukan";
	}
	else{
		cout << x << " Ditemukan pada index ke-" << &idx;
	}
}
