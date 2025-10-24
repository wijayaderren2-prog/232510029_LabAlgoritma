#include <iostream> // library dasar pemrograman c++
using namespace std; // cout dan cin dipermudah tanpa perlu std
int main(){
    //inialisasi variabel
    // deklarasi variabel x,lalu masukkan nilai 50 ke dalam variabel x
    int x=50;

    int a,b,c,d,e; // deklarasai variabel a,b,c,d,e
    //proses
    a = x > 5 + 5; // inisialisasi variabel a dengan pernyataan nilai x lebih dari 5 + 5
    b = x > 100;   // inisialisasi variabel b dengan pernyataan nilai x lebih dari 100
    c = a && b;     // inisialisasi variabel a dengan pernyataan a dan b itu dua duanya benar
    d = a || b;     // inisialisasi variabel a dengan pernyataan salah satu dari a dan b benar
    e = ! (c);      // inisialisasi variabel e dengan pernyataan nilai c berkebalikan fakta
    // output berupa 1 (benar) dan 0 (salah)
    cout<<"\nNilai a = x > 5 + 5 = "<<a<<endl; //Outputnya Nilai a = x > 5 + 5 = 1 jawabannya benar, karena 50 > 10
    cout<<"\nNilai b = x > 100 = "<<b<<endl; //Outputnya Nilai b = x > 100 = 0,artinya salah karena 50 itu seharusnya kurang dari 100
    cout<<"\nNilai c = a && b = "<<c<<endl; //Outputnya Nilai c = a && b = 0,artinya salah karena salah satu statementnya salah yaitu statement dari varaibel b
    cout<<"\nNilai d = a || b = "<<d<<endl; //Outputnya Nilai d = a || b = 1,artinay benar karena salah satu statementnya benar yaitu statement dari variabel a
    cout<<"\nNilai e = ! (c) = "<<e<<endl; //Outputnya Nilai e = ! (c) = 1,artinya benar karena statement c akan dibuat kebalikannya di variabel a dan pernyatan c itu salah tapi dibalikkan dengan ! jadi benar
    getchar(); //untuk membaca karakter dari standar input dan mengembalikan nilainya ke program
}
