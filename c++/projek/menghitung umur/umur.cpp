#include <iostream>
#include <ctime> 
#include <iomanip> // Untuk menggunakan setw()

using namespace std;
int main() 
{
    // Input nama dan tanggal lahir dengan simbol "-"
    string nama;
    int tanggal, bulan, tahun;
    char simbol;

    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan tanggal lahir (DD-MM-YYYY): ";
    cin >> setw(2) >> tanggal >> simbol >> setw(2) >> bulan >> simbol >> setw(4) >> tahun;

    // Dapatkan waktu saat ini
    time_t now = time(0);
    tm *sekarang = localtime(&now);

    // Hitung umur
    int umur = sekarang->tm_year + 1900 - tahun;
    
    // Periksa apakah ulang tahun sudah lewat atau belum
    if (sekarang->tm_mon < bulan - 1 || (sekarang->tm_mon == bulan - 1 && sekarang->tm_mday < tanggal)) {
        umur--;
    }

    // Tampilkan umur
    cout << "Hai " << nama << ", umur Anda sekarang adalah: " << umur << " tahun" << endl;

    return 0;
}
