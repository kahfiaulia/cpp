#include <iostream>
using namespace std;

int main (){
	typedef struct {
		long int hh;
		long int mm;
		long int ss;
	} Jam;
Jam j1,j2, j3;
long int TotalDetik1, TotalDetik2, durasi, biaya;

cout << "=== Awal Percakapan ===\n";
cout << "Jam : ";
cin >> j1.hh;
cout << "Menit : ";
cin >> j1.mm;
cout << "Detik : ";
cin >> j1.ss;

cout << "=== Akhir Percakapan ===\n";
cout << "Jam : ";
cin >> j2.hh;
cout << "Menit : ";
cin >> j2.mm;
cout << "Detik : ";
cin >> j2.ss;

TotalDetik1 = (j1.hh*3600) + (j1.mm*60) + j1.ss;
TotalDetik2 = (j2.hh*3600) + (j2.mm*60) + j2.ss;

durasi = TotalDetik2 - TotalDetik1;
biaya = durasi * 5;
cout << "Biaya telepon Anda adalah Rp." << biaya;
}
