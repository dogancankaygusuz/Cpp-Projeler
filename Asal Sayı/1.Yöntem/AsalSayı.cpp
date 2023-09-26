#include <iostream>
using namespace std;
int main() {
       
    int sayi;
    int sayac=0;
   
    cout << "Bir sayi giriniz: ";
    cin >> sayi;
    
	if(sayi <= 1)
 		cout << "asal degildir" << endl;
    
	else {
 	for(int j=2; j < sayi; j++) {
      if(sayi % j == 0) {
        sayac++;
        break;
        }
    }
    if(sayac == 0)
		cout << sayi << " sayisi asaldir" << endl;
    else
      cout << "asal degildir" << endl;
      }
    
	return 0;
}