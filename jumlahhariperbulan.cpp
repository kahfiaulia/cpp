#include <iostream>
using namespace std;

int main(){
	int noBulan, tahun, jmlHari;
	
	cout << "Bulan ke-";
	cin >> noBulan;
	cout << "Tahun ";
	cin >> tahun;
	
	switch (noBulan){
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			jmlHari = 31;
			break;
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			jmlHari = 30;
			break;
		case 2 :
			if ((tahun % 4 == 0 && tahun % 100 !=  0  ) || tahun % 400 == 0){
				jmlHari = 29;
			}
			else{
				jmlHari = 28;
			}
	}
	
	cout << "Jumlah hari dalam bulan " << noBulan << " tahun " << tahun << " adalah " << jmlHari << endl;
}
