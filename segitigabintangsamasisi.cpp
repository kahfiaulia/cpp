#include <iostream>
using namespace std;

int main()
{
	int N, i, j, spasi;
	
	cout << "Tinggi segitiga N = ";
	cin >> N;
	
	for (i=1;i<=N; i++)
		{
			spasi=N-i;
			for (j=1;j<=spasi;j++)
				 
					cout << " ";
						for (j=1;j<=i;j++)
				
					cout <<" *";
				
				
			cout << endl;
		}
}
