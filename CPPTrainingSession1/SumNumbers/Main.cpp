

#include <iostream>
#include <string>

using namespace std;

int main(void) {

	int numberOfNumbers;
	cin >> numberOfNumbers;

	double sum = 0, inputNumber = 0;

	for (int i = 0; i < numberOfNumbers; i++) {
		cin >> inputNumber;
			sum += inputNumber;
	}

	printf("Sum is : %f \n", sum);

}