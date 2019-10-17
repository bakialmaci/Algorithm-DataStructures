#include<iostream>
using namespace  std;

class Printer {
    protected: //eğer private olsaydı inheritence class'tan erişemezdim
        string brand;
    public:
        // string brand;
        Printer(string brand) :brand(brand) {
            cout << "Printer Class" << endl;
        }
};

class Scanner {
    protected: //eğer private olsaydı inheritence class'tan erişemezdim
        string brand;
    public:
        // string brand;
        Scanner(string brand) :brand(brand) {
            cout << "Scanner Class" << endl;
        }
};

class ScannerPrinter :public Printer, public Scanner {
    public:
        ScannerPrinter(string brand1, string brand2) :Printer(brand1), Scanner(brand2) {
            cout << "Scanner and Printer" << endl;
            cout << Printer::brand << " " << Scanner::brand << endl;
        }
};

int main() {
	ScannerPrinter sp("HP", "MSI");
	return 0;
}