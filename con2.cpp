#include<iostream>
using namespace std;
int main()
{
    for(char i=65;i<=90;i++)
    {
        if(i==5 || i==18)
        {
            continue;
        }
        cout << i << "\t";
    }
}
