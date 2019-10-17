#include<iostream>
using namespace std;

class Insan {
protected:
	string tc;
	string isim;
	string soyisim;
public:
	Insan(string tc = "",string isim = "",string soyisim = ""):tc(tc),isim(isim),soyisim(soyisim){

    }
	string getTc() { return tc; }
	string getIsim() { return isim; }
	string getSoyisim() { return soyisim; }

	void setTc(string tc) { this->tc = tc; }
	void setIsim(string isim) { this->isim = isim; }
	void setSoyisim(string soyisim) { this->soyisim = soyisim; }
};

class student:public Insan{ // This is an inheritence class
    private:
        string no;
    public:
        student(string no = "",string tc = "",string isim = "",string soyisim = ""):no(no),Insan(tc,isim,soyisim){
        
        }
        void setNo(string no){this->no = no;}
        string getNo(){return no;}
};

int main() {
    Insan baki("1234","baki","almaci");
    cout << baki.getIsim() << endl;
    student ogr("21627983","123214565789","Muhammed Baki","Almaci");
    cout << ogr.getNo() << " " << ogr.getTc() << " " << ogr.getIsim() << " " << ogr.getSoyisim() << endl;
	return 0;
}