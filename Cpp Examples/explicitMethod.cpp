#include<iostream>
using namespace std;

class Nokta{
    public:
    int x,y;
    int DegerAta(int,int);
    void print();
};


int Nokta::DegerAta(int _x, int _y){ // Class içindeki methodu taşıdık
    x = _x;                         // daha sade hale getirmek için class'ı
    y = _y;
    return (x,y);
}

void Nokta::print(){  // :: scope operatorü
    cout << "x" << x << endl;
}

int main(){
    Nokta a;
    cout << a.DegerAta(2,3);
    return 0;
}