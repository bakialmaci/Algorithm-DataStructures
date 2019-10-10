#include <iostream>
using namespace std;

int swap(int*);

int main(){
	int a = 1;
	cout << swap(&a) << endl;
	return 0;
}

int swap(int* n1) {
	return ++*n1;
}

// 2