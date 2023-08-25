#include<iostream>
using namespace std;
int main()
{
    int arr[]={100,200,300,400,500};
    int brr[]={10,20,300,40,50,5000};
    int *p,*q;
    int i,c=0,s=0;
    int sum=0,sum1=0;
    p=arr;
    q=brr;
    cout<<"\n all elements are in arr: \n";
    for(i=0;i<=4;i++)
    {
        cout<<*p<<" ";
        c++;
        sum=sum+*p;
        *p++;
    }
    cout<<"\n total elements are :"<<c;
    cout<<"\n total array elements sum is :"<<sum;
    cout<<"\n all elements are in brr: \n";
    for(i=0;i<=5;i++)
    {
        cout<<*q<<" ";
        s++;
        sum1=sum1+*q;
        *q++;
    }
    cout<<"\n total elements are :"<<s;
    cout<<"\n total array elements sum is :"<<sum1;
    if(s>c)
    {
      cout<<"\n brr array is greater than arr";
    }

    else

    {
        cout<<"\n arr array is greater than brr";

    }
}

