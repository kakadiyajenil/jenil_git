#include <iostream>
using namespace std;
class marksheet
{
    int sci, math, guj, eng, total;
    double per;
    string name;

public:
    marksheet()
    {
        cout << endl
             << "enter student mark: --->" << endl;
        cout << "enter student name: ";
        cin >> name;
        cout << "enter sci marks: ";
        cin >> sci;
        cout << "enter math marks:";
        cin >> math;
        cout << "enter guj marks :";
        cin >> guj;
        cout << "enter eng marks :";
        cin >> eng;

        total = sci + math + guj + eng;
        per = total / 4;
    }
    void getResult()
    {
        cout << name << "\t" << sci << "\t" << math << "\t" << guj << "\t" << eng << "\t" << total << "\t" << per << endl;
    }
};

int main()
{
    marksheet marksheet[4];

    cout << endl << "name\t" << "sci\t" << "math\t" << "guj\t" << "eng\t" << "total\t" << "per\t" << endl;
    for(int i=0; i<4;i++)
    {
        marksheet[i].getResult();
    } 
}