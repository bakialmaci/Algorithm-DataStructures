/*
Ana sınıfın taban sınıfı ezmemesi için "virtual" yapısı kullandık.
Aksi takdirde array[1]->voice(); satırı yine "Meow" bastıracaktı.

Çalışma mantığı:
    Ramde ikitane yer ayırır bir tanesi kediye ait bir tanedi aslana
    daha sonra kedi sınıfının yani anasınıfın bulunduğu kısma bir 
    virtualize poniter'ı koyar. bu sınıflardan biri çağrıldığı zaman
    bu vptr sayesinde hangi sınıfın fonksyionun çağrıldığı anlaşılır.
    vptr üzerinde inheritence sınıfa ait adress yazılıdır. bu sayede
    addressler üzerinden kolayla atlama yapabilir.Bu sayede classlar
    arası "overriding" olayının önüne geçilmeye çalışılır.
*/

#include<iostream>
using namespace std;

class Cat {
public:
	virtual void voice() { // Virtualization ile overriding'den kurtulduk
		cout << "Meow" << endl;
	}
};

class Lion :public Cat {
public:
	void voice() {
		cout << "Roar" << endl;
	}
};

int main() {
	Cat c;
	Lion l;
	c.voice();
	l.voice();
	cout << endl;
	Cat* array[2];
	array[0] = &c;
	array[1] = &l;

	array[0]->voice();
	array[1]->voice();
	return 0;
}