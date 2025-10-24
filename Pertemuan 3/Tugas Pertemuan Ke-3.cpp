#include <iostream>
using namespace std;

const double PI = 3.14;

double hitungLuasLingkaran(double r) {
    return PI * r * r;
}

double hitungDiameterLingkaran(double r) { // perbaiki huruf besar kecil
    return 2 * r;
}

int main() {
    double jariJari;

    cout << "PROGRAM MENGHITUNG LINGKARAN" << endl;
    cout << "Masukkan jari-jari lingkaran (r): ";
    cin >> jariJari;

    // perhitungan
    double diameter = hitungDiameterLingkaran(jariJari);
    double luas = hitungLuasLingkaran(jariJari);

    // output hasil
    cout << "\nHasil Perhitungan" << endl;
    cout << "Jari-jari (r) = " << jariJari << " cm" << endl;
    cout << "Diameter (d)  = " << diameter << " cm" << endl;
    cout << "Luas (A)      = " << luas << " cm^2" << endl;

    cout << "\nRumus: A = PI * r * r" << endl;
    cout << "       = " << PI << " * " << jariJari << " * " << jariJari << endl;
    cout << "       = " << luas << " cm^2" << endl;

    return 0;
}

