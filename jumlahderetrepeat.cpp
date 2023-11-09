#include <iostream>
using namespace std;

int main ()
{
	int N;
	int i;
	int sum;
	
	cout << "Berapa N? ";
	cin >> N;
	sum = 0;
	i = 1;
	 	while (i <= N)
		{
			sum = sum + i; i++;
		}

	cout << "Jumlah deret = " << sum << endl;
}
