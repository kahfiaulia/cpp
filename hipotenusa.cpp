#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float de;
	float sa;
	float mi;
	
	cout << "Masukkan nilai sisi depan: ";
	cin >> de;
	cout << "Masukkan nilai sisi samping: ";
	cin >> sa;
	mi = sqrt(de*de+sa*sa);
	cout << "Nilai sisi miring adalah: " << mi << endl;
}
