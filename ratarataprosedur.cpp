#include <iostream>
using namespace std;

void ratarata(int N, float *u){
	float x, jumlah;
	int i;
	
	jumlah = 0;
	for (i = 1; i <= N; i++){
		cout << "Nilai ujian yang ke- " << i << endl;
		cin >> x;
		jumlah = jumlah + x;
	}
	*u = jumlah/N;
}

int main (){
	float rerata;
	int N;
	
	cout << "Jumlah peserta ujian = ";
	cin >> N;
	ratarata (N, &rerata);
	cout << "Nilai rata-rata = " << rerata << endl;
	if (rerata < 50)
	{
		cout << "Nilai rata-rata ujian tidak bagus " << endl;
	}
	else
	{
		cout << "Nilai rata-rata ujian bagus " << endl;
	}
}
