#include <iostream>
using namespace std;

class baseClass
{
public:
    virtual void perkenalan() final
    {
        cout << "Hallo saya Function dari baseClass";
    }
};
class derivedClass : public baseClass
{
public:
    void perkenalan()
    {
        cout << "Hallo saya Function dari derivedClass";
    }    
};
int main()
{
    derivedClass a;
    a.perkenalan();

    return 0;
}