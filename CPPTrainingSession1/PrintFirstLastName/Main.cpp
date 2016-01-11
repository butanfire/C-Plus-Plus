
using namespace std;

#include <iostream>

int main() {
	char *firstname = new char;
	char *lastname = new char;
	cout << "Please enter your firstname,lastname :";
	cin >> firstname;
	cin >> lastname;
	printf("Your firstname is %s, lastname %s", firstname, lastname);
}