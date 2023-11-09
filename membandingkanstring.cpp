#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char teks1[10], teks2[10];
	int hasil;
	
	cout << "Teks 1 : "; 
	gets(teks1);
	cout << "Teks 2 : ";
	gets(teks2);
	hasil = strcmp (teks1, teks2);
	
	if (hasil > 0){
		cout << "teks2 > teks1";
	}
	else if (hasil < 0){
		cout << "teks1 > teks 2";
	}
	else{
		cout << "teks 1 = teks 2";
	}
}
