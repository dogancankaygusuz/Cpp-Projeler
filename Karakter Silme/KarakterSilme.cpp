#include <iostream>
using namespace std;
int main() {
	
    char metin[10000];
	char silinecek[100];
	
	cout << "Metni giriniz:" << endl;
	cin.getline(metin,10000);
	
	cout << "Silinecek karakterleri girin:" << endl;
	cin.getline(silinecek,100);
	
	int x=0;
	
    for(int i=0; metin[i] != '\0'; ++i){
		metin[x] = metin[i];
		bool sil = false;
        
        for(int j=0; silinecek[j] != '\0'; ++j) {
			char a = metin[i];
			
			if (a >= 'a' && a <= 'z')
			a -= 32;
			
			char b = silinecek[j];
			
			if (b >= 'a' && b <= 'z')
			b -= 32;
			
			if(a == b) {
				sil = true;
				break;
            }
        }
			if(!sil)
			++x;
	}
	metin[x] = '\0';
	cout << metin;
	
	return 0;
}