using namespace std;

#include <iostream>

int main(void) {
	int number = 0;
	while (true) {
		bool isPrime = false;
		cin >> number;
		if (number > 100) {
			printf("Number %i has to be less or equal to 100", number);
		}
		if (number < 0) {
			cout << isPrime << endl;
		}
		else {
			for (int i = 0; i <= number; i++) {
				int primeCandidate = number;
				int primeChecker = 2;

				if (number <= 1) { 
					isPrime = false; 
					printf("%s \n", isPrime ? "true" : "false");
					break; 
				}
				if (number == 2) { 
					isPrime = true; 
					printf("%s \n", isPrime ? "true" : "false");
					break; }

				while (primeChecker <= primeCandidate - 1) {
					if (primeCandidate % primeChecker == 0) {
						isPrime = false;
						printf("%s \n", isPrime ? "true" : "false");
						i = number;
						break;
					}
					primeChecker++;
					if (primeChecker == primeCandidate) {
						isPrime = true;
						printf("%s \n", isPrime ? "true" : "false");
						i = number;
					}
				}
			}
		}
	}
}
