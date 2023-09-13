#include<iostream>
using namespace std;
class cylinder
{
    int radius, height;

    public:
    void setdata(int ra, int hei)
    {
        radius = ra;
        height = hei;
    }
    cylinder operator++(int)
    {
        cylinder  jk;
        jk.radius = radius++;
        jk.height = height++;
        return jk; 
    }
    int getdata()
    {
        return 2*3.14*radius*height+2*3.14*radius*radius;
    }
};

int main ()
{
    cylinder cylinder1 , cylinder2;

    cylinder1.setdata(2,2);
    cout << "cylinder 1 is :" << cylinder1.getdata() << endl;

    cylinder1++;
    cout << "cylinder 2 is :" << cylinder1.getdata() << endl;
}