
#include <iostream>

using namespace std;

int main() {
	short varShort = -10000;
	unsigned short varUshort = 52130;
	unsigned int varUint = 4825932;

	printf("Short value %i \n", varShort);
	printf("Unsigned short value %u \n", varUshort);
	printf("Unsigned int value %u \n", varUint);

	long double bigValue = 34.567839023;
	float smallerValue = 12.345f;

	printf("We use double for larger precision, %f ", bigValue);
	printf("We use float for smaller precision, %f \n", smallerValue);

}