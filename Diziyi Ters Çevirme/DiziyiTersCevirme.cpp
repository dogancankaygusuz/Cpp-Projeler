#include <iostream>
using namespace std;
int main() {
	
	int a[5];
	
	cout << "5 adet dizi degerlerini girin: " << endl;
	
	for(int i=0; i<5; i++){
		cin >> a[i];
	}
	
	cout << "Ters Hali: " << endl;
	for(int i=4; i>=0; i--) {
		cout << a[i] << " ";
	}
}