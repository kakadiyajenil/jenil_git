#include<iostream>
using namespace std;
class Test 
{
    int a=10,b=20;
    public:
    Test (int a)
    {
        cout << "Test constructor is call --> " << a;
    }
    void getedata()
    {
        cout << " sum is;" << a+b;
    }
};

int main()
{
    Test test (10);

    return 0;
}