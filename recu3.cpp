#include<iostream>
using namespace std;
int fido(int n)
{
    if(n<=1){
        return n;
    }
    return fido (n-1+fido(n-2));
}
int main  ()
{
    int num;
    cin >> num;
    for(int i=0;i<=num;i++)
    {
        cout << fido(i) << " ";
    }
    return 0;
}