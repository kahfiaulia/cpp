#include <iostream>
using namespace std;

main ()
{
	typedef struct {
		long int hh;
		long int mm;
		long int ss;
	} Jam;
Jam J;
long int TotalDetik;

cout << "Jam : ";
cin >> J.hh;
cout << "Menit : ";
cin >> J.mm;
cout << "Detik : ";
cin >> J.ss;
TotalDetik = (J.hh*3600) + (J.mm*60) + J.ss;
cout << "Total detik = " << TotalDetik;
}
