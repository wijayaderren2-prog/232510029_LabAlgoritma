#include <iostream>
#include <iomanip> // untuk setprecision

using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double radius, height;

    // Input jari-jari
    cout << "Masukkan jari-jari (radius) lingkaran (mis. 2.5): ";
    cin >> radius;
    if (radius < 0) {
        cerr << "Radius tidak boleh negatif.\n";
        return 1;
    }

    // Input tinggi tabung
    cout << "Masukkan tinggi tabung (mis. 5.0): ";
    cin >> height;
    if (height < 0) {
        cerr << "Tinggi tidak boleh negatif.\n";
        return 1;
    }

    // Perhitungan
    double luas_lingkaran = PI * radius * radius;      // pr²
    double volume_tabung = luas_lingkaran * height;    // pr²h

    // Output dengan 4 angka di belakang koma
    cout << fixed << setprecision(4);
    cout << "Luas lingkaran = " << luas_lingkaran << "\n";
    cout << "Volume tabung  = " << volume_tabung << "\n";

    return 0;
}

