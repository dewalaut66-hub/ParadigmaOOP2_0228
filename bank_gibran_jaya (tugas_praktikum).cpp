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