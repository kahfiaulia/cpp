#include <iostream>
using namespace std;

int main(){
	string password = "abc123";
	string sandi;
	int hitung = 1;
		
	while (hitung <=3){
		cout << "Masukkan kata sandi : ";
		cin >> sandi;
	
		if (sandi == password){
			cout << "Anda berhasil masuk." << endl;
			break;
		}
		else{
			hitung = hitung + 1;
			cout << "Password salah." << endl;
		}
	}
}
