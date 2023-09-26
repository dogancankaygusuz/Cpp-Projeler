#include <iostream>
using namespace std;
int main() {
	
	float sayi, kontrol;
	int toplam = 0;
	
	cout << "Bir sayi girin: ";
	cin >> sayi;
	
	cout << sayi << " sayisinin kendisi haric pozitif tam bolenleri: ";
	
	for(int i=1; i < sayi; i++) {
		kontrol = sayi/i;
		if(kontrol == int(kontrol)) {
			cout << i << ",";
			toplam += i;
		}
	}
	cout << endl;
	
	if(toplam == sayi) {
		cout << "Girdiginiz sayi bir MUKEMMEL SAYI! " << endl;
	} 
    else {
		cout << "Girdiginiz sayi mukemmel sayi DEGIL! " << endl;
	}
	return 0; // return main(); yazılabilir
}