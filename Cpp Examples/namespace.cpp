#include<iostream>
using namespace std;

namespace space1 {
	int x = 10;

	void foo() {
		int x = 20;
		cout << x << endl;
	}
}


namespace space2 {
	int x = 11;

	void foo() {
		int x = 30;
		cout << x << endl;
	}
}

int main() {
	space1::foo();
	cout << space1::x << endl;
	cout << space2::x << endl;
	return 0;
}