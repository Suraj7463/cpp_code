#include<iostream>
using namespace std;
class Employee
{
    private: int empid;
    private: string ename;
    private: int wg;
    private: int wd;

    public : void getData()
    {
        cout<<"Enter the empid ,name:";
        cin>>empid>>ename;

        cout<<"enter the wages and working days :";
        cin>>wg>>wd;
    }
    public : void showdata()
    {
        cout<<"\n the employee id :"<<empid;
        cout<<"\n the employee name :"<<ename;
        cout<<"\n the employee wages:"<<wg;
        cout<<"\n the employee wdays:"<<wd;
    }
    public : int pyment()
    {
        int p=wg*wd;
        return p;
    }
};
int main()
{
    Employee e1;
    e1.getData();
    e1.showdata();
    int pay1=e1.pyment();
    cout<<"\n the payment of employee-1 is"<<pay1;

    Employee e2;
    e2.getData();
    e2.showdata();
    int pay2=e2.pyment();
    cout<<"\n the payment of employee-2 is"<<pay2;


}
