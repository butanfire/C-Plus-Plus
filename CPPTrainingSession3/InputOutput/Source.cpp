
using namespace std;
#include <sstream>
#include <iostream>

int main(void) {
	stringstream oprs;
	string value;
	getline(cin, value);
	oprs << value;
	int firstnumber, secondNumber, thirdNumber;

	oprs >> firstnumber >> secondNumber >> thirdNumber;
	cout << firstnumber << " " << secondNumber << " " << thirdNumber << " " << endl;
	cout << oprs.str() << endl;

	int &ref = firstnumber;
	ref++;
	cout << ref << " " << firstnumber << endl;
	int *ref2 = &firstnumber;
	cout << *ref2 << " " << firstnumber << endl;


	return 0;
}