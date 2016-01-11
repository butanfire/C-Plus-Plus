using namespace std;

#include <iostream>

int main() {
	while (true) {
		int number = 0;
		cin >> number;
		int temp = (number % 100) % 10;
		bool checker = (floor(temp) == 7);
		cout << "Third digit 7?" << checker << endl;
		cout << 7 % 10;
	}
	
}