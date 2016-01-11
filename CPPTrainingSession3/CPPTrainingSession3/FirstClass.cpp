using namespace std;
#include <iostream>


class Stack {
private:
	int stack[10];
	int index = 0;
public:
	Stack() {}

	void reset() {
		for (int i = 0; i < 10; i++) {
			this->stack[i] = 0;
		}
		this->index = 0;
	}

	int pop() {
		if (this->index == 0) {
			return -1;
		}

		return stack[--index];
	}

	void print() {
		cout << "(";
		for (int i = 0; i < index; i++) {
			cout << this->stack[i] << " ";
		}
		cout << ") \n";
	}

	bool push(int a) {
		if (index == 10) {
			return false;
		}
		stack[index] = a;
		index++;
		return true;
	}
};

int main() {
	Stack test;
	test.reset();
	test.print();
	test.push(5);
	test.push(3);
	test.push(8);
	test.print();

	test.pop();
	test.print();
	test.pop();
	test.pop();
	test.print();
	return 0;
}