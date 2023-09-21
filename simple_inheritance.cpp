#include<iostream>
using namespace std;
class person
{
    int id;
    string name;
    public:
    void set_p()
    {
        cout << "enter person id:";
        cin >> id;
        cout << "enter person name:";
        cin >> name;
    }
};

class skill : protected person
{
    string sk;
    public:
    void set_s()
    {
        set_p();
        cout << "enter person skill:";
        cin >> sk;
    }
};

int main()
{
    skill skill;

    skill.set_s();
}