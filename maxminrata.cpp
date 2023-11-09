#include <iostream>
using namespace std;

int main()
{
	int a, max, min;
	float sum, N, rata;

	cout << "Masukkan banyaknya data: ";
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		cout << "Masukkan data: ";
		cin >> a;
		sum = sum + a;
		if (i == 1)
		{
			min = a;
			max = a;
		}
		else if ( min > a)
			{
				min = a;
			}
		else if ( max < a)
		{
			max = a;
		}
		else {
			
		}
	rata = sum/N;
	}
			cout << "Jumlah totalnya adalah: " << sum << endl;
			cout << "Nilai maksimalnya adalah: " << max << endl;
			cout << "Nilai minimalnya adalah: " << min << endl;
			cout << "Rata-ratanya adalah: " << rata << endl;
}
