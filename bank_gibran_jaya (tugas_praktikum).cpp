#include <iostream>
using namespace std;

// Abstract class
class RekeningBank {
public:
    double saldo;

    RekeningBank(double s) {
        saldo = s;
    }

    virtual void potongAdmin() = 0; // pure virtual function
};

// Rekening Syariah
class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        cout << "[Syariah] Tidak ada biaya admin. Saldo: " << saldo << endl;
    }
};

//Rekening Konvensional
class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        saldo -= 15000;
        cout << "[Konvensional] Admin 15000 dipotong. Saldo: " << saldo << endl;
    }
};

// Rekening Premium
class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(double s) : RekeningBank(s) {}

    void potongAdmin() override {
        if (saldo > 10000000) {
            cout << "[Premium] Bebas admin. Saldo: " << saldo << endl;
        } else {
            saldo -= 50000;
            cout << "[Premium] Admin 50000 dipotong. Saldo: " << saldo << endl;
        }
    }
};

// Main function
int main() {

    RekeningBank* nasabah1 = new RekeningSyariah(5000000);
    RekeningBank* nasabah2 = new RekeningKonvensional(5000000);
    RekeningBank* nasabah3 = new RekeningPremium(8000000);
    RekeningBank* nasabah4 = new RekeningPremium(15000000);

    nasabah1->potongAdmin();
    nasabah2->potongAdmin();
    nasabah3->potongAdmin();
    nasabah4->potongAdmin();

    cout << "=== PROSES ADMIN BULANAN ===" << endl;

    return 0;
}
