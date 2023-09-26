#include <iostream>
using namespace std;
int main() {
	
	int sayi1,sayi2,x;
	
    cout << "Islem seciniz " << endl;
	cout << "1 - Toplama " << endl;
	cout << "2 - Cikarma " << endl;
	cout << "3 - Carpma " << endl;
	cout << "4 - Bolme " << endl;
	cin >> x;

	cout << "1.sayiyi girin: " << endl;
	cin >> sayi1;
	
	cout << "2.sayiyi girin: " << endl;
	cin >> sayi2;
	
	if(x==1)
	cout << "Sonuc: " <<sayi1 + sayi2;
	
	else if(x==2)
	cout << "Sonuc: " <<sayi1 - sayi2;
	
	else if(x==3)
	cout << "Sonuc: " <<sayi1 * sayi2;
	
	else if(x==4)
	cout << "Sonuc: " <<sayi1 / sayi2;
	
	else
	cout << "Hatali islem sectiniz..." << endl;
	
	return 0;	
}