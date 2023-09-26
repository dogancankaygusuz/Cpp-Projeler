#include <iostream>
using namespace std;
int main (){

	int toplam=0;
	int a[8]={3,5,21,12,6,4,13,1};
	
	for(int i=0; i<=7; i++){
		toplam=a[i] + toplam;
	}
    cout << "Aritmetik Ortalama: "	<< (float) toplam/8 << endl;
	
    return 0;
}