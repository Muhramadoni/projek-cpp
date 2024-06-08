#include <iostream>
#include <string>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() 
{
    char lagi, nama_pinjam[30], kode_buku[4];
    string bulan,judul_buku, pengarang;
    int jumlah_data,lama_pinjam, harga, denda, total_bayar;

    cout << "\t\t KONOHA LIBRARY" << endl;
    cout << " Jl. Kalibata Timur No. 37 Telp (021)7901074 " << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Masukkan Bulan: ";
    cin >> bulan;
    cout << "Masukkan Nama Peminjam :"; cin >> nama_pinjam;
    cout << "Masukkan Jumlah Data: ";
    cin >> jumlah_data;

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
            continue;
        }

        cout << "|Judul       : " << judul_buku << endl;
        cout << "|Pengarang   : " << pengarang << endl;
        cout << "|Lama Pinjam : ";
        cin >> lama_pinjam;

        if (lama_pinjam > 7)
            denda = 1000;
        else
            denda = 0;

    }

        cout << "\t\t KONOHA LIBRARY" << endl;
        cout << " Jl. Kalibata Timur No. 37 Telp (021)7901074 " << endl;
        cout << "Bulan :" << bulan << endl;
        cout << "Nama Peminjam :" << nama_pinjam << endl;
        
        total_bayar = harga + denda;
        cout << "Total Bayar: " << total_bayar << endl;
        
        cout << " Mau Input Data Lagi [Y/T]? ";
        cin >> lagi;

        if (lagi == 'T' || lagi == 't')
            

    return 0;
}