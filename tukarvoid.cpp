#include <iostream>
using namespace std;

void tukar (int *a, int *b){
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

int main(){
	int m, n;
	
	cout << "Masukkan bilangan pertama : ";
	cin >> m;
	cout << "Masukkan bilangan kedua : ";
	cin >> n;
	
	cout << "Nilai sebelum penukaran\n";
	cout << "Bilangan pertama adalah " << m << endl;
	cout << "Bilangan kedua adalah " << n << endl;
	
	tukar(&m, &n);
	
	cout << "Nilai sesudah penukaran\n";
	cout << "Bilangan pertama adalah " << m << endl;
	cout << "Bilangan kedua adalah " << n << endl;
}
