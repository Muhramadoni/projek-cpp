#include <stdio.h>
#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;
int main()
{
    char lagi, nama_pinjam[30], kode_buku[4];
    string bulan,judul_buku, pengarang;
    int jumlah_data,lama_pinjam, harga, denda, total_bayar;

    cout << "KONOHA LIBRARY" << endl;
    cout << "Jl. Kalibata Timur No. 37 Telp (021)7901074 " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Masukkan Bulan: "; cin >> bulan;
    cout << "Masukkan Nama Peminjam :"; cin >> nama_pinjam;
    cout << "Masukkan Jumlah Data: "; cin >> jumlah_data;

    for (int i = 0; i < jumlah_data; ++i)
    {
        cout << " Data Ke-" << i + 1 << endl;
        cout << "   Kode Buku   : "; cin >> kode_buku;

        if (strcmp(kode_buku, "AADC") == 0)
        {
            judul_buku = "Ada Apa Dengan Cinta";
            pengarang = "Mira Lesmana";
            harga = 3000;
        }
        else if (strcmp(kode_buku, "AAC") == 0) 
        {
            judul_buku = "Ayat-Ayat Cinta";
            pengarang = "Kang Abik";
            harga = 3500;
        }
        else if (strcmp(kode_buku, "EIL") == 0)
        {
            judul_buku = "Eiffel I'm In Love";
            pengarang = "Nia Dinata";
            harga = 4000;
        }
        else
        {
            cout << "Anda Salah Kode" << endl;
            return 1;
        }

        cout << "|Judul       : " << judul_buku << endl;
        cout << "|Pengarang   : " << pengarang << endl;
        cout << "|Lama Pinjam : ";
        cin >> lama_pinjam;

        if (lama_pinjam > 7)
            denda = 10000;
        else
            denda = 0;

        total_bayar = (harga + denda);
    }

        cout << "|=========================================================================|" << endl;
        cout << "| No. |  Kode  |         Judul        | Pengarang |  Lama  |  Denda  |  Total  |" << endl;
        cout << "|     |  Buku  |         Buku         |           | Pinjam |         |         |" << endl;
        cout << "|=========================================================================|" << endl;

    for (int i = 0; i < jumlah_data; ++i)
    {
        cout << "| " << i + 1 << "   |  " << kode_buku << "  | " << judul_buku << " | "
        << pengarang << " |      " << lama_pinjam << "      |    " << denda << "    |    "<< harga + denda << "    |" << endl;
    }

        cout << "-----------------------------------------------------" << endl;
        cout << "Total Bayar = RP." << total_bayar << endl;
        cout << " Mau Input data lagi [Y/T] = "; cin >> lagi;
        if (lagi == 'T' || lagi == 't')

    getch();
}