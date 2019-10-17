#include<iostream>
using namespace std;
class B; //prototype

class A {
private:
	int x;
public:
	int getX();
	void setX(int);
	friend void foo(A&);
	void setY(B&);
};

class B {
private:
	int y;
public:
	int getY();
	void setY(int);
	friend class A;
};

int A::getX() {
	return x;
}

void A::setX(int _x) {
	x = _x;
}

void foo(A& a) { //foo fonksiyou A sınıfına ait değildir.
	a.x = 0;
}

int B::getY() {
	return y;
}

void B::setY(int _y) {
	y = _y;
}

void A::setY(B& y) { //foo fonksiyou A sınıfına ait değildir.
	y.y = 100;
}

int main() {
	A n;
	n.setX(5);
	cout << n.getX() << endl;
	foo(n);
	cout << n.getX() << endl;
	B b;
	b.setY(50);
	cout << b.getY() << endl;
	return 0;
}