#include <iostream>
#include <string>

using namespace std;

const int MAX = 10;

class Queue {
private:
    string data[MAX];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == MAX - 1;
    }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Antrian penuh!\n";
        } else {
            if (isEmpty()) {
                front = 0;
            }
            rear++;
            data[rear] = nama;
            cout << nama << " berhasil masuk ke antrian.\n";
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong!\n";
        } else {
            cout << data[front] << " selesai dilayani.\n";

            if (front == rear) {
                front = rear = -1;
            } else {
                front++;
            }
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Antrian kosong.\n";
        } else {
            cout << "Antrian terdepan : " << data[front] << endl;
        }
    }

    void size() {
        if (isEmpty()) {
            cout << "Jumlah antrian : 0\n";
        } else {
            cout << "Jumlah antrian : " << rear - front + 1 << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Antrian kosong.\n";
        } else {
            cout << "\nDaftar Antrian\n";
            for (int i = front; i <= rear; i++) {
                cout << i - front + 1 << ". " << data[i] << endl;
            }
        }
    }
};

int main() {

    Queue q;

    int pilih;
    string nama;

    do {

        cout << "\n===== SISTEM ANTREAN LAYANAN PUBLIK =====\n";
        cout << "1. Ambil Nomor Antrean\n";
        cout << "2. Panggil Antrean\n";
        cout << "3. Lihat Antrean Terdepan\n";
        cout << "4. Jumlah Antrean\n";
        cout << "5. Tampilkan Semua Antrean\n";
        cout << "6. Cek Antrian Kosong\n";
        cout << "7. Cek Antrian Penuh\n";
        cout << "0. Keluar\n";
        cout << "Pilih : ";
        cin >> pilih;
        cin.ignore();

        switch(pilih){

        case 1:
            cout << "Masukkan Nama : ";
            getline(cin,nama);
            q.enqueue(nama);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.size();
            break;

        case 5:
            q.display();
            break;

        case 6:
            if(q.isEmpty())
                cout<<"Antrian kosong.\n";
            else
                cout<<"Masih ada antrian.\n";
            break;

        case 7:
            if(q.isFull())
                cout<<"Antrian penuh.\n";
            else
                cout<<"Antrian belum penuh.\n";
            break;

        case 0:
            cout<<"Program selesai.\n";
            break;

        default:
            cout<<"Pilihan tidak tersedia.\n";
        }

    }while(pilih!=0);

    return 0;
}
