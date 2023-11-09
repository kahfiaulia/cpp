#include <iostream>
using namespace std;

int main()
{
	int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
	
	cout<<"Masukkan jumlah baris dan kolom matriks pertama (2 kali) : \n";
	cin>>r1>>c1;
	
	cout<<"Masukkan jumlah baris dan kolom matriks kedua (2 kali) : \n";
	cin>>r2>>c2;
	
	while (c1!=r2)
	{
		cout<<"Error, kolom matriks pertama tidak sama dengan baris matriks pertama\n";
			
		cout<<"Masukkan jumlah baris dan kolom matriks pertama (2 kali) : \n";
		cin>>r1>>c1;
	
		cout<<"Masukkan jumlah baris dan kolom matriks kedua (2 kali) : \n";
		cin>>r2>>c2;
	}
	
	cout<<"Masukkan data matriks pertama : \n";
	for (i= 0; i < r1; ++i)
	{
		for (j = 0; j < c1; ++j)
		{
			cout<<"Masukkan data a"<<i+1<<j+1<<" : \n";
			cin>>a[i][j];
		}
	}
	
	cout<<"Masukkan data matriks kedua : \n";
	for (i= 0; i < r2; ++i)
	{
		for (j = 0; j < c2; ++j)
		{
			cout<<"Masukkan data b"<<i+1<<j+1<<" : \n";
			cin>>b[i][j];
		}
	}
	
	for (i= 0; i < r1; ++i)
	{
		for (j = 0; j < c2; ++j)
		{
			mult[i][j] = 0;
		}
	}
	
	for (i = 0; i < r1; ++i)
	{
		for (j = 0; j < c2; ++j)
		{
			for (k = 0; k < c1; ++k)
			{
				mult[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	
	cout<<"Output matriks : \n";
	for (i = 0; i < r1; ++i)
	{
		for (j = 0; j < c2; ++j)
		{
			cout<<" "<<mult[i][j];
			if (j == c2-1)
			{
				cout<<endl;
			}
		}
	}
	
	return 0;
}
