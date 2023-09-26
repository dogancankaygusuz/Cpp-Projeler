#include<iostream>
using namespace std;
int main() {
   
	int n,toplam=0;
	
	cout << "N'e kadar olan sayilarin toplami icin N degerini girin: ";
	cin >> n;
	
	while(n>0) {
        toplam+=n;
        n--;
        }
	
	cout << "Toplam: " << toplam;
	
	return 0;
}