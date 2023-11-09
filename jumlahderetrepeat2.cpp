#include <iostream>
using namespace std;

int main()
{
	float a, b, N = 0, i, sum;

	a = 1;
	sum = 0;
		
	do
		{
			sum += a/(a+1);
			a++;
		}
	while (a <= 99);
	cout << "Jumlah deret = " << sum << "\n";
}
