#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
	
    int tahmin;
	char cevap = 'e';
	
	srand(time(NULL));
	
    while(cevap == 'e') {
		int rastgelesayi =  rand() % 100;
		
		cout << "0 ile 100 arasinda bir sayi tuttum." << endl;
		cout << "Tahmin et: ";
		cin >> tahmin;
		
		while(tahmin != rastgelesayi) {
			if(tahmin < rastgelesayi) {
				cout << tahmin << " tuttugum sayidan kucuk" << endl;
            }
			else {
				cout << tahmin << " tuttugum sayidan buyuk" << endl;
			}
			cout << "Tekrar tahmin et: ";
			cin >> tahmin;
        }
		cout << "Buldun tebrikler. Tuttugum sayi " << rastgelesayi << " di" << endl;
		
		cout << "Yeniden oynamak ister misin: " << endl;
		cout << "Evet: e, Hayir: h " << endl;
		cin >> cevap;
    }
		cout << "Oyun bitti." << endl;
        
        return 0;
}
