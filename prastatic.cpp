#include<iostream>
using namespace std;
class Account
{
    private:string name;
    private:int bal;
    private:static float roi;
    public : void enterdata()
    {
        cout<<"\n enter name";
        cin>>name;
        cout<<"\n enter bal ";
        cin>>bal;
    };
    public :void showdata()
    {
        cout<<"\n name is "<<name;
        cout<<"\n bal is "<<bal;
        cout<<"\n roi is "<<roi;
    }
};
float Account::roi=9.5;
int main()
{
    Account a;
    a.enterdata();
    a.showdata();

    Account b;
    b.enterdata();
    b.showdata();
    return 0;
}

