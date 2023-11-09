#include <iostream>
using namespace std;

int main(){
	int nilai[3], jumlah, hasil;
	
	for (int i = 1; i <=3 ; i++){
		cout << "Masukkan Nilai ke-" << i << " : ";
		cin >> nilai[3];
		
		jumlah = jumlah + nilai[3];
	}
	
	hasil = jumlah/3;
	cout << "Nilai rata-rata : " << hasil << endl;
	
	if (hasil >= 91 && hasil <= 100){
		cout << "Grade A\n";
		cout << "Biayanya adalah Rp.50.000";
	}
	else if (hasil >= 76 && hasil <= 90){
		cout << "Grade B\n";
		cout << "Biayanya adalah Rp.150.000";
	}
	else if (hasil >= 60 && hasil <= 75){
		cout << "Grade C\n";
		cout << "Biayanya adalah Rp.250.000";
	}
	else if (hasil >= 40 && hasil <= 59){
		cout << "Grade D\n";
		cout << "Biayanya adalah Rp.350.000";
	}
	else if (hasil >= 1 && hasil <= 39){
		cout << "Grade E\n";
		cout << "Biayanya adalah Rp.450.000";
	}
	else{
		cout << "Grade 0\n";
		cout << "Biayanya adalah Rp.550.000";
	}
}
