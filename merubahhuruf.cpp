#include <iostream>
using namespace std;

int main(){
	char nama01[] = "Candra Nursari";
	int i, j;
	
	cout << "Merubah Huruf - String" <<endl;
	cout << endl;
	cout << "Tulisan Asli : " << nama01;
	cout << endl;
	
	for (i = 0; nama01[i]; i++ ){
		nama01[i] = toupper(nama01[i]);
		}
		cout << endl;
		cout << "Perubahan Tulisannya Menjadi : " << nama01;
	
	
	for ( j = 0; nama01[j]; j++){
		nama01[j] = tolower(nama01[j]);
		}
		cout << endl;
		cout << "Perubahan Tulisannya Menjadi : " << nama01;
		cout << endl;
	
	if(islower(nama01[0])){
		cout << "Huruf Kecil" << endl;
	}
	else{
		cout << "Huruf Besar" << endl;
	}
}
