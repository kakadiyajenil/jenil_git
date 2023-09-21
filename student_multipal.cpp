#include<iostream>
using namespace std;
class A
{
    public:
    void set_p()
    {
        int id;
        string name;
        cout << "enter the student id-->";
        cin >> id;
        cout << "enter the student name-->";
        cin >> name;
        cout << endl << "student id:-" << id << "\nstudent name:-" << name << endl;
    }
};

class B
{
    public:
    void set_s()
    {
        int guj,eng,math,total,per;
        cout << "enter the gujarati mark-->";
        cin >> guj;
        cout << "enter the english mark-->";
        cin >> eng;
        cout << "enter the matrh mark-->";
        cin  >> math;
        total=guj+eng+math;
        cout << "guj+eng+math=-->" << total << endl;
        per=(total*100)/300;
        cout << "per is a-->" << per << endl;
         cout << "guj" << "\t" << "eng"<< "\t" << "math" << "\t" << "total" << "\tper" << endl;
        cout << guj << "\t" << eng << "\t" << math << "\t" << total << "\t" << per << endl;
    }
};
class  C :public A , public B
{   public:
    void set_display()
    {   cout << "stdent marksheet" << endl ;
        set_p();
        set_s();
    }
     
  
};
int main()
{
    C mark;

    mark.set_display();
}
