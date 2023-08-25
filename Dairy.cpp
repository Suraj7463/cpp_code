#include<iostream>
using namespace std;

class Dairy
{
    public: int c;
    public: int fbill;

    private: string custname;
    private: string city;
    private: int qty;
    private: static int cmilk;
    private: static int bmilk;
    private: int bill;
    public : void getData()
    {
        cout<<"\n enter the customer name";
        cin>>custname;
        cout<<"\n enter the customer city :";
        cin>>city;
    }
    public : void showData()
    {
        cout<<"\n the Customer name is "<<custname;
        cout<<"\n the customer city is"<<city;
    }
    public : void billing()
    {

        do{

        int choice;
        cout<<"\n please select Type of Milk";
        cout<<"\n press-1 for Cow Milk ";
        cout<<"\n press-2 for Baffalo Milk";
        cout<<"\n enter choice:";
        cin>>choice;
        if(choice==1)
        {
            cout<<"\n enter the quantity for cow milk";
            cin>>qty;
             bill=cmilk * qty;
            cout<<"\n Bill amount is "<<bill;
        }
        else if(choice==2)
        {
            cout<<"\n enter the quantity for Baffalo milk";
            cin>>qty;
            bill=bmilk * qty;
            cout<<"\n Bill amount is "<<bill;
        }
        else
        {
            cout<<"\n invalid choice for milk";
        }

        cout<<"\n take unother milk press 3 otherwise press 4";
        cin>>c;
        fbill=fbill+bill;
        }while(c==3);
        
        cout<<"\n final bill is :"<<fbill;
    }
};
int Dairy :: cmilk=40;
int Dairy :: bmilk=50;
int main()
{
    Dairy d;
    d.getData();
    d.showData();
    d.billing();
    return 0;
}
