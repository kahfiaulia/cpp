#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char teks[20];
	
	cout << "Masukkan teks: ";
	cin.get(teks, 20);

	cout << strrev(teks);
}
