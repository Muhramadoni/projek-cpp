// Program: Program Penitipan Hewan Peliharaan "MEAOW PET CARE"
// Penulis: Muhammad Ramadoni
// Tanggal: 25/12/2023
// Waktu  : 19:16 - 01:46

#include <iostream>
#include <iomanip>

using namespace std;

// Struktur Hewan
struct Hewan {
    string jenis;
    char kode;
    int kelas;
    int jumlah_peliharaan;
    double biaya_perawatan;
};

void Judul() {
    cout << "              PENITIPAN HEWAN PELIHARAAN " << endl;
    cout << "                    MEAOW PET CARE " << endl;
    cout << "=====================================================" << endl;
}

int main() {
    char lagi;
    string nama_petugas, nama_pemilik, jenis_perawatan;
    int jumlah_data, total_bayar_semua = 0, uang_kembali;
    double sub_total = 0;

    awal:

    Judul();

    cout << "Nama petugas  : ";
    cin >> nama_petugas;
    cout << "Nama pemilik  : ";
    cin >> nama_pemilik;
    cout << "Jumlah data peliharaan: ";
    cin >> jumlah_data;

    Hewan data_hewan[100];

    for (int i = 0; i < jumlah_data; ++i) {
        cout << "Hewan Ke-" << i + 1 << endl;
        cout << "Kode jenis hewan[K/H] : ";
        cin >> data_hewan[i].kode;
        cout << "Kode perawatan[1/2]   : ";
        cin >> data_hewan[i].kelas;

        if (data_hewan[i].kode == 'K') {
            data_hewan[i].jenis = "Kucing";
            data_hewan[i].biaya_perawatan = (data_hewan[i].kelas == 1) ? 25000.0 : 300000.0;
        } else if (data_hewan[i].kode == 'H') {
            data_hewan[i].jenis = "Hamster";
            data_hewan[i].biaya_perawatan = (data_hewan[i].kelas == 1) ? 150000.0 : 100000.0;
        } else {
            cout << "Kode hewan tidak valid." << endl;
            return 1; // Keluar dari program dengan kode error
        }

        cout << "Jumlah Hewan          : ";
        cin >> data_hewan[i].jumlah_peliharaan;
        sub_total += data_hewan[i].jumlah_peliharaan * data_hewan[i].biaya_perawatan;
    }

    total_bayar_semua = sub_total;

    cout << endl;
    cout << "                            PENITIPAN HEWAN PELIHARAAN                          " << endl;
    cout << "                                  MEAOW PET CARE                                " << endl;
    cout << "================================================================================" << endl;
    cout << "Nama Petugas : " << nama_petugas << endl;
    cout << "Nama Pemilik : " << nama_pemilik << endl;
    cout << "================================================================================" << endl;
    cout << "   No.     jenis       Jenis          biaya        jumlah     sub    " << endl;
    cout << "           hewan     Perawatan       perawatan      hewan     total  " << endl;
    cout << "================================================================================" << endl;

    for (int j = 0; j < jumlah_data; ++j) 
	{
        jenis_perawatan = (data_hewan[j].kelas == 1) ? "Lux" : "Intensif";
        double biaya_hewan = data_hewan[j].jumlah_peliharaan * data_hewan[j].biaya_perawatan;
        
        cout << " " << setw(3) << j + 1  << setw(12) << data_hewan[j].jenis 
             << setw(10) << jenis_perawatan << setw(17) << data_hewan[j].biaya_perawatan 
             << setw(12) << data_hewan[j].jumlah_peliharaan << " " << setw(11) << biaya_hewan << endl;
    }

    cout << "=================================================================================" << endl;
    cout << "total_bayar  = RP." << total_bayar_semua << endl;
    cout << "uang_bayar   = RP."; cin >> uang_kembali;
    cout << "uang_kembali = RP." << uang_kembali - total_bayar_semua << endl;

    cout << "Mau Input data lagi [Y/T] = ";
    cin >> lagi;

    if (lagi == 'Y' || lagi == 'y')
        goto awal;
    else if (lagi == 'T' || lagi == 't')
        goto akhir;

    akhir:

    return 0;
}
