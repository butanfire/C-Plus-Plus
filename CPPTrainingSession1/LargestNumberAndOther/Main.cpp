

using namespace std;
#include <iostream>
#include <bitset>

int main() {
	int numberA, numberB;
	cin >> numberA >> numberB;
	int difference = numberA - numberB;
	int MSB = (difference >> 31) & 0x1;
	int maxNumber = numberA - (MSB*difference);
	printf("The largest number is : %i \n", maxNumber);


	int a = 0;
	cin >> a;
	if (a > 500) {
		cout << "A is bigger than 500!\n";
		a = 500;
	}

	if (a < 0) {
		cout << "A is less than !\n";
		a = 0;
	}

	double b, c;
	cin >> b >> c;
	
	string binary = bitset<8>(a).to_string();
	cout << binary << endl;;
	printf("|%i | %.2f | %.2f |\n", a, b, c);
}
