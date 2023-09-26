#include <iostream>
using namespace std;

void aralarindaasal(int sayi1, int sayi2, bool *sonuc) {	
	
    int kucuk = sayi1;
	
	if(sayi2<kucuk) 
	kucuk = sayi2;
	
	*sonuc = 1;
	
	for(int i=2; i<=kucuk; i++) {
		if(sayi1 % i== 0 && sayi2 % i==0){
			*sonuc = 0;		
			}
		}
}
	
int main() {
	
    int a,b;
	bool cevap;
	
	cout << "2 tane sayi giriniz: " << endl;
	cin >> a >> b;
	
	aralarindaasal(a,b,&cevap);
	
	cout << (cevap ? "aralarinda asal" : "aralarinda asal degil");
}