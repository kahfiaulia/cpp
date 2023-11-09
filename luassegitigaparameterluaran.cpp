#include <iostream>
using namespace std;

void lsegitiga (float alas, float tinggi, float *L);

int main(){
	int i, N;
	float a, t, Luas;
	
	cout << "Banyaknya segitiga = ";
	cin >> N;
	for (i = 1; i <= N; i++){
		cout << "\nSegitiga yang ke-" << i << endl;
		cout << "Panjang alas segitiga = ";
		cin >> a;
		cout << "Tinggi segitiga = ";
		cin >> t;
		lsegitiga (a, t, &Luas);
		cout << "Luas segitiga = " << Luas << endl; 
	}
}

void lsegitiga (float alas, float tinggi, float *L){
	*L = (alas*tinggi)/2;
}
