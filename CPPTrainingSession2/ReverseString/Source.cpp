using namespace std;

const int MAX_SIZE = 4;

#include <iostream>
template <typename type> void reverseArray(type array[], int size);
template <typename type> void printArray(type array[], int size);

int main(void) {
	cout << "Enter a number : \n" << endl;
	char *abcd = new char[MAX_SIZE];
	cin.getline(abcd, MAX_SIZE + 1);

	if (abcd[0] == '0') {
		cout << "Cannot start with 0!" << endl;
	}

	int sum = 0;
	int *numbers = new int[MAX_SIZE];

	for (int i = 0; i < MAX_SIZE; i++) {
		numbers[i] = static_cast<int>(abcd[i]) -'0';
		sum += numbers[i];
	}

	printf("Sum of digit is : %i \n", sum);

	reverseArray(numbers, MAX_SIZE);
	printArray(numbers, MAX_SIZE);
	
	reverseArray(abcd, MAX_SIZE);
	printArray(abcd, MAX_SIZE);

}

template <typename type> void reverseArray(type array[], int size) {
	for (int i = 0; i < size / 2; i++) {
		swap(array[i], array[size - i - 1]);
	}
}

template <typename type> void printArray(type array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}