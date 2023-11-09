#include <iostream>
#include <string.h>
using namespace std;

int main(){
	char kata1[] = "Halo";
	char kata2[] = " Apa ";
	strcat (kata1, kata2);
	strcat (kata1, "Kabar");
	cout << kata1;
}
