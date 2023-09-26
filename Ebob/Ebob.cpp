#include <iostream>
using namespace std;
int main() {
    
    int a, b, x;
    
    cout << "Iki sayi girin: ";
    cin >> a >> b;

    if((a > 0) && (b > 0)) {
    while (b != 0) {
        x = a % b;
        a = b;
        b = x;
        }
        cout << "EBOB: " << a << endl;
    }
    else 
        cout << "Yanlis sayi girdiniz." << endl;
    
    return 0;
}