#include<iostream>
using namespace std;
class  factorial
{
  public:
  unsigned long long fact=1;
  int num;
  void display();
};
class child_factorial : public factorial
{
    public:
    int input();
    void fact_function();
};

int child_factorial :: input()
{
  cout << "please enter a number:";
  cin >> num;
}

void child_factorial::fact_function()
{
  for(int i=1;i<=num;i++)
  {
    fact=fact*i;
  }
}

void factorial::display()
{
  cout << "factorial of entered number is:" << fact;
}

int main()
{
  child_factorial object;

  object.input();
  object.fact_function();
  object.display();
}