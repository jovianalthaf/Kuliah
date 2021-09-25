#include <iostream>
#include <ctime>

using namespace std;
int main()

{
	time_t t;
	time (&t);
	
	char *current_time = ctime (&t);
	cout << "=================================\n";
	cout << "\n";
	cout << "Formulir Data Diri Mahasiswa\n";
	cout << current_time <<endl;
	string email;
	string nama;
	string nim;
	string tanggallahir;
	string jeniskelamin;
	string alamat;
	string notelp;
	cout << "=================================\n";
	cout << "\n";
	cout << "Input data dibawah\n";
	cout << "\n";
	cout << "Email     \t:";
	getline(cin,email);
	cout << "Nama      \t:";
	getline(cin,nama);
	cout << "NIM       \t:";
	getline(cin,nim);
	cout << "Tgl Lahir \t:";
	getline(cin,tanggallahir);
	cout << "Jenis Kelamin \t:";
	getline(cin,jeniskelamin);
	cout << "Alamat	    \t:";
	getline(cin,alamat);
	cout <<"No Telp     \t:";
	getline(cin,notelp);
	cout << "=================================\n";
	cout <<"\n\n\n";
	cout <<"TAMPILAN DATA\n";
	cout <<"Email      \t:"<<email;
	cout <<"\nNama     \t:"<<nama;
	cout <<"\nNIM      \t:"<<nim;
	cout <<"\nTgl Lahir \t:"<<tanggallahir;
	cout <<"\nJenis Kelamin \t:"<<jeniskelamin;
	cout <<"\nAlamat     \t:"<<alamat;
	cout <<"\nNoTelp     \t:"<<notelp;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}



