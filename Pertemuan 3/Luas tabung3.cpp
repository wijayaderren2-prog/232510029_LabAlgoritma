#include <iostream>
#include <iomanip> // untuk setprecision

using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double r, t;

    cout << "=== Menghitung Luas Lingkaran dan Volume Tabung ===\n";
    cout << "Masukkan jari-jari lingkaran (r): ";
    cin >> r;
    cout << "Masukkan tinggi tabung (t): ";
    cin >> t;

    // Hitung luas lingkaran dan volume tabung
    double luas = PI * r * r;
    double volume = luas * t;

    // Tampilkan hasil
    cout << fixed << setprecision(4);
    cout << "\n=== Hasil Perhitungan ===\n";
    cout << "Luas Lingkaran = " << luas << "\n";
    cout << "Volume Tabung  = " << volume << "\n";

    return 0;
}

