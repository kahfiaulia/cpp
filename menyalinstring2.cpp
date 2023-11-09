#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char nama01[] = "Candra Nursari";
	char nama02[30];
	int i;
	
	cout << "Menyalin String" << endl;
	cout << endl;
	strcpy(nama02, nama01);
	cout << "Tulisannya menjadi : " << nama02;
	cout << endl;
}
