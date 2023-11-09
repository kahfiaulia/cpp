#include <iostream>
using namespace std;

int main()
{
	int a; 
	int b;
	float i;
	float N;
	float sum;
	
	sum = 0;
	for (a = 1; a <= 99; a++)
		{
				for (b = 2; b <= 100; b++)
				{	
					sum += a/b;	
				}
		}
	cout << "Jumlah deret = " << sum << "\n";
}
