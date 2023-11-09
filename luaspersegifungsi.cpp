#include <iostream>
using namespace std;

int luaspersegi(int sisi, int Luas){
	return sisi * sisi;
}

int main(){
	int s, luas;
	
	cout << "Masukkan sisi: ";
	cin >> s;
	cout << luaspersegi(s, luas);

}
