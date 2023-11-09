#include <iostream>
using namespace std;

int main(){
	int x, jumlah = 0;
	
	cout << "Masukkan bilangan :\n";
	cin >> x;
	
	while (x != -1){
		if (x % 2 == 0){
			jumlah = jumlah + 1;
		}
		cin >> x;
	}
	
	cout << "Jumlah bilangan genap adalah " << jumlah; 
}
