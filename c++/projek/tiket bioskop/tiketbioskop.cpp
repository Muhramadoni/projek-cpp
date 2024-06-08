// Program: Projek 4 - Membuat Program Tiket Bioskop
// Penulis: Muhammad Ramadoni
// Tanggal: 3/12/2023
// Waktu  : 12:42 - 

#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()
{
    char baris, hari;
    int pilihan, jumlah_pembelian, total_bayar, uang_bayar, kembalian,kursi;
    int harga_biasa[5] = {0}, harga_weekend[5] = {0};
    string nama_films[] = {"Avengers:Infinity War", "Kingdom", "Back To The Future", "Avatar", "Titanic"};

    cout << "|==================================================|" << endl;
    cout << "|                   Daftar Film                    |" << endl;
    cout << "|              yang tayang tahun ini               |" << endl;
    cout << "|==================================================|" << endl;
    cout << "| No.|       Nama Film       |     harga tiket     |" << endl;
    cout << "|    |                       |     Biasa/week      |" << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << "| 1. | Avengers:Infinity War | RP.25.000/RP.30.000 |" << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << "| 2. |        Kingdom        | RP.25.000/RP.30.000 |" << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << "| 3. | Back To The Future    | RP.25.000/RP.30.000 |" << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << "| 4. |         Avatar        | RP.25.000/RP.30.000 |" << endl;
    cout << "|--------------------------------------------------|" << endl;
    cout << "| 5. |        Titanic        | RP.25.000/RP.30.000 |" << endl;
    cout << "|--------------------------------------------------|" << endl;

    cout << "Pilih Film Yang Akan Anda Tonton [1/2/3/4/5] : ";
    
    cin >> pilihan;

    string nama_film = nama_films[pilihan - 1];
    cout << "Nama Film : " << nama_film << endl;

    cout << "|========================|" << endl;
    cout << "| A1 | A2 | A3 | A4 | A5 |" << endl;
    cout << "|------------------------|" << endl;
    cout << "| B1 | B2 | B3 | B4 | B5 |" << endl;
    cout << "|------------------------|" << endl;
    cout << "| C1 | C2 | C3 | C4 | C5 |" << endl;
    cout << "|------------------------|" << endl;
    cout << "| E1 | E2 | E3 | E4 | E5 |" << endl;
    cout << "|------------------------|" << endl;
    cout << "| D1 | D2 | D3 | D4 | D5 |" << endl;
    cout << "|========================|" << endl;

    cout << "Pilih Baris (A/B/C/D/E): ";
    cin >> baris;
    cout << "Pilih Nomor Kursi (1/2/3/4/5): ";
    cin >> kursi;

    cout << "Masukkan Hari (B/W:biasa/Weekend): ";
    cin >> hari;

    switch (pilihan)
    {
    case 1:
        if (hari == 'B'|| hari == 'b')
            harga_biasa[1] = 25000;
        else if (hari == 'W' || hari == 'w')
            harga_weekend[1] =30000;
        break;
        
    case 2:
        if (hari == 'B' || hari == 'b')
            harga_biasa[2] = 25000;
        else if (hari == 'W' || hari == 'w')
            harga_weekend[2] = 30000;
        break;
            
    case 3:
        if (hari == 'B' || hari == 'b')
            harga_biasa[3] = 25000;
        else if (hari == 'W' || hari == 'w')
            harga_weekend[3] = 30000;
        break;

    case 4:
        if (hari == 'B' || hari == 'b')
            harga_biasa[4] = 25000;
        else if (hari == 'W' || hari == 'w')
            harga_weekend[4] = 30000;
        break;

    case 5:
        if (hari == 'B' || hari == 'b')
            harga_biasa[5] = 25000;
        else if (hari == 'W' || hari == 'w')
            harga_weekend[5] = 30000;
        break;

    default:
        cout << "Pilihan tidak valid" << endl;
        return 1;
    }

    cout << "jumlah pembelian :";
    cin >> jumlah_pembelian;

    if (hari == 'B' || hari == 'b')
        total_bayar = jumlah_pembelian * harga_biasa[kursi];
    else if (hari == 'W' || hari == 'w')
        total_bayar = jumlah_pembelian * harga_weekend[kursi];

    cout << "Total Bayar : Rp." << total_bayar << endl;

    cout << "Uang Bayar  : Rp."; cin >> uang_bayar;

    kembalian = uang_bayar - total_bayar;
    cout << "kembalian   : Rp." << kembalian << endl;

    cout << endl;
    cout << "|===================================|" << endl;
    cout << "|           XXI JAKARTA             |" << endl;
    cout << "|===================================|" << endl;
    cout << "|Nama Film   : " << setw(20) << left << nama_film << "|" << endl;
    cout << "|Baris Kursi : " << setw(21) << left << baris << "|" << endl;
    cout << "|Nomor Kursi : " << setw(21) << left << kursi << "|" << endl;
    cout << "|Jumlah Beli : " << setw(21) << left << jumlah_pembelian << "|" << endl;
    cout << "|Total Bayar : " << setw(21) << left << total_bayar << "|" << endl;

    return 0;
}