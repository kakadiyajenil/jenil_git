#include<iostream>
#include<string.h>
using namespace std;

struct person{
    char employ [100];
    int salary;
    char id[100];
};
int main()
{
    struct person person1;

    strcpy(person1.employ,"jenil");
    strcpy(person1.id,"1");
    person1.salary=20000;

    cout << person1.id;
    cout << person1.employ;
    cout << person1.salary;
}