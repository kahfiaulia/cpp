#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

typedef struct{
	char nama[100], nim [100], prodi[100];
} mhs;
mhs mahasiswa[100];
int a,b,c,d;

void tambahData(){
	cout << "\nMasukkan jumlah data yang akan diinput : ";
	cin >> b;
	d = 0;
	   	
   	for(c = 1; c <= b; c++){
	   	d = d + 1;
	   	cout << "\nData ke-" << d << endl;
	   	cout << "Nama\t: ";
		cin >> mahasiswa[a].nama;
	   	cout << "NIM\t: ";
		cin >> mahasiswa[a].nim;
	   	cout << "Prodi\t: ";
		cin>>mahasiswa[a].prodi;
		a++;
	}
	
	system("cls");
}

void cariNim(){
	char p[100];
	
	cout << "Masukkan NIM yang dicari : ";
  	cin >> p;
  	
 	for(int i = 0; i < 100; i++){
    	if (strstr(mahasiswa[i].prodi, p)){
      		cout << "\nNama : " << mahasiswa[i].nama << endl;;
      		cout << "NIM : " << mahasiswa[i].nim << endl;
      		cout << "Prodi : " << mahasiswa[i].prodi << endl;
     	}
 	}
}

void cariNama(){
  	char p[100];
	
	cout << "Masukkan nama yang dicari : ";
  	cin >> p;
  	
 	for(int i = 0; i < 100; i++){
    	if (strstr(mahasiswa[i].nama, p)){
      		cout << "\nNama : " << mahasiswa[i].nama << endl;;
      		cout << "NIM : " << mahasiswa[i].nim << endl;
      		cout << "Prodi : " << mahasiswa[i].prodi << endl;
     	}
 	}
}

void cariProdi(){
	char p[100];
	int n;
	
	cout << "Masukkan prodi yang dicari : ";
  	cin >> p;
  	
 	for(int i = 0; i < 100; i++){
    	if (strstr(mahasiswa[i].prodi, p)){
      		cout << "\nNama : " << mahasiswa[i].nama << endl;;
      		cout << "NIM : " << mahasiswa[i].nim << endl;
      		cout << "Prodi : " << mahasiswa[i].prodi << endl;
     	}
 	}
}


void cariData(){
	int cari;
	
	ulangicari:
	cout << "Masukkan pencarian mahasiswa berdasarkan (1. Nama/ 2. NIM/ 3. Prodi) :  ";
	cin >> cari;
	
	switch (cari){
		case 1 :
			cariNama();
			break;
		case 2 :
			cariNim();
			break;
		case 3 :
			cariProdi();
			break;
		default:
			cout << "Masukkan angka 1 - 3";
			goto ulangicari;
	}
}

void lihatData(){
	int i;
	
	for(i = 0; i < a; i++){
		cout << "\nMahasiswa ke-" << i + 1 << " : " << mahasiswa[i].nama << endl;
		cout << "NIM Mahasiswa ke-" << i + 1 << " : " << mahasiswa[i].nim << endl;
		cout << "Prodi Mahasiswa ke-" << i + 1 << " : " << mahasiswa[i].prodi << endl;
		cout << endl;
	}
	getch();
	system("cls");
}

void hapusData(){
	int x, y;
	
	cout << "Hapus data ke-";
	cin >> x;
	
	y = x-1;
	a--;
	
	for(int i = y; i < a;i++){
		mahasiswa[i] = mahasiswa[i+1];
	}
	
	cout << "Data ke-" << x << " Telah dihapus" << endl;
	getch();
	system("cls");
}

int main(){
	int pilihan;
	
	ulangi :
	cout << "Menu Program Kemahasiswaan\n";
	cout << "1. Tambah data mahasiswa\n2. Cari data mahasiswa\n3. Lihat semua daftar mahasiswa\n4. Hapus data mahasiswa\n5. Keluar";
	cout << "\nMasukkan pilihan : ";
	cin >> pilihan;
	system("cls");
		
	switch (pilihan){
		case 1 :
			cout << "Tambah data mahasiswa\n";
			tambahData();
			goto ulangi;
		case 2 :
			cout << "Cari data mahasiswa\n";
			cariData();
			goto ulangi;
		case 3 :
			cout << "Lihat semua daftar mahasiswa\n";
			lihatData();
			goto ulangi;
		case 4 :
			cout << "Hapus data mahasiswa\n";
			hapusData();
			goto ulangi;
		case 5 :
			return 0;
		default :
			cout << "\nPilih angka 1-5\n";
			goto ulangi;
	}
	return 0;
}
