#include <iostream>
using namespace std;

int faktoriyel(int x) {
	int carpim =1;
	for(int i=x; i>0; i--) {
	carpim*=i;
	}
	return carpim;
}

int kombinasyon(int n, int r) {
	return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n-r));
}

int main() {
	int s1,s2;
	
	cout << "n degerini girin : " ;
	cin >> s1;
    
	cout << "r degerini girin : ";
	cin >> s2;
    cout << (float)kombinasyon(s1,s2) << endl;
    
    return 0;
}