#include <iostream>
using namespace std;

int main(){
	int x, sisa;
	string biner;
	
	cout << "Masukkan bilangan yang akan dikonversikan: ";
	cin >> x;
	biner = "";
	
	do{
		sisa = x % 2;
		x = x/2;
		switch (sisa){
			case 0 :
				biner = "0" + biner;
			case 1 :
				biner = "1" + biner;
		}
	}
	while (x = 0);
	
	cout << "Bilangan binernya adalah " << biner << " ";
}
