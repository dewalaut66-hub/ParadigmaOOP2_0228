#include <iostream>
using namespace std;

class remoteLampu
{
private:
    string saklarNO[10];

 public:
    void setSaklarNO(int i, string value)
    {
        saklarNO[i] = value;
    }
string getSaklarNo(int i)
{
    return saklarNo[i];
}
};