// runtime polymorphism
// virtual function

#include<iostream>
using namespace std;
class base
{
    public:
    virtual void showprint()
    {
        cout << "base class output print---->" << endl;
    }
};

class derived : public base{
    public:
    void showprint ()
    {
        cout << "derived class output print---->" << endl;
    }
};

int main()
{
    base a, *b;
    derived d;

    b = &a;
    b->showprint();

    b = &d;
    b->showprint();

}