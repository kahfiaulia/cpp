#include <iostream>
using namespace std;

const int nMax = 100;
typedef int larikInt[nMax + 1];

void bacaLarik(larikInt L, int n){
	for (int i= 1; i <=n; i++){
		cout << "Masukkan Nilai L[" << i << "] : ";
		cin >> L[i];
	}
}

void cetakLarik(larikInt L, int n){
	for (int i = 1; i <= n; i++){
		cout << "L[" << i << "] = " << L[i] << endl;
	}
}

void sort(larikInt L, int n){
	int i, j, iMin, temp;
	
	for (i = 1; i <= n-1;i++){
		iMin = i;
		
		for (j = i + 1; j <= n; j++){
			if (L[j] < L[iMin]){
				iMin = j;
			}
		}
		
		temp = L[iMin];
		L[iMin] = L[i];
		L[i] = temp;
	}
}

int main(){
	larikInt L;
	int n;
	
	cout << "Masukkan jumlah data : ";
	cin >> n;
	
	cout << "Baca Data : " << endl;
	bacaLarik(L,n);
	
	cout << "Urutkan data..." << endl;
	sort(L, n);
	
	cout << "Cetak Data : " << endl;
	cetakLarik(L, n);
}
