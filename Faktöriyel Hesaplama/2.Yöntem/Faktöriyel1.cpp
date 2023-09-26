#include <iostream>
using namespace std;
int main() {
	
	int sayi,faktoriyel;
	
	cout <<	"Faktoriyel hesaplanacak sayiyi girin: " << endl;	
	cin >> sayi;
	
	faktoriyel = 1;
	
	while(sayi>=2)
	{
		faktoriyel *= sayi;
		sayi--;
	}
	
	cout << "Cevap: " << faktoriyel;
}