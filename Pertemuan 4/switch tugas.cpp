#include <iostream>
using namespace std;

int main() {
    string nama;
    float nilai1, nilai2, nilai3, rata;
    int kategori;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    cout << "Nama Siswa: ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I: ";
    cin >> nilai1;
    cout << "Nilai Pertandingan II: ";
    cin >> nilai2;
    cout << "Nilai Pertandingan III: ";
    cin >> nilai3;

    rata = (nilai1 + nilai2 + nilai3) / 3;
    
    if (rata >= 85) {
        kategori = 1;
    } else if (rata >= 70) {
        kategori = 2;
    } else {
        kategori = 3;
    }

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata << " dari hasil perlombaan yang diikutinya." << endl;

    switch (kategori) {
        case 1:
            cout << "Hadiah yang didapat adalah Komputer Core i5." << endl;
            break;
        case 2:
            cout << "Hadiah yang didapat adalah Uang sebesar Rp. 2.500.000." << endl;
            break;
        case 3:
            cout << "Hadiah yang didapat adalah Hiburan." << endl;
            break;
        default:
            cout << "Kategori tidak valid." << endl;
            break;
    }

    return 0;
}
