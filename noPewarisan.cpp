#include <iostream>
using namespace std;

class baseClass final{
public:
    virtual void perkenalan(){
        cout << "Hallo saya Function dari baseClass";
    }
};
class baseClass1{
public:
    virtual void perkenalan(){
        cout << "Hallo saya Function dari baseClass1";
    }    
};
class derivedClass : public baseClass1 {
    public:
    void perkenalan(){
        cout << "Hallo saya Function dari derivedClass";
    }
};
int main() {

    baseClass a;
    a.perkenalan();

    baseClass1 b;
    b.perkenalan();

    derivedClass c;
    c.perkenalan();

    return 0;
}