
#define _USE_MATH_DEFINES
using namespace std;
#include <cmath>
#include <iostream>

int main() {

	double numberA, numberB, numberC, x1root, x2root, determinant;
	printf("Please enter a value for A :\n");
	cin >> numberA;

	printf("Please enter a value for B :\n");
	cin >> numberB;

	printf("Please enter a value for C :\n");
	cin >> numberC;

	determinant = pow(numberB, 2) - (4 * numberA * numberC);
	printf("Determinant :  %f \n", determinant);

	if (determinant < 0) {
		printf("No real roots");
	}
	if (determinant == 0) {
		x1root = 0 - (numberB / (2 * numberA));
		printf("There is only 1 real root : %f \n", x1root);
	}
	if (determinant > 0) {
		if (numberA == 0) {
			x1root = (0 - numberB) - numberC;
			printf("The only real root is %f \n", x1root);
		}
		else {
			x1root = (0 - numberB + sqrt(determinant)) / (2 * numberA);
			x2root = (0 - numberB - sqrt(determinant)) / (2 * numberA);
			printf("Roots are %f %f \n", x1root, x2root);
		}
	}
}