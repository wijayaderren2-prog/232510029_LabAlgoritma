#include <iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout<<"Masukan Bilangan A =";
	cin>>a;
	
	cout<<"Masukan Bilangan B = ";
	cin>>b;
	
	if (a>b){
		cout << "Hasil A - B = " << a-b << endl;	
	}else if (a<b){
			cout << "Hasil B - A = " << b-a << endl;
	}else if (a==b){
			cout << "Hasil B + A = " <<b+a << endl;
	}
	return 0;
}
