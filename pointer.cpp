#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    int **q;
    p=&a;     //storing address of variable a

    q=&p;    //storing address of variable p
    cout<<"\n value is :"<<a;
    cout<<"\n value is :"<<*p;
    cout<<"\n value is :"<<**q;

    cout<<"\n value is :"<<a;
    cout<<"\n value is :"<<p;
    cout<<"\n value is :"<<*q;
    cout<<"\n value is :"<<q;
    return 0;
}
