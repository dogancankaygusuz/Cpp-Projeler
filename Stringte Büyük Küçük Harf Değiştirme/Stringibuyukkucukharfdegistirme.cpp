#include <iostream>
using namespace std;
int main() {

    string str = "C++DeneME123.* -%";
	
	int i=0;
	
	while(str[i]) {
		if(str[i]<=90 && str[i]>=65) {
			str[i] += 32;
			cout << str[i];
			i++;
		}
		else if(str[i]<=122 && str[i]>=97) {
			str[i] -= 32;
			cout << str[i];
			i++;
		}
		else {
			cout << str[i];
			i++;
        }
    }
}