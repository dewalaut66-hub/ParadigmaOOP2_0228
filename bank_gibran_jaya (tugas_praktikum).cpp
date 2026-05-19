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