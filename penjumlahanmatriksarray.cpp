#include <iostream>
using namespace std;
int main(){
    int x,y, r, c, a[10][10],b[10][10];

	cout<< "Masukkan jumlah baris dan kolom matriks pertama (2 kali) : \n";
	cin >> r >> c;
	
	cout << "Masukkan jumlah baris dan kolom matriks kedua (2 kali) : \n";
	cin >> r >> c;
	
	if (r == c){
		cout << "Matriks A" << endl;
	    for (x = 1; x <= r; x++){
	        for (y = 1;y <= c; y++){
	            cout << "Masukkan Data Matriks A (" << x << "," << y << ") = ";
	            cin >> a[x][y];
	        }
	    }
	    
	    cout << endl <<"Matriks B"<<endl;
	    for (x = 1; x <= r; x++){
	        for (y = 1; y <= c; y++){
	            cout << "Masukkan Data Matriks B ("<< x << "," << y << ") = ";
	            cin >> b[x][y];
	        }
	    }
	    
	    cout << endl << "Hasil Penjumlahan Matriks"<< endl;
	    for (x = 1; x <= r; x++){
	        cout << endl;
	        for (y = 1; y <= c; y++){
	            cout << a[x][y] + b[x][y] << " ";
	        }
	    }
	}
	
	else{
		cout << "\nOrdo kedua matriks harus sama.";
		return 0;
	}
    
}
