using namespace std;


#include <iostream>
#include <algorithm>

int main() {
	int array[5], i = 0;
	while (!cin.eof() && i <= 4) {
		cin >> array[i];
		i++;
	}

	int minimal = 0, maximal = 0, sum = 0;
	double average = 0;

	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}

	minimal = array[0];
	for (int i = 1; i < 5; i++) {		
		int temp = min(array[i - 1], array[i]);
		if (minimal > temp) {
			minimal = temp;
		}
	}

	for (int i = 0; i < 5; i++) {
		if (abs(array[i]) > maximal) {
			maximal = array[i];
		}
		sum += array[i];
	}
	average = round(sum / 5);

	printf("min = %i , max = %i , sum = %i , average = %f ", minimal, maximal, sum, average);
}