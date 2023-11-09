#include<iostream>
using namespace std;
/* Dibuat oleh Muhammad Kahfi Aulia (4611418009) dan Yahya Alamudin (4611418022) */

int vkbs(int s)
{ 
	return s*s*s; 
}
float vlse(int s, int t)
{ 
	return s*s*t/3;
}
float vker(int r, int t)
{ 
	return (3.14*r*r*t)/3;
}
float vbol(int r)
{
	return (3.14*r*r*r*4)/3;
}

int main(){
	int pilihan;
	int s, t, r;
	
	cout << "Menu: \n";
	cout << "1. Menghitung Volume Kubus \n2. Menghitung Volume Limas Segiempat \n3. Menghitung Volume Kerucut \n4. Menghitung Volume Bola";
	
	ulangi :
			cout << "\nPilihan Anda (1/2/3/4): ";
			cin >> pilihan;
			
	switch (pilihan)
	{
		case 1:
			cout << "Anda memilih menghitung volume kubus";
			cout << "\nMasukkan nilai sisi kubus: ";
			cin >> s;
			cout << "Volume kubusnya adalah " << vkbs(s) << " cm3\n";
			break;
		case 2:
			cout << "Anda memilih menghitung volume limas segiempat";
			cout << "\nMasukkan nilai sisi limas: ";
			cin >> s;
			cout << "Masukkan nilai tinggi limas: ";
			cin >> t;
			cout << "Volume limas segiempat adalah " << vlse(s, t) << " cm3\n";
			break;
		case 3:
			cout << "Anda memilih menghitung volume kerucut";
			cout << "\nMasukkan nilai jari-jari: ";
			cin >> r;
			cout << "Masukkan nilai tinggi kerucut: ";
			cin >> t;
			cout << "Volume kerucut adalah " << vker(r, t) << " cm3\n";
			break;
		case 4:
			cout << "Anda memilih menghitung volume bola";
			cout << "\nMasukkan nilai jari-jari: ";
			cin >> r;
			cout << "Volume bola adalah " << vbol(r) << " cm3\n";			
			break;
		default:
			cout << "Pilih dari angka 1-4\n";
			goto ulangi;
	}
	goto ulangi;
}
