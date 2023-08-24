#include<iostream>
#include<string.h>
using namespace std;

struct person{
    char writer[100];
    int spend;
    char book[100];
};
int main()
{
    struct person person1;

    strcpy(person1.writer,"narshih_mahetaL");
    strcpy(person1.book,"kuvaribainu_mameru");
    person1.spend=1800;

    cout << person1.book;
    cout << person1.writer;
    cout << person1.spend;
}