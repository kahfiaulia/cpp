#include <iostream>
using namespace std;

int main(){
	char nama01[] = "Candra Nursari";
	char nama02[30];
	int i;
	
	cout << "Menyalin String " << endl;
	for (i = 0; nama01[i]; i++){
		nama02[i] = nama01[i];
	}
		nama02[i] = '\0';
		cout << "Tulisannya adalah : " << nama02;
		cout << endl;
}
