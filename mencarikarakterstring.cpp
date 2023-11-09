#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char *hasil;
	char teks[] = "INFORMATIKA";
	char karakter = 'O';
	hasil = strchr (teks, karakter);
	if (hasil != NULL){
		cout << "Ada" << endl;
	}
	else{
		cout << "Tidak Ada" << endl;
	}
	cout << "Isi hasil : " << hasil;
}
