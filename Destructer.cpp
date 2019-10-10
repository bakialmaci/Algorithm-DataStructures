/*
1-Yıkıcı fonksiyon 1 tane olmak zorundadır.
2-Parametresiz olmak zorundadır
3-Pointer tanımlamalarında kullanılır.
4-Pointer için init değer olması yani yer alınması lazım.
Aksi takdirde delete metodu hata verecektir.
*/

#include<iostream>
using namespace std;

class Nokta {
private:
	int x, y;
public:
	int* z;
	Nokta(); //Constructer prototype tanımlandı
	Nokta(int, int);
	~Nokta();
	int getX();
	int getY();

	void setX(int);
	void setY(int);

	int DegerAta(int, int);
	void print();
};

Nokta::Nokta() {
	x = 0;
	y = 0;
	z = new int(5);
}

Nokta::Nokta(int x, int y = 66) { //init value of y
	this->x = x;
	this->y = y;
	z = new int(6);
}

Nokta::~Nokta() {
	cout << "Destructor has worked" << endl;
	delete z;
}

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
	Nokta b(5); // given initial values of variables b(5,11)

	cout << a.getX() << "\t" << a.getY() << endl;

	cout << b.getX() << "\t" << b.getY() << endl;
	return 0;
}
