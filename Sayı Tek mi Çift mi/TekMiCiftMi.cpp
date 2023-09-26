#include <iostream> 
using namespace std;
int main () {
	
	int sayi;
	
	cout <<	"Sayiyi girin: ";
    cin >> sayi;
    
    if(sayi % 2 ==0)
        cout << sayi << " sayisi cifftir.";
	
    else
        cout << sayi << " sayisi tektir.";
	
    return 0;
}