#include<iostream>
using namespace std;
class  sphere
{
  int   radius;

  public:
  void setdata(int ra)
  {
    radius = ra;
  }
  sphere operator--(int)
  {
    sphere jk;
    jk.radius = radius--;

    return jk; 
  }

  int getdata()
  {
    return radius*radius * 3.14;
  }

};

int main()
{
    sphere sphere1;

    sphere1.setdata(4); 
     cout << "sphere 1 is :" << sphere1.getdata() << endl;

     sphere1--;
     cout << "sphere 2 is :" << sphere1.getdata() << endl;
}
