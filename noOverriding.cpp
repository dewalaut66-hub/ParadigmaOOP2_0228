#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalam() final
    {
        cout << "Hallo saya Function dari baseClass";
    }
};
class derivedClass : public baseClass
{
public:
    void perkenalam()
    {
        cout << "Hallo saya Function dari derivedClass";
    }    
};