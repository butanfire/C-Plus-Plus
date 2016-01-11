
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

int main(void) {

	printf("Please enter number A : \n");
	double numberA = 0;
	cin >> numberA;
	printf("Please enter number B : \n");
	double numberB = 0;
	cin >> numberB;
	printf("Please enter number C : \n");
	double numberC = 0;
	cin >> numberC;

	double sum = numberA + numberB + numberC;
	printf("The result of the SUM is %3f ", sum);

	double radius;
	cin >> radius;
	double perimeter = radius * 2 * M_PI;
	double area = M_PI * (pow(radius, 2));
	printf("The Perimeter is : %.2f \n", perimeter);
	printf("The Area is : %.2f \n", area);
}