#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

class TiketPesawat {
public:
    TiketPesawat() {
        std::cout << "|==============================================|\n";
        std::cout << "|           TIKET PESAWAT JAKARTA              |\n";
        std::cout << "|==============================================|\n";
        std::cout << "|  Kode   |     Jenis Kelas    |    Harga      |\n";
        std::cout << "|----------------------------------------------|\n";
        std::cout << "|   E     |      Ekonomi       |  Rp. 250.000  |\n";
        std::cout << "|   B     |      Bisnis        |  Rp. 500.000  |\n";
        std::cout << "|   F     |      First         |  Rp. 900.000  |\n";
        std::cout << "|==============================================|\n\n";

        inputNamaPemesan();
        inputIdPemesan();
        pilihKelasPesawat();

        nomorKursi = generateNomorKursi();
        gate = pilihGate();
        tujuan = pilihTujuan();
        inputJumlahPembelian();
        totalHarga = hitungTotalHarga();
    }

    void tampilkanStruk() const {
        std::cout << "\n";
        std::cout << "|================================================|\n";
        std::cout << "|   === Struk Pembelian Tiket Pesawat ===        |\n";
        std::cout << "|================================================|\n";
        std::cout << "|Nama Pemesan      : " << std::setw(28) << namaPemesan << "|\n";
        std::cout << "|ID Pemesan        : " << std::setw(28) << idPemesan << "|\n";
        std::cout << "|Kode Kelas Pesawat: " << std::setw(28) << kodeKelasPesawat << "|\n";
        std::cout << "|Nama Kelas Pesawat: " << std::setw(28) << namaKelasPesawat() << "|\n";
        std::cout << "|Nomor Kursi       : " << std::setw(28) << nomorKursi << "|\n";
        std::cout << "|Gate              : " << std::setw(28) << gate << "|\n";
        std::cout << "|Tujuan Penerbangan: " << std::setw(28) << tujuan << "|\n";
        std::cout << "|Jumlah Pembelian  : " << std::setw(28) << jumlahPembelian << "|\n";
        std::cout << "|Total Harga       : Rp." << std::setw(22) << std::fixed << std::setprecision(2) << totalHarga << "|\n";
        std::cout << "|================================================|\n";
    }

private:
    std::string namaPemesan;
    std::string idPemesan;
    std::string kodeKelasPesawat;
    std::string nomorKursi;
    std::string gate;
    std::string tujuan;
    int jumlahPembelian;
    double totalHarga;

    void inputNamaPemesan() {
        std::cout << "Masukkan nama pemesan                  : ";
        std::getline(std::cin, namaPemesan);
    }

    void inputIdPemesan() {
        std::cout << "Masukkan ID pemesan                    : ";
        std::getline(std::cin, idPemesan);
    }

    void pilihKelasPesawat() {
        do {
            std::cout << "Masukkan kode kelas pesawat (E/B/F)    : ";
            std::cin >> kodeKelasPesawat;
        } while (kodeKelasPesawat != "E" && kodeKelasPesawat != "B" && kodeKelasPesawat != "F");
    }

    std::string generateNomorKursi() {
        // Generate nomor kursi secara otomatis
        char kursi[] = {'A', 'B', 'C'};
        return std::string(1, kursi[rand() % 3]);
    }

    std::string pilihGate() {
        std::string listGate[] = {"GATE1", "GATE2", "GATE3"};
        int selectedGate;

        std::cout << "Pilih nomor gate:\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << i + 1 << ". " << listGate[i] << "\n";
        }

        std::cout << "Masukkan nomor gate (1/2/3)            : ";
        std::cin >> selectedGate;

        return listGate[selectedGate - 1];
    }

    std::string pilihTujuan() {
        std::string listTujuan[] = {"Jakarta - Surabaya", "Jakarta - Bali", "Jakarta - Medan"};
        int selectedTujuan;

        std::cout << "Pilih tujuan penerbangan:\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << i + 1 << ". " << listTujuan[i] << "\n";
        }

        std::cout << "Masukkan nomor tujuan (1/2/3)          : ";
        std::cin >> selectedTujuan;

        return listTujuan[selectedTujuan - 1];
    }

    void inputJumlahPembelian() {
        std::cout << "Jumlah pembelian tiket pesawat         : ";
        std::cin >> jumlahPembelian;
    }

    double hitungTotalHarga() {
        double hargaTiket;

        // Harga tiket sesuai dengan kode kelas pesawat
        if (kodeKelasPesawat == "E") {
            hargaTiket = 250000;
        } else if (kodeKelasPesawat == "B") {
            hargaTiket = 500000;
        } else if (kodeKelasPesawat == "F") {
            hargaTiket = 900000;
        } else {
            hargaTiket = 0;
        }

        return jumlahPembelian * hargaTiket;
    }

    std::string namaKelasPesawat() const {
        if (kodeKelasPesawat == "E") {
            return "Ekonomi";
        } else if (kodeKelasPesawat == "B") {
            return "Bisnis";
        } else if (kodeKelasPesawat == "F") {
            return "First";
        } else {
            return "Tidak Valid";
        }
    }
};

int main() {
    srand(time(0)); // Inisialisasi seed untuk generateNomorKursi()

    TiketPesawat tiketPesawat;
    tiketPesawat.tampilkanStruk();

    return 0;
}
