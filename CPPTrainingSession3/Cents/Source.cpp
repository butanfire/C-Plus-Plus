using namespace std;
#include <iostream>

class Cents {
private:
	int m_cents;
public:
	Cents(int cents) : m_cents(cents)
	{}
	Cents()
	{}
	int GetCents() {
		return m_cents;
	}
	Cents operator+(int a);
	friend ostream& operator<< (ostream &out, Cents &centA);
	friend istream& operator>> (istream &out, Cents &centA);
	friend bool operator==(Cents &centA, Cents &centB);
	friend bool operator!=(Cents &centA, Cents &centB);
	static Cents AddCents(Cents &centA, Cents &centB);
};

Cents Cents::AddCents(Cents &centA, Cents &centB) {
	return Cents(centA.GetCents() + centB.GetCents());
}
Cents Cents::operator+(int a)
{
	return Cents(m_cents + a);
}
bool operator==(Cents &centA, Cents &centB) {
	return centA.m_cents == centB.m_cents;
}
bool operator!=(Cents &centA, Cents &centB) {
	return !(centA.m_cents == centB.m_cents);
}

istream& operator>> (istream &in, Cents &centA) {
	in >> centA.m_cents;
	return in;
}

ostream& operator<<(ostream &out, Cents &centA)
{
	out << "cents : " << centA.m_cents << endl;
	return out;
}

int main() {
	cout << "Please enter your cents :" << endl;
	Cents a;
	cin >> a;
	cout << a;
	Cents centA(16);
	Cents centB(15);
	cout << (centA + 10) << endl;
	cout << (centA + centB.GetCents()) << endl;
	cout << (a == centA) ? "true" : "false";
	cout << (centA != centB) ? "true" : "false";
}