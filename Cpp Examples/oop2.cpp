#include <iostream>
using namespace std;

class Nokta {
public:
	int x, y;
	int multiply(int _x, int _y) {
		x = _x;
		y = _y;
		return x * y;
	}

	void print() {
		cout << "Result: " << multiply(x,y) << endl;
	}
};

int main() {
	Nokta n;
	Nokta n2;
	Nokta* n3;
	n3 = &n2;

    Nokta* pArr;
	pArr = new Nokta[10];
    
	n.multiply(2, 7);
	n.print();
	n3->multiply(3, 5);
	n3->print();
	return 0;
}