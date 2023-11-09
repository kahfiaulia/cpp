#include <iostream>
using namespace std;

int main()
{
	long int upah;
	char nama [100];
	char golongan;
	int jamkerja;
	
	cout << "Masukkan nama anda: ";
	cin.get(nama, 100);
	cout << "Masukkan golongan anda (A/B/C/D): ";
	cin >> golongan;
	cout << "Masukkan jam kerja anda: ";
	cin >> jamkerja;
	
	cout << "Nama: " << nama << "\n";
	if (golongan == 'A' || golongan == 'a')
	{
		cout << "Golongan A "; "\n";
		if(jamkerja <= 48)
		{
			upah=jamkerja*8000;
		}
		else if (jamkerja > 48)
		{
			upah=(jamkerja*8000)+(jamkerja-48)*15000;
		}
	}
	if (golongan == 'B' || golongan == 'b')
	{
		cout << "Golongan B "; "\n";
		if(jamkerja <= 48)
		{
			upah=jamkerja*10000;
		}
		else if (jamkerja > 48)
		{
			upah=(jamkerja*10000)+(jamkerja-48)*15000;
		}
	}
	if (golongan == 'C' || golongan == 'c')
	{
		cout << "Golongan C "; "\n";
		if(jamkerja <= 48)
		{
			upah=jamkerja*13000;
		}
		else if (jamkerja > 48)
		{
			(jamkerja*13000)+(jamkerja-48)*15000;
		}
	}
	if (golongan == 'D'|| golongan == 'd')
	{
		cout << "Golongan D "; "\n";
		if(jamkerja <= 48)
		{
			upah=jamkerja*20000;
		}
		else if (jamkerja > 48)
		{
			(jamkerja*20000)+(jamkerja-48)*15000;
		}
	}
	cout << "\nGaji anda adalah: " << upah; "\n";	
}
