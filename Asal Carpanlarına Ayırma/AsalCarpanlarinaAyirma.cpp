#include <iostream>
using namespace std;
int main() {
	
	int sayi, carpan=2;
	
	cout << "Sayi giriniz: " << endl;
	cin >> sayi;
	
	cout << sayi << " sayisinin asal carpanlari: " << endl;
	
	while(sayi > 1) {
		while(sayi % carpan == 0) {
			cout << carpan << " ";
			sayi /= carpan;
		}
		carpan++;
	}
}