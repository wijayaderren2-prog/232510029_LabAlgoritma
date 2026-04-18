#include <iostream> // Untuk mengaktifkan input/output streams seperti cout dan endl

using namespace std; // Menggunakan namespace standar agar tidak perlu menulis std:: berulang kali

// Definisi kelas bernama 'contoh'
class contoh {
private:
    int nilai; // Anggota data privat untuk menyimpan sebuah nilai integer

public:
    // Ini adalah CONSTRUCTOR.
    // Memiliki nama yang sama dengan kelas ('contoh').
    // Tidak memiliki tipe kembalian (bahkan void).
    // Digunakan untuk menginisialisasi objek dari kelas ini.
    contoh (int n) { // Constructor yang menerima satu argumen integer (n)
        nilai = n;  // Menginisialisasi anggota data 'nilai' dengan nilai 'n' yang diberikan
    }

    // Fungsi anggota publik untuk mendapatkan nilai dari 'nilai'
    int getNum() {
        return nilai; // Mengembalikan nilai yang disimpan dalam anggota data 'nilai'
    }
}; // Jangan lupa titik koma setelah definisi kelas

// Fungsi utama program
int main() {
    // Membuat objek dari kelas 'contoh' bernama 'obj'.
    // Angka 10 diteruskan sebagai argumen ke constructor 'contoh'.
    // Ini secara otomatis memanggil constructor 'contoh(int n)'.
    contoh obj(10); 

    // Mencetak teks dan nilai yang disimpan dalam objek 'obj' melalui metode 'getNum()'.
    cout << "nilai yang diinput: " << obj.getNum() << endl;

    return 0; // Menandakan bahwa program berakhir dengan sukses
}

