#include <iostream>
using namespace std;

int main() {
	int a = 5;
	
	// increment dan decrrement
	cout << "Nilai awal a = " << a << endl;
	
	// pre-increment : a ditambah dulu, jadi 6, lalu ditampilkan
	cout << "Pre-increment - > ++a ="  << ++ a << endl;
	
	// a = 6
	
	//post=increment : nilai lama a=6 ditampilkan dulu, lalu a jadi 7
	cout << "Post-increment -> a++ + " << a++ << ", Sekarang a ="  << a << endl;
	
	// a = 7
	
	//pre-decrement : a dikurangi dulu, jadi 6, lalu di tampilkan
	cout << "Pre-decrement -> --a + " << --a << endl;
	
	// a = 6
	
	//post-decrement : nilai lama a=6 ditampilkan dulu, lalu a jadi 5
	cout << "Post-decrement -> a-- "  << a-- << ", Sekarang a = " << a << endl;
	
	return 0; 
}
