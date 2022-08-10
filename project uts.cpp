//Project Uts

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
using namespace std;

main()
{
	system("color 8E");
	cout<<"#############################################"<<endl;
	cout<<"Nama : Ketut Manik Yogantara"<<endl;
	cout<<"NIM : 2115051073"<<endl;
	cout<<"Progdi : S1 Pendidikan Teknik Informatika"<<endl;
	cout<<"kelas :2A"<<endl;
	cout<<"#############################################"<<endl;
	cout<<"Program sistem pembayaran sederhana"<<endl;
	atas:

	cout<<endl;
	char lagi;
	int id,kilo1,kilo2,buah,butir, a=1000,b=3000,c=10000,d=2000,uang,nilai=0,nilai2=0;
	cout<<"============================================="<<endl;
	cout<<"*******ID Barang*******"<<endl;
	cout<<"Telur = 1"<<endl<<"gula = 2"<<endl<<"beras = 3"<<endl<<"mie goreng = 4"<<endl;
	cout<<"*****Harga Barang******"<<endl;
	cout<<"Telur (1 butir) = Rp.1.000"<<endl<<"gula (1 kg)= Rp. 3.000"<<endl<<"beras (1 kg)= Rp. 10.000"<<endl<<"mie goreng (1 buah)= Rp. 2.000"<<endl;
	cout<<"***********************"<<endl;
	cout<<"masukan id barang : ";
	cin>>id;
	
	if (id==1){
		cout<<"berapa butir = ";
		cin>>butir;
		nilai=a*butir;
		cout<<a<<" x "<<butir<<endl;
		cout<<"total = Rp."<<nilai;
	}
	
	if (id==2){
		cout<<"Berapa kg = ";
		cin>>kilo1;
		nilai=b*kilo1;
		cout<<b<<" x "<<kilo1<<endl;
		cout<<"total = Rp."<<nilai;
	}
	
	if (id==3){
		cout<<"berapa kg = ";
		cin>>kilo2;
		nilai=c*kilo2;
		cout<<c<<" x "<<kilo2<<endl;
		cout<<"total = Rp."<<nilai;
	}
	
	if (id==4){
		cout<<"berapa buah = ";
		cin>>buah;
		nilai=d*buah;
		cout<<d<<" x "<<buah<<endl;
		cout<<"total = Rp."<<nilai;
	}

	
	pay:
	cout<<endl;
	cout<<"masukan jumlah uang = Rp.";
	cin>>uang;
	if (uang >=nilai){
		nilai2= uang - nilai;
		cout<<"kembalian = Rp. "<<nilai2;	
		
	}
	else {
		cout<<"uang anda tidak cukup"<<endl;
		goto pay;
		
	}
	cout<<endl;
	cout<<"hitung lagi ? = [y/n]";
	lagi = getche();
	if (lagi == 'Y' || lagi =='y')
	goto atas;
	getch();
}
