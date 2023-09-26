#include <iostream>
using namespace std;
int main() {
	
	int boy,en;
	
	cout << "Boyu girin: " << endl;
	cin >> boy;
	
	cout << "Eni girin: " << endl;
	cin >> en;
	
	for(int a=0; a<boy; a++) {
		for(int b=0; b<en; b++) {
			cout << "*";
		}
    cout << endl;
	}
}