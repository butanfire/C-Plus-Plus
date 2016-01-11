using namespace std;

#include <iostream>

int main(void) {
	cout << "Please enter a number " << endl;
	int number = 0;
	cin >> number;
	bool checker = !(number % 2 == 0);
	printf("%i - Odd? %s \n", number, checker ? "true" : "false");
}