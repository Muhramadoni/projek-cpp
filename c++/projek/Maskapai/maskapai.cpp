// Program: Program Penjualan Tiket Pesawat Bina Sarana Air
// Penulis: Muhammad Ramadoni
// Tanggal: 24/12/2023
// Waktu  : 22:02 - 00:32

#include <iostream>
#include <iomanip>

using namespace std;
struct Pesawat {
    string kode;
    string nama;
    int kelas;
    int jumlah_beli;
    double harga;
};

void judul()
{
    cout << "|=======================================|" << endl;
    cout << "| Kode |    Nama    |  Kelas  |  Harga  |" << endl;
    cout << "|      |   Pesawat  |         |         |" << endl;
    cout << "|=======================================|" << endl;
    cout << "|  DA  |  Doel Air  |    1    |  40000  |" << endl;
    cout << "|      |            |    2    |  35000  |" << endl;
    cout << "|=======================================|" << endl;
    cout << "|  PA  |  Peter Air |    1    |  50000  |" << endl;
    cout << "|      |            |    2    |  45000  |" << endl;
    cout << "|=======================================|" << endl;
    cout << "|  BA  | Blinkz Air |    1    |  60000  |" << endl;
    cout << "|      |            |    2    |  55000  |" << endl;
    cout << "|=======================================|" << endl;
}

int main() {
    char lagi;
    string nama_pemesan;
    int jumlah_pemesan, total_bayar_semua = 0, total_item = 0;

    awal:

    cout << "\tPEMJUALAN TIKET PESAWAT BINA SARANA AIR" << endl;
    cout << "\tJl. Informatika No.21 Telp(021)74667899 " << endl;
    cout << "=====================================================" << endl;
    cout << "Masukkan Nama Pemesan  : "; cin >> nama_pemesan;
    cout << "Masukkan Jumlah Pemesan: "; cin >> jumlah_pemesan;

    Pesawat data_pesawat[jumlah_pemesan];

    for (int i = 0; i < jumlah_pemesan; ++i) {
        cout << "Data Ke-" << i + 1 << endl;
        cout << "Masukkan Kode Pesawat  : "; cin >> data_pesawat[i].kode;
        cout << "Masukkan Kelas Pesawat : "; cin >> data_pesawat[i].kelas;

        // Mengisi data_pesawat[i] sesuai dengan kode yang diinput
        if (data_pesawat[i].kode == "DA") {
            data_pesawat[i].nama = "Doel Air";
            data_pesawat[i].harga = (data_pesawat[i].kelas == 1) ? 40000.0 : 35000.0;
        } else if (data_pesawat[i].kode == "PA") {
            data_pesawat[i].nama = "Peter Air";
            data_pesawat[i].harga = (data_pesawat[i].kelas == 1) ? 50000.0 : 45000.0;
        } else if (data_pesawat[i].kode == "BA") {
            data_pesawat[i].nama = "Blinkz Air";
            data_pesawat[i].harga = (data_pesawat[i].kelas == 1) ? 60000.0 : 55000.0;
        } else {
            cout << "Kode pesawat tidak valid." << endl;
            return 1; // Keluar dari program dengan kode error
        }

        cout << "Nama Pesawat           : " << data_pesawat[i].nama << endl;
        cout << "Harga Tiket            : Rp " << data_pesawat[i].harga << endl;

        cout << "Jumlah Tiket           : ";
        cin >> data_pesawat[i].jumlah_beli;
        total_item += data_pesawat[i].jumlah_beli;
    }

    cout << endl;
    cout << "\t\tPENJUALAN TIKET PESAWAT BINA SARANA AIR   " << endl;
    cout << "\t\tJl. Informatika No.21 Telp (021)74667899 " << endl;
    cout << "================================================================================" << endl;
    cout << "Nama Pemesan : " << nama_pemesan << endl;

    cout << "|==============================================================================|" << endl;
    cout << "|   No.  |  Kode       |    Nama     |  Kelas  |  Harga  |  Jumlah  |  Total   |" << endl;
    cout << "|        |  Pesawat    |   Pesawat   |         |  Tiket  |  Tiket   |          |" << endl;
    cout << "|==============================================================================|" << endl;

    for (int j = 0; j < jumlah_pemesan; ++j) {
        int total_bayar = data_pesawat[j].harga * data_pesawat[j].jumlah_beli;
        total_bayar_semua += total_bayar;

        cout << "| " << setw(3) << j + 1 << "    |  " << setw(5) << data_pesawat[j].kode << "      |   "
             << setw(5) << data_pesawat[j].nama << "  | " << setw(3) << data_pesawat[j].kelas
             << "     | " << setw(7) << data_pesawat[j].harga << " | " << setw(5) << data_pesawat[j].jumlah_beli
             << "    |  " << setw(5) << total_bayar << "   | " << endl;
    }

    cout << "|==============================================================================|" << endl;
    cout << "Pendapatan total = RP." << total_bayar_semua << endl;
    cout << "Total Item = " << total_item << endl;
    cout << "Mau Input data lagi [Y/T] = "; cin >> lagi;

    if (lagi == 'Y' || lagi == 'y')
        goto awal;
    else if (lagi == 'T' || lagi == 't')
        goto akhir;

    akhir:

    return 0;
}
