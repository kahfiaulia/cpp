#include <iostream>
using namespace std;

int main()
{
	long int pokok, bunga, tahun;
	
	pokok = 5000000;
	for (tahun = 1; tahun <= 8; tahun++)
	{
		bunga = pokok * 7/100;
	}
	cout << "Uang setelah pajak adalah: " << bunga << endl;
}
