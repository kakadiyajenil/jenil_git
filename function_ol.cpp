// function

#include<iostream>
using namespace std;
class jenil // class name
{
    int a,b,l,s,t,r;
    public :
    void setdata()// 1."Square"
    {
     cout << "Enter The Value :- " ;
     cin >> l;
     s=l*l;
     cout << "Area Of Square :- " << s <<"\n";
    
    }
 
   void setdata(int l, int a) // 2. "Rectangle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> a;
     b=l*a;
     cout << "Area Of Rectangle :- " << b <<"\n";
    }


    void setdata(double l,double b)// 3. "TriAngle"
    {
     cout << "\nEnter The Frist Value :- " ;
     cin >> l;
     cout << "Enter The Second Value :- " ;
     cin >> b;
     t=l*b/2;
     cout << "Area Of TriAngle :- " << t <<"\n" ;
    }

    void setdata(int a)// 4. "Circle"
    {
     cout << "\nEnter The Value :- " ;
     cin >> r;   
     a=20/7*r*r;
     cout << "Area Of Circle :- " << a <<"\n";
    }

};

int main()
{
    jenil jk;
    jk.setdata();
    jk.setdata(10);
    jk.setdata(1.5);
    jk.setdata(1,2);

}
