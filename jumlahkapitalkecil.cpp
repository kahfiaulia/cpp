#include <iostream>
using namespace std;

int main(){
	char teks[20];
   	int i = 0, kecil = 0, besar = 0;

	cout << "Masukkan teks: ";
	cin.get(teks, 20);
	cout <<endl;
	
	for (int i = 0; teks[i]; i++){
		
	    if(teks[i] >= 'a' && teks[i] <= 'z'){
	        kecil++;
	    }
	
	    else if (teks[i] >= 'A' && teks[i] <= 'Z'){
	        besar++;
	    }    
	}

	cout << "Jumlah huruf kecil: " << kecil <<  endl;
	cout << "Jumlah huruf kecil: " << besar << endl;
}



