#include <iostream>
using namespace std;

int main()
{
	int N;
	int i;
	int sum;
	
	cout << "Berapa N? ";
	cin >> N;
	sum = 0;
	for (i = 1; i <= N; i++)
		{
			sum = sum + i;
		}
	cout << "Jumlah deret = " << sum << "\n";
}
