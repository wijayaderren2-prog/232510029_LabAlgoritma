#include <iostream>
using namespace std;

int main (){
	char kode;
	
	cout << "Masukan kode barang [A/B/C] = ";
	cin >> kode;
	
	switch(kode){
		case 'A':
			cout<<"Alat Olahraga";
			break;
		case 'B':
			cout<<"Alat Elektronik";
			break;
		case 'C':
			cout<<"Alat Masak";
			break;
		default:
			cout<<"Anda Salah Memasukan Kode";
			break;			
		}
		
	getchar();
}
