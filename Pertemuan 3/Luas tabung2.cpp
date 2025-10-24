#include <iostream>
#include <iomanip> // untuk setprecision

using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double r, t;

    // Input
    cout << "=== Menghitung Luas Lingkaran dan Volume Tabung ===\n";
    cout << "Masukkan jari-jari lingkaran (r): ";
    cin >> r;
    cout << "Masukkan tinggi tabung (t): ";
    cin >> t;

    // Perhitungan langkah demi langkah
    cout << "\nLangkah-langkah perhitungan\n";

    // Luas Lingkaran
    cout << "\n// Luas Lingkaran\n";
    cout << "1. Rumus luas lingkaran: L = PI * r^2\n";
    cout << "2. Substitusi: L = " << PI << " * " << r << "^2\n";
    double luas = PI * r * r;
    cout << "3. Hitung: L = " << PI << " * " << (r * r) << "\n";
    cout << "4. Hasil: L = " << luas << "\n";

    // Volume Tabung
    cout << "\n// Volume Tabung\n";
    cout << "1. Rumus volume tabung: V = L * t\n";
    cout << "2. Substitusi: V = " << luas << " * " << t << "\n";
    double volume = luas * t;
    cout << "3. Hitung: V = " << luas << " * " << t << "\n";
    cout << "4. Hasil: V = " << volume << "\n";

    // Output akhir
    cout << "\n=== Hasil Akhir ===\n";
    cout << fixed << setprecision(4);
    cout << "Luas Lingkaran = " << luas << "\n";
    cout << "Volume Tabung  = " << volume << "\n";

    return 0;
}

