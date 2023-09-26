#include <iostream>
using namespace std;
int main() {
	
	int x;

	cout << "Islem Seciniz..." << endl;
	cout << "1 - Daire alani hesaplar." << endl;
	cout << "2 - Dikdortgen alani hesaplar." << endl;
	cout << "3 - Kare alani hesaplar." << endl;
	cin >> x;
	
	switch(x) {
		
		case 1:
		    double yaricap;
			cout << "Yaricapi girin: ";
			cin >> yaricap;
			
            if(yaricap > 0)
			    cout << "Dairenin alani: " << 3*yaricap*yaricap << endl;
            else
                cout << "Hatali yaricap girdiniz..." << endl;
		break;
		
		case 2:
			double en,boy;
			cout << "Eni girin: " << endl;
			cin >> en;
			cout << "Boyu girin: " << endl;
			cin >> boy;
			
            if((en > 0) && (boy > 0))
			    cout << "Dikdortgenin alani: " << en*boy;
            else
                cout << "Hatali en veya boy girdiniz..." << endl;
		break;
			
		case 3:
			double kenar;
			cout << "Kenari girin: " << endl;
			cin >> kenar;
			
            if(kenar > 0)
			    cout << "Karenin alani: " << kenar*kenar;
            else
                cout << "Hatali kenar girdiniz..." << endl;
		break;
		
		default:
			cout <<	"Yanlis secim yaptiniz..." << endl;
	}
}
