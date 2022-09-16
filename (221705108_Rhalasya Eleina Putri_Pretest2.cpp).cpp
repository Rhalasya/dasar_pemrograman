#include<iostream>
using namespace std;

int main(){
	
	int detik;
	float jam,menit;
	
	cout<<"Masukkan detik : ";
	cin>>detik;
	
	jam = detik/3600;
	menit = detik/60;
	
	cout<<detik<<" sama dengan "<<jam<<" jam atau "<<menit<<"menit";
	
	return 0;
}
