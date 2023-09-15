#include <iostream>
using namespace std;

class program
{
    int rate,qty,amt,dis,gst,billamt;
    string name;
    double netbill;
    
    public :

    program ()
    {
        cout << "Enter the product name : ";
        cin >> name;
        cout << "Enter the product rate : ";
        cin >> rate;
        cout << "Enter the product qty : ";
        cin >> qty;
        
        amt=rate*qty;
        dis=(amt*5/100);
        billamt=amt-dis;
        gst=billamt/18;
        netbill=billamt+gst;
    }

    void getdata()
    {
        cout <<name <<"\t" <<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<billamt<<"\t"<<gst<<"\t"<<netbill<<"\t"<<endl;
    }
};

int main ()
{
    program Program[1];
    {
       cout << "name\t" << "rate\t" << "qty\t" << "amt\t" << "dis\t" <<"billamt\t" << "gst\t" << "netbill\t"<<endl;

       for (int i=0;  i<1; i++)
       
       Program[i].getdata();
}
}
