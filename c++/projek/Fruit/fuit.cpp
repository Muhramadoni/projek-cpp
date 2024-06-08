#include <iostream>
#include <string>

using namespace std;
int diskon(string kodeKasir, int jumlahHarga) 
{
    if (kodeKasir == "BM") {
        return jumlahHarga * 0.25;
    } else if (kodeKasir == "RG") {
        return jumlahHarga * 0.05;
    } else if (kodeKasir == "DR") {
        return jumlahHarga * 0.10;
    } else {
        return 0;
    }
}

int main() 
{
    int harga[3] = {35000, 25000, 30000}; 
    string kodeBuah[3] = {"A", "L", "J"}; 
    string namaBuah[3] = {"Apel Fuji", "Lengkeng Bangkok", "Jeruk Sunkist"}; 

    int noTransaksi, jumlahBeli, uangBayar;
    string kodeKasir, kodeBuahInput, nama_kasir;

    cout << "Toko Buah \"FRUITY FRESH\"" << endl; 
	cout << "===============================" << endl;
	
    cout << "Input No Transaksi      : ";
    cin >> noTransaksi;

    cout << "Input Kode Kasir        : ";
    cin >> kodeKasir;
	
	cout << "===============================" << endl;
	
    cout << "Nama Kasir              : " ;
    cin >> nama_kasir;

    cout << "Pilih Kode Buah [A/L/J] : " ;
    cin >> kodeBuahInput;

    int indexBuah = -1; 
    for (int i = 0; i < 3; i++) {
        if (kodeBuahInput == kodeBuah[i]) {
            indexBuah = i; 
            break;
        }
    }

    if (indexBuah != -1) 
	{
        cout << "Input Jumlah Beli       : " ;
        cin >> jumlahBeli;

        int jumlahHarga = harga[indexBuah] * jumlahBeli;
        int diskonKasir = diskon(kodeKasir, jumlahHarga);
        int totalBayar = jumlahHarga - diskonKasir;

		cout << endl << endl;
		cout << "Struk Pembelian Buah   " << endl;
        cout << "Toko Buah \"FRUITY FRESH\"" << endl; 
        cout << "==================================" << endl;
        cout << "Nota: " << noTransaksi << "        Nama Kasir :" << nama_kasir << endl;
        cout << "==================================" << endl;
        cout << "Buah yang dibeli : " << namaBuah[indexBuah] << endl;
        cout << "Harga per kg     : Rp." << harga[indexBuah] << endl;
        cout << "Jumlah beli      : " << jumlahBeli << " Kg" << endl;
        cout << "Jumlah Harga     : Rp." << jumlahHarga << endl;
        cout << "Diskon           : Rp." << diskonKasir << endl;
        cout << "Total Bayar      : Rp." << totalBayar << endl;
        cout << "==================================" << endl;
        cout << "Uang Bayar       : Rp.";
        cin >> uangBayar;

        if (uangBayar >= totalBayar) {
            cout << "Uang Kembali     : Rp." << uangBayar - totalBayar << endl;
        } else {
            cout << "Uang Bayar kurang!" << endl;
        }
    } 
		else {
        cout << "Kode buah tidak valid." << endl;
    	}

    return 0;
}
