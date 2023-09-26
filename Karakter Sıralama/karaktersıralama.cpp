#include <iostream>
using namespace std;

#define MAX 1000

void degistir(char *c1, char *c2) {
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

int main() {
	
	int x;
	char karakter[MAX];
	
	cout << "Toplamda siralanacak karakter sayisini girin: " << endl;
	cin >> x;
	
	for(int i=0; i<x; i++) {
		cin >> karakter[i];
	}
	
	char c1, c2;
	for(int i = x; i > 0; i--) {
		for(int j = 1; j < i; j++) {
			c1 = karakter[j-1];
			c2 = karakter[j];
			
			if(c1 > c2) {
				degistir(&karakter[j-1], &karakter[j]);
			}
		}
	}
	cout << karakter;
}
