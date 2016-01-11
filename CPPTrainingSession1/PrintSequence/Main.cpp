
using namespace std;

#include <iostream>
#include <cmath>

int main() {
	for (long i = 0; i < 1000; i++) {
		if (i % 2 == 1) {
			printf(",-%u ", i);
		}
		else {
			printf("%u ",i);
		}
	}
	cout << endl;
	cout << sqrt(12345);
}