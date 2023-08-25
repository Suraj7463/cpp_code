#include<iostream>
using namespace std;
class student
{
    private :int che,math,phy,rollno;
    private :char name[9];


    public : readdata()
    {
        cout<<"\n enter roll no";
        cin>>rollno;
        cout<<"\n enter marks of chemistry";
        cin>>che;
        cout<<"\n enter marks of mathematics";
        cin>>math;
        cout<<"\n enter marks of physics";
        cin>>phy;
        cout<<"\n enter name";
        cin>>name;


    }
    public:showdata()
    {
        cout<<"\n rollno:"<<rollno;
        cout<<"\n name:"<<name;
        cout<<"\n chemistry:"<<che;
        cout<<"\n mathematics:"<<math;
        cout<<"\n physics:"<<phy;

    }
    public:percentage()
    {
        int sum=che+math+phy;
        float per=sum/3;
        cout<<"\n percentage is :"<<per;
    }
};
int main()
{
    student s;
    s.readdata();
    s.showdata();
    s.percentage();
    return 0;
}
