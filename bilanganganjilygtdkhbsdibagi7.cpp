#include <iostream>
using namespace std;

int main()
{
	int i;
	
	cout << "Bilangan tersebut adalah: ";
	for (i=0; i <= 100; i++)
		{
			if (i%2==1 && i%7!=0)
				{
					cout << i << ", ";
				}
		}
}
