#include <iostream>
using namespace std;

int main() 
{
	int a, b, c = 0, d=0;
	
	cout << "Operasi Perkalian" << endl;
	cout << "Masukan Nilai A = ";
	cin >> a;
	
	cout << "Masukan nilai B = ";
	cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "Hasil dari C = A % B = " << c << endl ;
	cout << "Hasil dari D = A * B = " << d;
	
	getchar ();
}
