#include <iostream>
#include <conio.h>
using namespace std;

int data[10], data2[10];
int n;

void insertion_sort(){
	int temp, i, j;
	for (i = 1; i <= n; i++){
		temp = data[i];
		j = i - 1;
		
		while (data[j] > temp && j >= 0){
			data[j + 1] = data[j];
			j--;
		}
		
		data[j + 1] = temp;
	}
}

int main(){
	int i;
	cout << "===PROGRAM INSERTION SORT===" << endl;
	cout << "Masukkan jumlah data: ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		cout << "Masukkan data ke-" << i << " : ";
		cin >> data[i];
		data2[i] = data[i];
	}
	
	cout << "\nData sebelum disortir : " << endl;
	for (i = 1; i <= n; i++){
		cout << data[i] << " ";
	}
	cout << endl;
	
	insertion_sort();
	cout << "\nData setelah disortir (ascending) : " << endl;
	for (int i = 1; i <= n; i++){
		cout << data[i] << " ";
	}
	cout << endl;
	
	cout << "\nData setelah disortir (descending) : " << endl;
	for (int i = n; i >= 1; i--){
		cout << data[i] << " ";
	}
	cout << endl;
	
	cout << "\nSorting dengan insertion sort telah selesai.";
	getch();
}
