#include <iostream>
using namespace std;
class jenil
{
    int a,b,l,t,s,r;
 public :

 void setdata()
 { 
     cout << "enter sqear area -->" ;
     cin >> l;
     s=l*l;
     cout << s;
     cout << "\n";
 }
 void setdata(int)
 {
    cout << "\nenter regtengal area one-->" ;  
    cin >> l;
    cout << "enter regtengal area two-->" ;  
    cin >> a;  
    b=l*a; 
    cout << b;
    cout << "\n";
 }
 void setdata(double)
 {
  cout << "\nenter traangal area one-->" ;  
  cin >> l;
  cout << "enter traangal area two-->" ;  
  cin >> b;
  t=l*b/2;
  cout << t;
  cout << "\n";
 }
 void setdata(int a,int b)
 {
  cout << "\nenter circal area -->" ;
  cin >> r;
  a=20/7*r*r;
  cout << a; 
  cout << "\n";
 }
};
int main ()
{
   jenil jk;
   jk.setdata();
   jk.setdata(10);
   jk.setdata(1.0);
   jk.setdata(10,10);
}
