#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class HRPolicy
{
    private: int empid;
    private: string ename;
    private: string job;
    private: int bsal;
    private : float hra;
    private : float ta;
    private:float pf;
    private : float medical;


    public : HRPolicy() //default constructor
    {
        hra=0.30; //house rent allowance
        ta=0.20;  // travel allowance
        pf=0.10;  //provident fund for retirement
        medical=0.10;
    }
    public : void getData()
    {

        cout<<"\n enter the employee id:";
        cin>>empid;

        cout<<"\n enter the employee name:";
        cin>>ename;
        cout<<"\n enter the employee basic salary:";
        cin>>bsal;
        cout<<"enter the employee job:";
        cin>>job;
    }
    public : void showData()
    {
        cout<<"\n The Employee id"<<empid;
        cout<<"\n the Employee name"<<ename;
        cout<<"\n the Employee basic salary"<<bsal;
        cout<<"\n the Employee job"<<job;
        cout<<"\n the Employee Allowances :";
        cout<<"\n HRA Allowances"<<hra;
        cout<<"\n TA allowances"<<ta;
        cout<<"\n pf allowances"<<pf;
        cout<<"\n medical allowances"<<medical;

    }
    public : void all_allowances()
    {
        float hra_amt=bsal * hra;
        float ta_amt=bsal * ta;
        float pf_amt=bsal * pf;
        float med_amt=bsal * medical;

        float all=hra_amt + ta_amt + pf_amt +med_amt;
        cout<<"\n the all allowance are: "<<all;

    }
    public : void payment()
    {
        float pay;
        float hra_amt=bsal * hra;
        float ta_amt=bsal * ta;
        float pf_amt=bsal * pf;
        float med_amt=bsal * medical;
        pay=bsal +(hra_amt + ta_amt + pf_amt +med_amt);
        cout<<"\n payment is "<<pay;

    }
};
int main()
{
    HRPolicy h;
    h.getData();
    h.showData();
    h.all_allowances();
    h.payment();

    getch();
}
