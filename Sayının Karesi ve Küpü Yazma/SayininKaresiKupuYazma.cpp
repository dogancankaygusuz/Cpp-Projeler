#include <iostream>
using namespace std;
int main() {
	
	int x;
	
	cout << "Hangi sayiya kadar yazilsin? " << endl;
	cin >> x;
	
	cout << "Sayi\t" << "Karesi\t" << "Kupu\t" << endl;
	
	for(int i=1; i<=x; i++) {
        cout << i << "\t" << i*i << "\t" << i*i*i << endl;
	}
}