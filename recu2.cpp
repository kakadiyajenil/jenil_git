#include<iostream>
using namespace std;
int factoriyal (int );
int main()
{
    int result,n;
    cin >> n;
    result=factoriyal(n);
    cout << "factoriyal of"  << "=" << result;

    return 0;
}
int factoriyal(int n)
{
    if(n>1){
        return n *factoriyal(n-1);

    }else{
        return 1;
    }
}