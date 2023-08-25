#include<iostream>
using namespace std;
class Axis
{
    private : int accno;
    private : string cname;
    private : int bal;
    public  : void acceptData()
    {
        cout<<"\n enter the Account Number :";
        cin>>accno;

        cout<<"\n enter the name of customer:";
        cin>>cname;

        cout<<"\n enter the balance amount:";
        cin>>bal;

    }
    public : void showinfo()
    {
        cout<<"\n The Account number is :"<<accno;
        cout<<"\n the customer name is :"<<cname;
        cout<<"\n the balance amount is:"<<bal;
    }
    public : void deposit()
    {
        int damt;
        cout<<"\n enter the amount for deposit:";
        cin>>damt;
        bal=bal+damt;
    }
    public : void withdraw()
    {
        int wamt;
        cout<<"\n enter the amount for withdraw:";
        cin>>wamt;
        if(wamt>bal)
        {
            cout<<"\n you have insufficient balance";
            cout<<"\n you balance is "<<bal;
            cout<<"\n and you are trying withdraw"<<wamt;
        }
        else
        {
            bal=bal-wamt;
        }
    }
    public : void showBal()
    {

        cout<<"\n updated balance after transaction is:"<<bal;

    }

};
int main()

{
    int i;
    Axis a;
    do
    {
        int b;

        cout<<"\n press 1 for acceptData";
        cout<<"\n press 2 for showinfo";
        cout<<"\n press 3 for deposit";
        cout<<"\n press 4 for showbal";
        cout<<"\n press 5 for withdraw";
        cout<<"\n enter the value for execution function:";
        cin>>b;
        if(b==1)
            {
                a.acceptData();
            }
        else if(b==2)
           {
                a.showinfo();
           }
        else if(b==3)
           {
                a.deposit();
           }
        else if(b==4)
           {
                a.showBal();
           }
        else if(b==5)
           {
                a.withdraw();
           }
        else
           {
                cout<<"\n invalid value you entering";
           }
           cout<<"\n you want to continue operation press 1 otherwise press 2";
           cin>>i;
    }
    while(i == 1);
}
