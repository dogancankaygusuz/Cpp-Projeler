#include <iostream>
#include <cmath>
using namespace std;
int main () {

	double a,b,c;
    
    cout << "1.Kenari girin: ";
    cin >> a;

    cout << "2.Kenari girin: ";
    cin >> b;

    c = sqrt ((a*a+b*b));
	
	cout << "Hipotenus: " << c << endl;
	
	return 0;
}