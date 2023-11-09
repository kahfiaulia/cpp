#include <iostream>
using namespace std;

int main(){
	char teks[20];

	cout << "Masukkan teks: ";
	cin.get(teks, 20);
	
	for(int i = 0; teks[i]; i++){
    	if(islower(teks[i])){
        	teks[i] = toupper(teks[i]);
    	}
    	else if(isupper(teks[i])){
        	teks[i] = tolower(teks[i]);
    	}
    cout << teks[i];
	}
return 0;
}


