#include<iostream>
using namespace std;
class Employee
{
    private : string ename;
    private : string job;
    private : static string company;

    public:void enterData()
    {
        cout<<"\n enter the employee name";
        cin>>ename;

        cout<<"\n Employee enter the employee job";
        cin>>job;
    };
    public:void showInfo()
    {
        cout<<"\n Employee name is :"<<ename;
        cout<<"\n Employee job is :"<<job;
        cout<<"\n Employee company :"<<company;
    }
    public:static void changeCompany()
    {
        company="Infoses";
        cout<<"\n updated company name is "<<company;
    }

};
string Employee::company="Accenture";
int main()
{
    Employee e1;
    e1.enterData();
    e1.showInfo();
    Employee::changeCompany();

    cout<<"-------------------";

    Employee e2;
    e2.enterData();
    e2.showInfo();
    Employee::changeCompany();
}
