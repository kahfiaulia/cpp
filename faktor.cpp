#include <iostream>
using namespace std;

int main()
{
	int i, j, n;
	
	cout << "Masukkan bilangan: ";
	cin >> j;
    i=1; n=j;
    while(i<j)
	{
        if(n%i==0)
		{
            j=n/i;
            cout << i << endl;
        }
        i++;
    }

    while(i>0){
        if(n%i==0){
            j=n/i;
            if(i!=j)cout << j << " " << endl;
        }
        i--;
    }
}
