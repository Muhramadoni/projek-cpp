#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	char lagi,nama_pemesan[50],nama_makanan;
	int pilihan,harga,kembalian,total,jumlah;

	atas:
	
	system("cls");
	cout<<"***MENU MAKANAN***"<<endl;		
	cout<<"================================================"<<endl;	
	cout<<"menu makanan"<<endl;
	cout<<"1.hamburger"<<endl;
	cout<<"2.pecel lele"<<endl;
	cout<<"3.ayam penyet"<<endl;
	cout<<"4.spaghetti"<<endl;
	cout<<"5.chicken katsu"<<endl;
	cout<<"================================================"<<endl;
	
	cout<<"nama pemesan                   : ";cin>>nama_pemesan;
	gets(nama_pemesan);
	cout<<"pilih menu makanan [1/2/3/4/5] : " ;cin>>pilihan;
	cout<<"Nama Makanan                   : "<<nama_makanan;
		
	
	if(pilihan == 1)
	{
		cout<<"hamburger"<<endl;
		harga = 45000;
	}
	else if(pilihan == 2)
	{
		cout<<"pecel lele"<<endl;
		harga = 28000;
	}
	else if(pilihan == 3)
	{
		cout<<"ayam penyet"<<endl;
		harga = 35000;
	}
	else if(pilihan == 4)
	{
		cout<<"spaghetti"<<endl;
		harga = 45000;
	}
	else if(pilihan == 5)
	{
		cout<<"chicken katsu"<<endl;
		harga = 32000;
	}	
		
		kembalian = total - harga;
		
		cout<<"harga makanan                  : "<<harga<<endl;	
		cout<<"jumlah uang                    : ";cin>>jumlah;
		cout<<"kembalian                      : "<<kembalian;
					
	//output
	cout<<endl;
	cout<<"APAKAH ANDA INGIN INPUT LAGI [Y/T] : " ;cin>>lagi;
	if(lagi == 'Y'||lagi == 'y')
	{
		goto atas;
	}
	if(lagi == 'T'||lagi == 't')
	{
		goto selesai;
	}
	
	selesai:
		
	cout<<"***TERIMAKASIH KARENA SUDAH MEMESAN***"<<endl;
	
	getch();
	
}