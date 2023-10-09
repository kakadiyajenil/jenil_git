#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
class Restaurant{
    public:
    string Customer_Name, c_mobilenum, items[20];
    int order, bill=0, n, IGst, SGst, T_Gst, Disc, FBill,a[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    Restaurant(){
        cout<<"\n\t\t\t\tWelcome To JK VEELA  RESTAURANT\t"<<endl;
        cout<<"\n\t\t\t------------------------------------------"<<endl<<endl;
    }
    void set_detail(){
        cout<<"Enter Customer Name :-> ";
        cin>> Customer_Name;
        cout<<"Enter Customer mobile Number :-> ";
        cin>>c_mobilenum;
    }
    void get_detail(){
        cout<<endl;
        cout<<endl;
        cout << "******************************************************"<< endl;
        cout <<"\t ### VIJAY VILL RESTAURANT ### " << endl;
        cout<<"\tCustomer Name :-> "<< Customer_Name <<endl;
        cout<<"\tCustomer mobile num :-> "<<c_mobilenum<<endl;
        
    }
    
    int Dal_Rise(){
        cout<<"\t\t\tDal_Rise"<<endl;
        cout<<"\t\t\t______________"<<endl;
        cout<<"\t\tItem\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Plen Dal\t\t\t\t\t120/-"<<endl;
        cout<<"\t2. Dal Tadka \t\t\t\t\t170/-"<<endl;
        cout<<"\t3. Plen Rise \t\t\t\t\t150/-"<<endl;
        cout<<"\t4. Jira Rise \t\t\t\t\t210/-"<<endl;
        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 8 if You Cancel Order"<<endl<<endl;
        cout<<"\n";
        
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[0]+=n;
                items[0] = "Plen Dal";
                
                bill = bill+(n*120);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[1]+=n;
                items[1] = "Dal Tadka ";
                bill = bill+(n*170);
                break;
            case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[2]+=n;
                items[2] = "Plen Rise";
                bill = bill+(n*150);
                break;
            case 4:
                cout<<"Enter Quantity: ";
                cin>>n;
                a[3]+=n;
                items[3] = "jira Rise";
                bill = bill+(n*210);
                break;
            case 0:
                break;
            case 8:
                bill = bill;
                break;
            default:
                cout<<"your Choice is Wrong ......\n";
                break;
        }return bill;
    }
    int  Soft_drink(){
        cout<<"\t\t\t   Soft drink"<<endl;
        cout<<"\t\t\t_______________"<<endl;
        cout<<"\t\tItem\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Butter Milk \t\t\t\t\t20/-"<<endl;
        cout<<"\t2. thums up \t\t\t\t\t20/-"<<endl;

        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 8 if You Cancel Order"<<endl<<endl;
        cout<<"\n";

        cout<<"Your Or der : ";
        cin>>order;

        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[4]+=n;
                items[4] = "Butter Milk";
                bill = bill+(n*20);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[5]+=n;
                items[5] = "Thums Up";
                bill = bill+(n*20);
                break;
            case 0:
                break;
            case 8:
                bill = bill;
                break;
            default:
                cout<<"your Choice is Wrong .......\n";
                break;
        }return bill;
    }
int Sapati_Nan(){
        cout<<"\t\t\t     Sapati _ Nan "<<endl;
        cout<<"\t\t\t________________"<<endl;

        cout<<"\t\tItem\t\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Sapati       \t\t\t\t\t10/-"<<endl;
        cout<<"\t2. Nan          \t\t\t\t\t30/-"<<endl;
        cout<<"\t3. Tanduri Rotty \t\t\t\t\t20/-"<<endl;
        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 8 if You Cancel Order"<<endl<<endl;
        cout<<"\n";

        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[8]+=n;
                items[8] = "sapati";
                bill = bill+(n*10);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[9]+=n;
                items[9] = "Nan";
                bill = bill+(n*30);
                break;
                case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[8]+=n;
                items[8] = "Tanduri Rotty";
                bill = bill+(n*20);
                break;

            case 0:
                break;
            case 8:
                bill = bill;
                break;
            default:
                cout<<"your Choice is Wrong .......\n";
                break;
        }return bill;
    }
    int Sabji(){
        cout<<"\t\t\t    Sabji"<<endl;
        cout<<"\t\t\t_____________"<<endl;
        cout<<"\t\tItem\t\t\t\t\tPrice"<<endl; 
        cout<<"\t1. Panir Bhurji\t\t\t\t\t200/-"<<endl;
        cout<<"\t2. Kaju Kari \t\t\t\t\t180/-"<<endl;
        cout<<"\t3. Chana Masala\t\t\t\t\t190/-"<<endl;
        cout<<"\t4. Paneer Tika \t\t\t\t\t195/-"<<endl;
        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 8 if You Cancel Order"<<endl<<endl; 
        
        cout<<"Your Order : ";
        cin>>order;

        switch(order){
            case 1:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[12]+=n;
                items[12] = "Panir Bhurji";
                bill = bill+(n*200);
                break;
            case 2:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[13]+=n;
                items[13] = "Kaju Kari";
                bill = bill+(n*180);
                break;
            case 3:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[14]+=n;
                items[14] = "Chana Masala";
                bill = bill+(n*190);
                break;
            case 4:
                cout<<"Enter Quantity : ";
                cin>>n;
                a[15]+=n;
                items[15] = "Paneer Tika";
                bill = bill+(n*195);
                break;
            
            case 0:
                break;
            case 8:
                bill = bill;
                break;
            default:
                cout<<"your Choice is Wrong .......\n";
                break;
        }return bill;
    }
    
    
    
    
    
    int cancel(){
        for(int i=0;i<20;i++){
            if(a[i]>0)
            {
                a[i]=0;
                items[i]="";
            }
        }
        return bill = 0;
    }
    int Discount(int b){
        if(b>=5000){
            Disc = b * 10;
        }
        else {
            Disc = 0;
        }
            
        return Disc;
    }
    int Gst(int b){
        SGst = round(b * 0.025);
        IGst = round(b * 0.025);
        T_Gst = SGst + IGst;
        return T_Gst;
    }
    int Final_Bill(int b, int Disc_Amt, int gst){
        FBill = b - Disc_Amt + gst;
        return FBill;
    }
    void Thankyou(){
        cout<<"\n\t*\tThank You for Visiting Us...."<<endl;
        cout<<"\t*\tvisit Again...."<<endl;
    }
    void Get_order(){
        cout<<"\n\t\t\t\tYour Orderd Details : "<<endl;
        cout<<"\n\t\t\t*********************************\n";
        for ( int i = 0; i <= 19; i++)
        {
            if (!items[i].empty())
                cout<<items[i]<<" :-> "<<a[i]<<endl;

        }
    }
};

int main(){
    Restaurant R;
    int ch, b=0, gst=0,Disc_Amt=0, Bill=0,x=0;
    R.set_detail();
    cout<<"\n\t\t\tMENU"<<endl;
    cout<<"\t\t--------------------";
    cout<<"\n";
    
    do{
        cout<<"\n\t1. Dal_Rise vijay11111 "<<endl;
        cout<<"\t2. Soft_drink"<<endl;
        cout<<"\t3. Sapati_Nan"<<endl;
        cout<<"\t4. Sabji"<<endl;
        cout<<"\t\tPress 0 if You Complet Order"<<endl;
        cout<<"\t\tPress 8 if You Cancel Order"<<endl<<endl;
        cout<<"Enter Your Choice : ";
        cin>>ch;
        switch(ch){
            case 1:
                x=0;
                b = R.Dal_Rise();
                break;
            case 2:
                x=0;
                b = R.Soft_drink();
                break;
            case 3:
                x=0;
                b = R.Sapati_Nan();
                break;
            case 4:
                x=0;
                b = R.Sabji();
                break;
            case 8:
                x=1;
                b =R.cancel();
                break;
            case 0:
                break;
            default:
                cout<<"your chice is Wrong .......\n";
                break;
        }
    }while(ch!=0);
    Disc_Amt = R.Discount(b);
    gst = R.Gst(b-Disc_Amt);
    Bill = R.Final_Bill(b, Disc_Amt, gst);
    R.get_detail();
    R.Get_order();
    cout << "******************************************" << endl;
    cout<<"\n\n\tDescription          Price"<<endl;
    cout << "******************************************" << endl;
    cout<<"Your Actual Bill -->.  \t\t: "<<b<<endl;
    cout<<"Your Disc -->. \t\t\t: "<<Disc_Amt<<endl;
    cout<<"After Discount -->. \t\t: "<<b-Disc_Amt<<endl;
    cout<<"SGST -->. \t\t\t: "<<gst/2<<endl;
    cout<<"IGST -->. \t\t\t: "<<gst/2<<endl;
    cout<<"Total GST is -->. \t\t: "<<gst<<endl;
    cout<<"Your Final Bill is -->. \t: "<<Bill<<endl;
    R.Thankyou();
}
