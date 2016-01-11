using namespace std;

#include <iostream>

class RGB {
private:
	int m_red;
	int m_green;
	int m_blue;

public:
	RGB(int someRed, int someGreen, int someBlue) : m_red(someRed), m_green(someGreen), m_blue(someBlue)
	{}
	~RGB() {
		cout << "i`m called";
	}
	friend void changeColor(RGB &rgbMember, int red, int green, int blue);
	void print() {
		cout << "r =" << m_red << " g = " << m_green << " b = " << m_blue << endl;
	}
};

void changeColor(RGB &rgbMember, int red, int green, int blue) {
	rgbMember.m_red = red;
	rgbMember.m_green = green;
	rgbMember.m_blue = blue;
}

int main() {
	RGB team(0, 127, 127);
	RGB *teal = &team;
	teal->print();
	changeColor(*teal, 10, 10, 10);
	
	teal = nullptr;
	team.print();
	changeColor(team, 15, 15, 15);
	team.print();
	delete teal;
	return 0;
}