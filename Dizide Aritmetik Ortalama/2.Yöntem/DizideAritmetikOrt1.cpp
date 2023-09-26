#include <iostream>
using namespace std;
int main () {
	
	cout << "Degerleri girin : ";
	
	int a[5];
	for(int i=0; i < 5; i++) {
		cin >> a[i];
	}
	int toplam=0;
	
	for ( int i=0; i < 5; i++) {
		toplam = toplam + a[i]; 
	}
	
    cout << "Ortalama: " << (float)toplam/5;
	return 0;
}