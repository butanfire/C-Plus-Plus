using namespace std;

#include <iostream>

int main(void) {
	int startOfNumbers = 0, endOfNumbers = 0, numberOfOccurences = 0;
	cin >> startOfNumbers >> endOfNumbers;

	for (; startOfNumbers <= endOfNumbers; startOfNumbers++) {
		if (startOfNumbers % 5 == 0) {
			numberOfOccurences++;
			cout << startOfNumbers<<" ";
		}
		continue;
	}

	if (numberOfOccurences == 0) {
		cout << " - " << endl;

	}
	else {
		cout << endl << "p : " << numberOfOccurences << endl;
	}
	
}