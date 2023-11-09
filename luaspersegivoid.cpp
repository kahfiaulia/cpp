#include <iostream>
using namespace std;

void luaspersegi(int sisi, int *Luas){
	*Luas = sisi * sisi;
}

int main(){
	int s, luas;
	
	cout << "Masukkan sisi: ";
	cin >> s;
	luaspersegi(s, &luas);
	cout << luas;
	
}
