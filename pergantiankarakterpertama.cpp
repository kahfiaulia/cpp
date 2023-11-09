#include <iostream>
using namespace std;

int main(){
	char nama[] = "Candra Nursari";
	cout << "Tulisannya adalah " << endl;
	cout << nama << endl;
	cout << endl;
	cout << "Karakter Pertama diganti dengan 'R'" << endl;
	nama[0] = 'R';
	cout << nama;
}
