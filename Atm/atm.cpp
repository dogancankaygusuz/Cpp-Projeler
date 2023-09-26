#include <iostream>
using namespace std;
int main() {
	
    char isim[100];
	int x;
	int k=1;
	int bakiye=0;
	
	cout << "Adinizi Giriniz:" << endl;
	cin >> isim;
	cout << "Hosgeldiniz " << isim << endl;
	
	while(k==1) {
        cout << "Yapmak istediginiz islemi secin:" << endl;
	    cout << " 1-Para cekme\n 2-Para yatirma\n 3-Bakiye sorgulma \n" << endl;
	    cin >> x;
	
	if(x>3 || x==0)
	    cout << "Hatali islem sectiniz :(" << endl;
	
	if(x==1) {
		int a;
		cout << "Cekmek istediginiz tutari girin:" << endl;
		cin >> a;
		
		if(a<0) 
		    cout << "Hatali islem." << endl;
		
		if(a>bakiye){
			cout << "Yetersiz bakiye" << endl;
			cout << "Devam icin 1`e cikmak icin 0`a basin." << endl;
			cin >> k;
		}
		else if(a>=0) {
			cout << "Kalan bakiyeniz: " << bakiye - a << endl;
			bakiye = bakiye-a;
			cout << "Devam icin 1 cikmak icin 0`a basin." << endl;
			cin >> k;
		}
	}
	else if(x==2) {
		int a;
		cout << "Yatirmak istediginiz tutari girin: " <<  endl;
		cin >> a;
		
		if(a>0) {
			cout << "Bakiyeniz: " << bakiye + a << endl;
			bakiye += a;
		}
		else 
		    cout << "Hatali sayi girdiniz." << endl;
		
		cout << "Devam icin 1 cikmak icin 0`a basin." << endl;
		cin >> k;
	}
	else if(x==3) {
		cout << "Bakiyeniz: " << bakiye << endl;
		
		cout << "Devam icin 1 cikmak icin 0`a basin." << endl;
		cin >> k;
        }
    }
}