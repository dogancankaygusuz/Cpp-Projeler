#include <iostream>
using namespace std;
int main() {
	
	int sayi1,sayi2;
	sayi2 = sayi1;
	
	cout <<"Faktoriyel hesaplanacak sayiyi girin: " << endl;
	cin >> sayi1;
	
	int f=1 ;
	for(sayi1; sayi1 >=1; sayi1--)
		f = f * sayi1;	
	
	cout << "Faktoriyeli: " << f; 

	return 0;
}