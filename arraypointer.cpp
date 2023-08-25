#include<iostream>
using namespace std;
int main()
{
    int num[]={100,200,300,400,500};//a/c to number of elements take size
    int *p,i;
    p=num; //Storing address of Array.
    cout<<"\n Array elements are:\n";

    for(i=0; i<=4; i++)
    {
        cout<<*p<<" ";

        *p++;
    }
    return 0;
}
