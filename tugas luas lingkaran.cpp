#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
main ()
{
	/*Deklarasi*/
	float PHI;
	float jari;
	float luas;
	PHI=3.14;
	
	
	/*Algoritma*/
	cout<< "=================================\n";
	cout<< "Program Menghitung Luas Lingkaran\n";
	cout<< "=================================\n";
	cout<<"\n";
	cout<<"Input Jari Jari Lingkaran =";
	cin>>jari;
	luas =PHI*jari*jari;
	cout<<"Luas Lingkaran Adalah "<<luas<<endl;
	
	
	getch();
	return 0;
	
	
}
