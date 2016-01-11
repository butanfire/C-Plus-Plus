using namespace std;

#include <iostream>

double Factorial(double n);

int main() {
	while (true) {
		int inputNumber = 0;
		double sum = 1;
		cin >> inputNumber;

		

		cout << "Sum :" << Factorial(inputNumber) << endl;
	}
}


double Factorial(double n) {
	if (n <= 1) return 1;
	else {
		return n * Factorial(n - 1);
	}
}