#include <iostream>
using namespace std;

int main(){
	int A[7];
	int j, k, i, temp;
	int jmax, u = 6;
	
	cout << "Masukkan nilai pada elemen array : " << endl;
	for (i = 0; i < 7; i++){
		cout << "A (" << i + 1 << ") = ";
		cin >> A[i];	
	}
	
	for (j = 0; j < 7; j++){
		jmax = 0;
		for (k = 1; k <= u; k++)
			if (A[k] > A[jmax])
				jmax = k;
				temp = A[u];
				A[u] = A[jmax];
				A[jmax] = temp;
				u++;
	}
	
	cout << "\nNilai setelah diurutkan (ascending) = " << endl;
	for (i = 0; i < 7; i++){
		cout << A[i] << " ";
	}
	
	cout << "\nNilai setelah diurutkan (descending) = " << endl;
	for (i = 6; i >= 0; i--){
		cout << A[i] << " ";
	}
}
