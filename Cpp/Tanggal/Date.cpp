#include <iostream>
#include <iomanip>
using namespace std;

class tanggal {
private:
    int tahun, bulan, hari;

public:
    // Konstruktor
    tanggal(int tahun, int bulan, int hari) : tahun(tahun), bulan(bulan), hari(hari) {}

    // Pengambil/penyetel publik untuk variabel privat
    int dapatkanTahun() const {
        return tahun;
    }

    int dapatkanBulan() const {
        return bulan;
    }

    int dapatkanHari() const {
        return hari;
    }

    void tetapkanTahun(int tahun) {
        this->tahun = tahun;
    }

    void tetapkanBulan(int bulan) {
        this->bulan = bulan;
    }

    void tetapkanHari(int hari) {
        this->hari = hari;
    }

    // Mengembalikan String deskriptif dalam bentuk "MM/DD/YYYY" dengan nol di depan
    string toString() const {
        // Gunakan fungsi bawaan setw() untuk memberikan lebar yang konsisten
        return to_string(bulan) + "/" +
               to_string(hari) + "/" +
               to_string(tahun);
    }

    // Menetapkan tahun, bulan, dan hari. Tidak ada validasi input
    void settanggal(int tahun, int bulan, int hari) {
        this->tahun = tahun;
        this->bulan = bulan;
        this->hari = hari;
    }
};

int main() {

    // Test constructor and toString()
    tanggal d1(2020, 2, 8);
    cout << d1.toString() << endl;  // toString()
    //02/08/2020

    // Test Setters and Getters
    d1.tetapkanTahun(2012);
    d1.tetapkanBulan(12);
    d1.tetapkanHari(23);
    cout << d1.toString() << endl;
    //12/23/2012
    cout << "Tahun adalah: " << d1.dapatkanTahun() << endl;
    //tahun is: 2012
    cout << "Bulan adalah: " << d1.dapatkanBulan() << endl;
    //bulan is: 12
    cout << "Hari adalah: " << d1.dapatkanHari() << endl;
    //hari is: 23

    // Test settanggal()
    d1.settanggal(2988, 1, 2);
    cout << d1.toString() << endl;
    //01/02/2988




    return 0;
}
