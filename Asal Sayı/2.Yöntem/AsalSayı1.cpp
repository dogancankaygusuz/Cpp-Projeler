#include <iostream>
using namespace std;

int toplam() {
	
	int x,i=2;
	cout << "Sayi giriniz: ";
	cin >> x;
	
	if(x>i)
		while(i<=x/2) {
			if(x%i==0)
			return 0;
            
            else if(x%i!=0)
            i++;
        }	
    else if(x<i)
    return 0;
    
    return 1;
}

int main() {
	int  x;
	x= toplam();
 	
	if(x==1)
	cout << "Sayi asal";
	
    else
	cout << "Sayi asal degil";
}