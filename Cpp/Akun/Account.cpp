#include <iostream>
#include <iomanip>
using namespace std;

class Akun {
private:
    int nomor;
    double saldo;

public:
    Akun(int nomor) : nomor(nomor), saldo(0.0) {}

    Akun(int nomor, double saldo) : nomor(nomor), saldo(saldo) {}

    int getnomor() const {
        return nomor;
    }

    double getsaldo() const {
        return saldo;
    }

    string toString() const {
        return "Akun[nomor=" + to_string(nomor) + ",saldo=$" + to_string(saldo) + "]";
    }

    void credit(double amount) {
        saldo += amount;
    }

    void debit(double amount) {
        if (saldo >= amount) {
            saldo -= amount;
        } else {
            cout << "jumlah terlampaui" << endl;
        }
    }

    void transferTo(double amount, Akun& another) {
        if (saldo >= amount) {
            saldo -= amount;
            another.saldo += amount;
        } else {
            cout << "jumlah terlampaui" << endl;
        }
    }
};

int main() {
    // Test Constructors and toString()
    Akun a1(5566);
    cout << a1.toString() << endl;
    //Akun[nomor=5566,saldo=$0.00]

    Akun a2(1234, 99.9);
    cout << a2.toString() << endl;
    //Akun[nomor=1234,saldo=$99.90]

    // Test getters
    cout << "Nomor rekeningnya adalah: " << a2.getnomor() << endl;
    //The Akun nomor is: 1234
    cout << "Saldo tersebut adalah: $" << a2.getsaldo() << endl;
    //The saldo is: $99.9

    // Test credit(), debit() and transferTo()
    a1.credit(11.1);
    cout << a1.toString() << endl;
    //Akun[nomor=5566,saldo=$11.10]

    a1.debit(5.5);
    cout << a1.toString() << endl;
    //Akun[nomor=5566,saldo=$5.60]

    a1.debit(500); // Test debit() error
    //jumlah terlampaui
    cout << a1.toString() << endl;
    //Akun[nomor=5566,saldo=$5.60]

    a2.transferTo(1.0, a1);
    cout << a1.toString() << endl;
    //Akun[nomor=5566,saldo=$6.60]

    cout << a2.toString() << endl;
    //Akun[nomor=1234,saldo=$98.90]




    return 0;
}
