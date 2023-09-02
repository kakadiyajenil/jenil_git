#include<iostream>
using namespace std;
class area 
{
  public :
  area (double r)
  {
    cout << "area of circle is :" << 3.14*r*r;
  }
  area (int s)
  {
    cout << "area of squre is :" << s*s;
  }
  area (double w,double h)
  {
    cout << "area of rectrangle is :" << w * h;
  }
  area (int b, int h)
  {
    cout << "area of triangle is:" << (b*h)/2;
  }
};

int main()
{
  area area (20,30);
}