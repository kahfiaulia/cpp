#include <iostream>
using namespace std;

int main(){
	char nama[30];
	int upah, pajak, tunjangan, golongan;
	
	ulangi :
	cout << "Masukkan nama : ";
	cin.get(nama, 30);
	cout << "Masukkan golongan (1.A/ 2.B/ 3.C/ 4.D): ";
	cin >> golongan;
	
	cout << "Nama Anda : " << nama << endl;
			
	switch (golongan)
	{
		case 1:
			cout << "Grade A : Direktur" << endl;
			upah = 5000000;
			tunjangan = upah * 10/100;
			pajak = (upah + tunjangan) * 10/100;
			upah = upah + tunjangan - pajak;
			cout << "Gaji Anda adalah : " << upah << endl;
			break;
		case 2:
			cout << "Grade B : Manajer" << endl;
			upah = 3000000;
			tunjangan = upah * 10/100;
			pajak = (upah + tunjangan) * 5/100;
			upah = upah + tunjangan - pajak;
			cout << "Gaji Anda adalah : " << upah << endl;
			break;
		case 3:
			cout << "Grade C : Karyawan" << endl;
			upah = 1500000;
			tunjangan = upah * 10/100;
			pajak = (upah + tunjangan) * 2/200;
			upah = upah + tunjangan - pajak;
			cout << "Gaji Anda adalah : " << upah << endl;
			break;
		case 4:
			cout << "Grade D : OB" << endl;
			upah = 900000;
			tunjangan = upah * 10/100;
			pajak = (upah + tunjangan) * 1/100;
			upah = upah + tunjangan - pajak;
			cout << "Gaji Anda adalah : " << upah << endl;
			break;
		default:
			cout << "Masukkan grade yang tersedia";
			goto ulangi;
	}
}
