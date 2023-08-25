#include<iostream>
using namespace std;
class worker
{
    private:string name;
    private:string city;
    private:int wdays;
    private:int wages;

    public : void readdata()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter city name";
        cin>>city;
        cout<<"enter wages";
        cin>>wages;
        cout<<"enter wdays";
        cin>>wdays;
    };
    public : void showdata()
    {
        cout<<"\n name is : "<<name;
        cout<<"\n city is : "<<city;
        cout<<"\n salary of employee : "<<wages;
        cout<<"\n total worked days of employee : "<<wdays;
    }
    friend void payment(worker w);
};
void payment(worker w)
{
    int pay=w.wages*w.wdays;
    cout<<"\n payment is :"<<pay;
}
int main()
{
    worker obj;
    obj.readdata();
    obj.showdata();
    payment(obj);
}
