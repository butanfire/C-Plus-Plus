using namespace std;

#include <iostream>

void calculateArea(const double &a, const double &b, const double &h, double &area) {
	area = (a + b) / 2 * h;
}
int main() {
	double sideA, sideB, height;
	void *fncptr(double, double, double, double) = calculateArea();

	while (true) {
		cout << "Enter value for side A : \n";
		cin >> sideA;
		cout << "Enter value for side B : \n";
		cin >> sideB;
		cout << "Enter value for height : \n";
		cin >> height;
		double area = 0;
		calculateArea(sideA, sideB, height, area);
		printf("Area is %.3f \n", area);

	}
}

