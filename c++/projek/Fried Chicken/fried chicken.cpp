#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
 char kode[100],jenis[30][100];
 int i,banyakpotong[100],banyakjenis,Harga[100],jumlahharga[100],jumlahbayar,totbay;
 float pajak;

 // Menampilkan menu jenis potong
    cout << "|-------------------------------------------|" << endl;
    cout << "|          Gerobak Fried Chicken            |" << endl;
    cout << "|-------------------------------------------|" << endl;
    cout << "| Kode             Jenis              Harga |" << endl;
    cout << "|-------------------------------------------|" << endl;
    cout << "| D                 Dada               2500 |" << endl;
    cout << "| P                 Paha               2000 |" << endl;
    cout << "| S                 Sayap              1500 |" << endl;
    cout << "|-------------------------------------------|" << endl;
    cout << "Banyak Jenis : "; cin>>banyakjenis;

 if(banyakjenis<=3)
 {

 	for(i=1;i<=banyakjenis;i++)
   {
    cout<<"Jenis ke - "<<i<<endl;
    cout<<"Kode Potong [D/P/S] : "; cin>>kode[i];

    if(kode[i]=='D'||kode[i]=='d')
     {
      strcpy(jenis[i],"Dada");
      Harga[i]=2500;
     }
    else if(kode[i]=='P'||kode[i]=='p')
     {
      strcpy(jenis[i],"Paha");
      Harga[i]=2000;
     }
    else if(kode[i]=='S'||kode[i]=='s')
     {
      strcpy(jenis[i],"Sayap");
      Harga[i]=1500;
     }
    else
     {
      strcpy(jenis[i]," - ");
      Harga[i]=0;
     }
    cout<<"Banyak Potong       : "; cin>>banyakpotong[i];
    cout<<endl;
   }

 clrscr();

 cout<<"------------------------------------"<<endl;
 cout<<"No.  Jenis   Harga   Banyak   Jumlah"<<endl;
 cout<<"     Potong  Satuan  Potong   Harga"<<endl;
 cout<<"------------------------------------"<<endl;

 jumlahbayar = 0;

 for(i=1;i<=banyakjenis;i++)

  {
   cout << setiosflags(ios::left) <<setw(6) << i;
   cout << setiosflags(ios::left) <<setw(8) << jenis[i];
   cout << setiosflags(ios::left) <<setw(10) << Harga[i];
   cout << setiosflags(ios::left) <<setw(7) << banyakpotong[i];

   jumlahharga[i] = Harga[i] * banyakpotong[i];

   cout << setiosflags(ios::right) << setw(5) << jumlahharga[i];
   cout <<endl;
   jumlahbayar = jumlahbayar + jumlahharga[i];
  }
 cout<<"------------------------------------"<<endl;

 cout << setiosflags(ios::right) << setw(1) << "Jumlah Bayar : ";
 cout << setiosflags(ios::right) << setw(2) << jumlahbayar<<endl;

 pajak = (10/(float)100) * jumlahbayar;

 cout << setiosflags(ios::right)<< setw(1) << "Pajak : ";
 cout << setiosflags(ios::right)<< setw(2) << pajak <<endl;

 totbay = jumlahbayar - pajak;

 cout << setiosflags(ios::right) << setw(1) << "Total Bayar : ";
 cout << setiosflags(ios::right) << setw(2) << totbay << endl;

 getch();
  }
}