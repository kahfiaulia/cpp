#include <iostream>
using namespace std;

float f (float x);

int main(){
	float x;
	
	cout << "--------------------------------" << endl;
	cout << " x			f(x)" << endl;
	cout << "--------------------------------" << endl;
	x = 10.0;
	
	while (x <= 15.0){
		cout << x << "			" << f(x) << endl;
		x = x + 0.2;
	}
	
	cout << "--------------------------------";
}

float f(float x){
	return 2*x*x + 5*x - 8;
}
