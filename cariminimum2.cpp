#include <iostream>
using namespace std;

int main(){
	int x, min;
	
	cout << "Masukkan bilangan :\n";
	cin >> x;
	
	min = x;
	
	while (x != -1){
		if (x < min){
			min = x;
		}
		cin >> x;
	}
		
	cout << "Bilangan terkecil adalah " << min;
	
}
