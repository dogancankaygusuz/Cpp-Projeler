#include <iostream>
using namespace std;
int main() {
	
	int toplam=0,sayi;
	
	for(int i=1; i <= 100; i++) {
		cout << i << ".sayiyi girin: ";
		cin >> sayi;
		toplam += sayi;
	}
	cout << "Toplam : " << toplam;
	
	return 0;
}