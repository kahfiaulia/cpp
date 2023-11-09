#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char teks1[] = "Bersama";
	char teks2[] = "sama";
	char *hasil;
	
	hasil = strstr (teks1, teks2);
	if (hasil != NULL){
		cout << "Ada" << endl;
		cout << "Yang sama adalah : " << hasil << endl;
		cout << "Mulai dari huruf : " << *hasil;
	}
	else{
		cout << "Tidak Ada";
	}
}
