#include<iostream>
using namespace std;

class Nokta {
private:
	int x, y;
public:
	int getX();
	int getY();

	void setX(int);
	void setY(int);

	int DegerAta(int, int);
	void print();
};

int Nokta::getX() {
	return x;
}

int Nokta::getY() {
	return y;
}

void Nokta::setX(int x) {
	if (x > 5)
		this->x = x;
	else
		this->x = 0;
}

void Nokta::setY(int y) {
	if (y > 5)
		this->y = y;
	else
		this->y = 0;
}


int Nokta::DegerAta(int _x, int _y) { // Class içindeki methodu taşıdık
	x = _x;                         // daha sade hale getirmek için class'ı
	y = _y;
	return (x, y);
}

void Nokta::print() {  // :: scope operatorü
	cout << "x" << x << endl;
}

int main() {
	Nokta a;
	a.setX(0);
	a.setY(11);
	cout << a.getX() << "\t" << a.getY();
	return 0;
}