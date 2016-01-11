using namespace std;

#include <iostream>

int main() {
	srand(time_t(NULL));
	while (true) {
		cout << "Enter a range :";
		int min, max;
		cin >> min >> max;
		cout << rand() % max + min << " ";
	}
}