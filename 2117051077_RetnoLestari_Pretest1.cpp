#include <iostream>
using namespace std;
int main (){
	//input
	
	string nama_pendaftar;
	string nomor_hp_pendaftar;
	string alamat_pendaftar;
	string alasan_mendaftar;
	
	cout<<"Osamu Dazai";
	getline (cin,nama_pendaftar);
	cout<<"+917291828929";
	getline (cin,nomor_hp_pendaftar);
	cout<<"Isekai Pride";
	getline (cin,alamat_pendaftar);
	cout<<"Karena saya ingin menjadi husbu sejuta umat";
	getline (cin,alasan_mendaftar);
	
	//output
	cout <<"Nama pendaftar      = "<<nama_pendaftar<<endl;
	cout <<"Nomor hp pendaftar  = "<<nomor_hp_pendaftar<<endl;
	cout <<"Alamat pendaftar    =" <<alamat_pendaftar<<endl;
	cout <<"Alasan mendaftar    =" <<alasan_mendaftar<<endl;
	
	return 0;
}

