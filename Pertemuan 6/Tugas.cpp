#include <iostream>
using namespace std;

class Elektronik {
protected:
    string merk;
    int daya;

public:
    Elektronik(string m, int d) {
        merk = m;
        daya = d;
    }

    virtual void tampilkan() = 0;
};

class TV : public Elektronik {
private:
    int layar;
    string resolusi;

public:
    TV(string m, int d, int l, string r)
        : Elektronik(m, d) {
        layar = l;
        resolusi = r;
    }

    void tampilkan() {
        cout << "[TV] " << merk << " ditampilkan!" << endl;
        cout << "Merk      : " << merk << endl;
        cout << "Daya      : " << daya << " Watt" << endl;
        cout << "Layar     : " << layar << " inch" << endl;
        cout << "Resolusi  : " << resolusi << endl;
    }
};

class Laptop : public Elektronik {
private:
    string processor;
    string ram;

public:
    Laptop(string m, int d, string p, string r)
        : Elektronik(m, d) {
        processor = p;
        ram = r;
    }

    void tampilkan() {
        cout << "[Laptop] " << merk << " ditampilkan!" << endl;
        cout << "Merk      : " << merk << endl;
        cout << "Daya      : " << daya << " Watt" << endl;
        cout << "Processor : " << processor << endl;
        cout << "RAM       : " << ram << endl;
    }
};

int main() {

    TV tv("Samsung", 150, 43, "Full HD");
    Laptop laptop("Asus", 65, "Intel i5", "8 GB");

    tv.tampilkan();

    cout << endl;

    laptop.tampilkan();

    return 0;
}
