#include<iostream>

using namespace std;

class BATSMEN
{
    int bcode,innings,notout,runs;
    char bname [20];
    float batavg;

    float calcavg()
    {
        return batavg=runs/(innings-notout);
    }

    public :

    BATSMEN()
    {
       cout << "Enter Basment 4 Digit Code Number. : ";
       cin >> bcode;
       cout << "Enter  batsman  name. : ";
       cin >> bname   ;
       cout << "Enter Basment innings : ";
       cin >> innings;
       cout << "Enter  batsman  notout : ";
       cin >>  notout;
       cout << "Enter Basment runs : ";
       cin >> runs ;

       batavg = calcavg() ;
    }

   void displaydata()
    {
    cout << "\nbatsman  4 Digit Code Number Is : " << bcode;
    cout << "\nbatsman  name is : " << bname;
    cout << "\ninnings\t notout\truns \tbatavg";
    cout << "\n" << innings << "\t" <<  notout << "\t" << runs  << "\t" << batavg;
    }

};

int main()
{
    BATSMEN bat;
    bat.displaydata();
}