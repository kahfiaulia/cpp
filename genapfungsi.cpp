#include <iostream>
using namespace std;

void genap(int n){
	int i;
	for (i = 0; i <= n; i++){
		if (i % 2 == 0){
			cout << i<< endl;
		}
	}
}

int main(){
	genap(10);
	cout << endl;
	genap(20);
	cout << endl;
	genap(30);
}
