#include <iostream>
using namespace std;

int main(){
	typedef struct {
		long int hh;
		long int mm;
		long int ss;
	} Jam;
	Jam j;

	cout << "Jam : ";
	cin >> j.hh;
	cout << "Menit : ";
	cin >> j.mm;
	cout << "Detik : ";
	cin >> j.ss;
	
	if (j.ss + 1 < 60){
		j.ss = j.ss + 1; 
	}
	else{
		j.ss = 0;
		if (j.mm + 1 < 60){
			j.mm = j.mm + 1;
		}
		else{
			j.mm = 0;
			if (j.hh + 1 < 60){
				j.hh = j.hh + 1;
			}
			else{
				j.hh = 0;
			}
		}
	}
	
	cout << "Jam yang baru adalah " << j.hh << " : " << j.mm << " : " << j.ss;
}
