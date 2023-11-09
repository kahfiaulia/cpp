#include <iostream>
using namespace std;

int main(){
	float jumlah;
	int n, i, k ;
	
	cout << "Masukkan N : ";
	cin >> n;
	
	jumlah = 0;
	i = 1;
	k = 1;
	
	while (k <= n){
		if (i % 2 == 1){
			jumlah = (jumlah + 1)/k;
		}
		else{
			jumlah = (jumlah - 1)/k;
		}
		
		i = i + 1;
		k = k+2;
	}
	
	cout << "Hasil penjumlahan deret pecahan adalah " << jumlah;
}
