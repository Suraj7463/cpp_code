#include<iostream>
using namespace std;
int main()
{
    int a=500;
    int b=300;
    int *p;
    p=&a;
    cout<<"\n Result of pointer before Null is "<<p;
    cout<<"\n Result is"<<*p;

    p=NULL;
    cout<<"\n result of pointer after null is "<<p;
    p=&b;
    cout<<"\n Result is "<<*p;
    return 0;

}
