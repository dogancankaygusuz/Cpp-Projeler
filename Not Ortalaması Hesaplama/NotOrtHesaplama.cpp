#include <iostream> 
using namespace std;
int main () {
    
    int vize,final;
    float ortalama;
    
	cout << "Vize notunu girin: " ;
    cin >> vize;
    
    cout << "Final notunu girin: ";
    cin >> final;
    
    ortalama = vize * 0.4 + final * 0.6;
    
    if(ortalama >= 60 && final >= 60) {
		cout <<	"Dersten gectiniz" << endl;
		cout << "Ortalamaniz: " << ortalama;
		}
	
    else {
		cout << "Dersten kaldiniz" << endl;
		cout << "Ortalamaniz: " << ortalama;
        }
	
	return 0;
}