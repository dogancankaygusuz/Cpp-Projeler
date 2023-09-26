#include <iostream>
using namespace std;
int main() {
	
	int a, sayi, max=0;
	
	cout << "Toplam kac sayi olacak: " << endl;
	cin >> a;
	
	for(int i=1; i<=a; i++) {
		cout << i << ". sayiyi girin." << endl;
		cin >> sayi;
		
		if(sayi > max)
		max = sayi;
	}
	
	cout << "En buyuk sayi: " << max;
}