using namespace std;

#include <iostream>
int FibonachiFunc(const int &number, int *Fibonachi);

int main(void) {
	int numberofNumbers = 0;
	cin >> numberofNumbers;

	int *Fibonachi = new int[numberofNumbers];
	Fibonachi[0] = 0;
	Fibonachi[1] = 1;

	for (int i = 2; i < numberofNumbers; i++) {
		Fibonachi[i] = FibonachiFunc(i, Fibonachi);
	}

	for (int i = 0; i < numberofNumbers; i++) {
		cout << Fibonachi[i] << " ";
	}
}

int FibonachiFunc(const int &number, int *Fibonachi) {
	if (number == 1) {
		return 1;
	}
	if (number == 0) {
		return 0;
	}
	return Fibonachi[number] = Fibonachi[number - 1] + Fibonachi[number - 2];
}