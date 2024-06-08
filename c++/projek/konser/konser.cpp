// Program: Program Penjualan Tiket Konser
// Penulis: Muhammad Ramadoni
// Tanggal: 14/01/2023 - 15/01/2024 
// Waktu  : 23:24 PM - 20:20 PM

#include <iostream>

using namespace std;

struct konser {
    string kode_konser;
    string judul_konser;
    int jenis_tiket;
    int harga_tiket;
};

void judul() {
    cout << "       Penjualan Tiket Konser       " << endl;
    cout << "====================================" << endl;
}

int main() {
    string nama_pembeli;
    int jumlah_beli, total_harga, potongan;
    int uang_bayar, uang_kembali, total_bayar;

    judul();

    konser data_konser[10];

    cout << "Nama Pembeli              :";
    cin >> nama_pembeli;

    cout << "kode Konser [JB/BM/AR]    :";
    cin >> data_konser[0].kode_konser;

    cout << "Jenis Tiket" << endl;
    cout << "1. VVIP" << endl;
    cout << "2. VIP" << endl;
    cout << "3. TRIBUNE" << endl;

    cout << "Pilih Jenis Tiket [1/2/3] :";
    cin >> data_konser[0].jenis_tiket;

    cout << "Jumlah Beli               :";
    cin >> jumlah_beli;

    if (data_konser[0].kode_konser == "JB") 
    {
        data_konser[0].judul_konser = "Justine Bieber";
        data_konser[0].harga_tiket = (data_konser[0].jenis_tiket == 1) ? 1000000 : ((data_konser[0].jenis_tiket == 2) ? 500000 : 100000);
    } 
    else if (data_konser[0].kode_konser == "BM") 
    {
        data_konser[0].judul_konser = "Bruno Mars";
        data_konser[0].harga_tiket = (data_konser[0].jenis_tiket == 1) ? 750000 : ((data_konser[0].jenis_tiket == 2) ? 450000 : 50000);
    } 
    else if (data_konser[0].kode_konser == "AR") 
    {
        data_konser[0].judul_konser = "ARMADA";
        data_konser[0].harga_tiket = (data_konser[0].jenis_tiket == 1) ? 850000 : ((data_konser[0].jenis_tiket == 2) ? 250000 : 150000);
    } 
    else 
    {
        cout << "Kode Yang Anda Masukkan Salah" << endl;
        return 1;
    }

    total_harga = data_konser[0].harga_tiket * jumlah_beli;

    potongan = (jumlah_beli > 5) ? 0.1 * total_harga : 0;

    total_bayar = total_harga - potongan;

    cout << endl;
    cout << "    Penjualan Tiket Konser   " << endl;
    cout << "=============================" << endl;
    cout << "Nama Pembeli :" << nama_pembeli << endl;
    cout << "Judul Konser :" << data_konser[0].judul_konser << endl;
    cout << "Jenis Tiket  :" << data_konser[0].jenis_tiket << endl;
    cout << "Harga Tiket  :RP." << data_konser[0].harga_tiket << endl;
    cout << "Jumlah Beli  :" << jumlah_beli << endl;
    cout << "=============================" << endl;
    cout << "Total Harga  :RP." << total_harga << endl;
    cout << "Potongan     :RP." << potongan << endl;
    cout << "Total Bayar  :RP." << total_bayar << endl;
    cout << "=============================" << endl;

    cout << "Uang Bayar   :RP."; 
    cin >> uang_bayar;

    uang_kembali = uang_bayar - total_bayar;

    cout << "Uang Kembali :RP." << uang_kembali << endl;

    return 0;
}
