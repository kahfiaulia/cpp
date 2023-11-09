#include <iostream>
using namespace std;

int main(){
	int n, x, min;
	
	cout << "Masukkan jumlah bilangan : ";
	cin >> n;
	cout << "Masukkan bilangan :\n";
	cin >> x;
	
	min = x;
	
	for (int i = 2; i <= n; i++){
		cin >> x;
		if (x < min){
			min = x;
		}
	}
	
	cout << "Bilangan terkecil adalah " << min;
}
