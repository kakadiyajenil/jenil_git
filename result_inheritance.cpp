#include<iostream>
using namespace std;
class person
{
    int id;
    string name;

    public:
    void std_p()
    {
        cout << "enter the student id-->";
        cin >> id;
        cout << "enter the student name-->";
        cin >> name;
    }

    void display_p()
    {
        cout << endl << "student id:-" << id << "\nstudent name:-" << name << endl;
    }
};

class student : private person{
    int guj,eng,math,total,per;

    public:
    void set_s()
    {
        std_p();
        cout << "enter the gujarati mark-->";
        cin >> guj;
        cout << "enter the english mark-->";
        cin >> eng;
        cout << "enter the math mark-->";
        cin >> math;
        total=guj+eng+math;
        cout << "guj+eng+math=-->" << total << endl;
        per=(total*100)/300;
        cout << "per is a-->" << per << endl;
    }

    void display_s()
    {
        display_p();

        cout << "guj" << "\t" << "eng" << "\t" << "math" << "\t" << "total" << "\tper" << endl;
        cout << guj << "\t" << eng << "\t" << math << "\t" << total << "\t" << per << endl;
    }
};

int main()
{
    student s;
    s.set_s();
    s.display_s();
}