#include <iostream>
using namespace std;

int main(){
	int i = 3, numcols = 1;
	
	while (i <= 21){
		int j = 0;
		for (j = 0; j < numcols; j++){
			cout << i + j << "  ";
		}
		
		cout << "\n";
		i += 2;
		numcols += 1;
	}
}
