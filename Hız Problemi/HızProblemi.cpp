#include <iostream>
using namespace std;
int main () {
	
	int mesafe,hiz;

	cout << "Mesafeyi giriniz: " << endl;
	cin >> mesafe;
	
	cout << "Hizini girin: " << endl;
	cin >> hiz;
	
	int saat = mesafe/hiz;
	
	float dakikaismi = (float) mesafe/hiz - (int) mesafe/hiz;
	
	int dakika = dakikaismi * 60;
	
	cout << "Tahmini varis sureniz: " << int(saat) << " saat " << dakika << " dakikadir." << endl;
	
	return 0;
}