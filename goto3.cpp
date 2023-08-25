#include<iostream>
using namespace std;
int main()
{
    char i=97;
    jenil:
    if(i<=122)
    {
        cout <<i << "\t";
        i++;
        goto jenil;
    }
    
    
}