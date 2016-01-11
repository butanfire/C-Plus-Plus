using namespace std;

#include <iostream>
#include <vector>


int main() {
	
	int demonstration[] = { 10,5,3,17,4,8 };
	vector <int> someVector = { 10,5,3,17,4,8 };
	int value = someVector.back();
	someVector.pop_back();
	int value2 = someVector.back();
	cout << value2;
}