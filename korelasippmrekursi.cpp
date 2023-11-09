#include <iostream>
#include <cmath>
using namespace std;


int hasil(int n, float sigmaxy, float sigmax, float sigmay, float sigmakuadratx, float sigmakuadraty, float sigmaxkuadrat, float sigmaykuadrat)
{
		return ((n*sigmaxy)-(sigmax*sigmay))/(sqrt((n*sigmakuadratx)-sigmaxkuadrat)*sqrt((n*sigmakuadraty)-sigmaykuadrat));
}

int main()
{
	float x, y, i, n, sigmax, sigmay, sigmaxy, sigmaxkuadrat, sigmaykuadrat, xkuadrat, ykuadrat, sigmakuadratx, sigmakuadraty;

 	cout << "Masukkan banyak data: ";
 	cin >> n;
 	cout << endl;
	
	for (i = 0 ; i < n ; i++)
  	{
   		cout << "Masukkan nilai X ke-" << i+1 << " : " ;
   		cin >> x;
   		cout << "Masukkan nilai Y ke-" << i+1 << " : " ;
   		cin >> y;
   		cout << endl;
   		
   		sigmaxy = sigmaxy + x * y;
   		sigmax = sigmax + x;
   		sigmay = sigmay + y;
   		xkuadrat = x*x;
   		ykuadrat = y*y;
   		sigmaxkuadrat = sigmax * sigmax;
		sigmaykuadrat = sigmay * sigmay;
		sigmakuadratx = sigmakuadratx + xkuadrat;
		sigmakuadraty = sigmakuadraty + ykuadrat;

  	}
  		cout << "Kuadrat X: " << xkuadrat << endl;
  		cout << "Kuadrat Y: " << ykuadrat << endl;
  	   	cout << "Sigma X: " << sigmax << endl;
   		cout << "Sigma Y: " << sigmay << endl;
   		cout << "Sigma X Kuadrat: " << sigmaxkuadrat << endl;
   		cout << "Sigma Y Kuadrat: " << sigmaykuadrat << endl;
   		cout << "Sigma Kuadrat X: " << sigmakuadratx << endl; 
   		cout << "Sigma Kuadrat Y: " << sigmakuadraty << endl;
   		cout << "Sigma XY: " << sigmaxy << endl;
   		cout << "Korelasinya adalah: " << hasil(n, sigmaxy, sigmax, sigmay, sigmakuadratx, sigmakuadraty, sigmaxkuadrat, sigmaykuadrat) << endl;

	return 0;
}
