#include <iostream>
using namespace std;

typedef struct{
	float x;
	float y;
} titik;
titik titikTengah(titik p1, titik p2);

int main(){
	titik p1, p2;
	titik pt;
	
	cout << "Titik P1 : " << endl;
	cout << "x = ";
	cin >> p1.x;
	cout << "y = ";
	cin >> p1.y;

	cout << "Titik P2 : " << endl;
	cout << "x = ";
	cin >> p2.x;
	cout << "y = ";
	cin >> p2.y;
		
	pt = titikTengah(p1, p2);
	
	cout << "Titik tengah : " << "(" << pt.x << "," << pt.y << ")" << endl;
}

titik titikTengah (titik p1, titik p2){
	titik pt;
	
	pt.x = (p1.x + p2.x)/2;
	pt.y = (p1.y + p2.y)/2;
	return pt;
}
