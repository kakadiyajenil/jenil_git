// templete
#include <iostream>
using namespace std;
template <class T>
void dispaly(T t1)
{
    cout << "displaying template :-"
         << t1 << endl;
}
template <class X, class Y>
void dispaly(X a, Y b)
{
    cout << "displaying template :-"
         << a << "\t"
         << b << endl;
}
int main()
{
    dispaly(200);
    dispaly(12.56);
    dispaly('G');
    dispaly('G', 1.25);
    dispaly('x', 25);
    dispaly(25, 2.25);
    return 0;
}