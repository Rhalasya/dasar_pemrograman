#include<iostream>
using namespace std;

int main(){
	string nama, umur, harapan;
	
	cout<<"Nama :";
	getline(cin,nama);
	
	cout<<"Umur :";
	cin>>umur;
	cin.ignore(1,'\n');
	
	cout<<"Harapan :";
	getline(cin,harapan);
	
	cout<<"Happy Birthday buat "<<nama<<"selamat bertambah umur yang ke "<<umur<<"."<<harapan;
	
	return 0;
}
