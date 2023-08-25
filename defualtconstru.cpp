#include<iostream>
using namespace std;
class Bank
{

    private: string name;
    private: int accno;
    private: int lsamt;
    private: int noy;
    private: float roi;

    public : Bank() //default constructor
    {

        roi=0.10;  //default constructor
    }
    public : void getData()
    {

        cout<<"\n Enter the Account and name:";
        cin>>accno>>name;
        cout<<"\n enter the lumsum amount and no of year :";
        cin>>lsamt>>noy;
    }
    public : void showdata()
    {

        cout<<"\n the customer name :"<<name;
        cout<<"\n the customer accno:"<<accno;
        cout<<"\n the lumsum amount :"<<lsamt;
        cout<<"\n the no of years :"<<noy;
        cout<<"\n current rate of intrest :"<<roi;
    }
    public : void mat_amt()
    {
        int iamt=(lsamt * roi)*noy;
        int mamt=lsamt +iamt;
        //52000-40000+12000
        cout<<"\n the total interest amount earn "<<iamt;
        cout<<"\n the total maturity amount "<<mamt;
    }
};
int main()
{
    Bank b;


    b.getData();
    b.showdata();
    b.mat_amt();
}
