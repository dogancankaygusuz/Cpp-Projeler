#include <iostream>
using namespace std;
int main () {
	
	double usttaban,alttaban,yukseklik;
    double alan;
	
	cout << "Sirasi ile ust taban,alttaban ve yuksekligi girin: ";
	cin >> usttaban >> alttaban >> yukseklik;
    
	if((usttaban > 0) && (alttaban > 0) && (yukseklik > 0)) {
	alan = (usttaban + alttaban)*yukseklik/2;
	
	cout << "Yamugun alani: " << alan << "m2" << endl;
    }

    else 
        cout << "Hatali sayi girdiniz.";

	return 0;
}