#include<iostream>
using namespace std;
int main()
{
    int arr[]={100,200,300,400,500};
    int *p,i,x=0;
    p=arr;
    cout<<"\n\n All Array elements are:\n";
    for(i=0;i<=4;i++)
    {
        cout<<*p<<" ";
        *p++;
        x++; //count all element x=5
    }
    x--;
    cout<<"\n\n Reverse Elements are :\n";
    *p--;
    for(i=x;i>=0; i--)
    {
       // if(*p!=0)
        //{
         cout<<*p<<" ";
        //}
        *p--;

    }
    return 0;
}
