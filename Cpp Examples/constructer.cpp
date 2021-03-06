/* 
1-Constructer yapıcı fonksiyondur
2-Sınıfın içerisinde değişkenlerin ilk değerler verilebilir.
3-Daima public altında bulunması lazım
4-Sınıf ile aynı isimde olmak zorundadır
5-Return değeri döndürmezler.
*/

#include<iostream>
using namespace std;

class Nokta {
private:
	int x, y;
public:
    Nokta(); //Constructer prototype tanımlandı
    Nokta(int, int);
	int getX();
	int getY();

	void setX(int);
	void setY(int);

	int DegerAta(int, int);
	void print();
};

Nokta::Nokta(){
    x = 0;
    y = 0;
}

Nokta::Nokta(int x, int y = 66){ //init value of y
    this->x = x;
    this->y = y;
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

    cout << b.getX() << "\t" << b.getY();
	return 0;
}

// eğer Nokta constructer'inin iki parametreside inited olsaydı
// program hangi Nokta fonksiyonunu çağıcağını bilemez ve hata veirirdi.
// Bu hatanın adıda "Function overloading" hatasıdır.