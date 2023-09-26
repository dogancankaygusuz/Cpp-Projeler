#include <iostream>
using namespace std;

int fibonacci (int x) {
	if(x<0)
	return -1;
	
	else if(x==0)
	return 0;
	
	else if(x==1)
	return 1;
	
	else
	return fibonacci(x-1) + fibonacci(x-2);
}

int main() {
	
	int x;
	
	cout << "Sayiyi girin: " << endl;
	cin >> x;
	
	cout << x << " sayisinin fibonaccisi: " << fibonacci(x);
}