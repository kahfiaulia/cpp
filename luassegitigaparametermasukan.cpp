#include <iostream>
using namespace std;

void lsegitiga (float a, float t);

int main(){
	int i, N;
	float a, t;
	
	cout << "Banyaknya segitiga = ";
	cin >> N;
	for (i = 1; i <= N; i++){
		cout << "\nSegitiga yang ke-" << i << endl;
		cout << "Panjang alas segitiga = ";
		cin >> a;
		cout << "Tinggi segitiga = ";
		cin >> t;
		lsegitiga (a, t);
	}
}

void lsegitiga (float alas, float tinggi){
	float L;
	
	L = (alas*tinggi)/2;
	cout << "Luas segitiga = " << L << endl;
}
