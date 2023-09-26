#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct nokta {
	int x, y;
};

void BilgiAl(struct nokta *n) {
	cin >> n->x >> n->y;
}

double Uzaklik(struct nokta *n1, struct nokta *n2) {
	int xfark = n1->x - n2->x;
	int yfark = n1->y - n2->y;
	
	return sqrt(pow(xfark, 2) + pow(yfark, 2));
}

int main() {
	
	struct nokta nokta1, nokta2;
	
	cout << "1. noktanin koordinatlarini girin: " << endl;
	BilgiAl(&nokta1);
	
	cout << "2. noktanin koordinatlarini girin: " << endl;
	BilgiAl(&nokta2);
	
	cout << fixed << setprecision(2); // virgülden sonra 2 basamak
	
	cout << "Noktalar arasi uzaklik: " << Uzaklik(&nokta1, &nokta2);
	
}
