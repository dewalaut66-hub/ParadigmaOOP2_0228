#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNo[10];

 public:
    void setSaklarNo(int i, string value)
    {
        saklarNo[i] = value;
    }
string getSaklarNo(int i)
{
    return saklarNo[i];
}
};

int main()
{
    remoteLampu lampuRumah;

    lampuRumah.setSaklarNo(0, "Lampu Teras Rumah");
    lampuRumah.setSaklarNo(1, "Lampu Ruang Tamu");
    lampuRumah.setSaklarNo(2, "Lampu Kamar Tidur");
    lampuRumah.setSaklarNo(3, "Lampu Dapur");

    cout << "Saklar No 0: " << lampuRumah.getSaklarNo(0) << endl;
    cout << "Saklar No 1: " << lampuRumah.getSaklarNo(1) << endl;
    cout << "Saklar No 2: " << lampuRumah.getSaklarNo(2) << endl;
    cout << "Saklar No 3: " << lampuRumah.getSaklarNo(3) << endl;

    return 0;
}