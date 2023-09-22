#include <iostream>
using namespace std;

class batting
{
    public:
    void opning()
    {
        cout << "cricketer can opning batting --> " << endl;
    }
};

class bolwing : public batting
{
    public:
    void faster()
    { 
    opning();
    cout << "cricketer can powerplay bolling --> " << endl;
    }
};

class all_rounder : public batting
{
  public:
  void cricket()
  {
    opning();
    cout << "cricket won the world cup -->" << endl;
  }
};

int main()
{
    bolwing bol;
    all_rounder all;
    bol.faster();
    all.cricket();
}
