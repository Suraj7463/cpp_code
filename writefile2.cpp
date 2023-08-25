#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int che,math,phy,tmark;
    float per;
    string name,p;
    cout<<"\n enter student name";
    cin>>name;

    cout<<"\n enter physics chemistry math mark respectively";
    cin>>phy>>che>>math;

    tmark=phy+che+math;
    cout<<"\n total mark is :"<<tmark<<endl;

    per=tmark/3;
    cout<<name<<" percentage is :"<<per<<endl;

    if(math>=40 && che>=40 && phy>=40)
    {
        cout<<name<<" is pass"<<endl;
          p="pass";
    }
    else
    {
        cout<<name<<"is fail"<<endl;
        p="fail";

    }

    fstream stud;
    stud.open("sdetails.txt",ios::out);

    stud<<"\n student name is"<<name;
    stud<<"\n student mark is\n physics:"<<phy<<"\n chemistry:"<<che<<"\n mathematics:"<<math;
    stud<<"\n student total mark is :"<<tmark;
    stud<<"\n student percentage is :"<<per;
    stud<<"\n student is :"<<p;

    cout<<"\n data is inserted in file and file is created successfully";
    stud.close();
    return 0;
}
